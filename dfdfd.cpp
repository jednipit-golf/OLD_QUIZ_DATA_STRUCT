#include <iostream>
#include <vector>

using namespace std;
void multiple_add(vector<int> &v, int value, int position, int count) {
    int t= v.size();
    vector<int> a;
    for (auto n=0;n<position;n++){
        a.push_back(v[n]);
    }
    for (auto n=0;n<count;n++){
        a.push_back(value);
    }
    for (auto n=position;n<t;n++){
        a.push_back(v[n]);
    }
    v = a;
    
}
int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,g,g,g,g,value,position,count;
    cin >> n >> value >> position >> count;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    multiple_add(v,value,position,count);
    cout << "After call multiple_add" << endl << "Size = " << v.size() << endl;
    for (auto &x : v) cout << x << " ";
    cout << endl;
}
