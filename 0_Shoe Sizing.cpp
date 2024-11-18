#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); 

    int n, m, c;
    cin >> n >> m;

    vector<int> vec1(n), vec2(m), ans;
    set<int> set1;

    for (int i = 0; i < n; ++i) {
        cin >> c;
        vec1[i] = c;
        set1.insert(c);
    }

    for (int i = 0; i < m; ++i) {
        cin >> c;
        vec2[i] = c;
    }

    // Reserve space for the answer vector
    ans.reserve(m);

    for (int x : vec2) {
        auto it = set1.lower_bound(x);

        if (it != set1.end() && it != set1.begin()) {
            auto it1 = it;
            auto it2 = prev(it);

            int dist1 = abs(*it1 - x);
            int dist2 = abs(*it2 - x);

            if (dist1 < dist2) {
                ans.push_back(*it1);
            } else if (dist2 < dist1) {
                ans.push_back(*it2);
            } else {
                ans.push_back(*it1); // or *it2, both are equally valid
            }
        } else if (it == set1.end()) {
            ans.push_back(*prev(it));
        } else {
            ans.push_back(*it);
        }
    }

    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
