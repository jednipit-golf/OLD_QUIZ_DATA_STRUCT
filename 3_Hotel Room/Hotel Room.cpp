#include<bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n,q;
    cin >> n >> q;
    vector<int> a(n);
    for(auto &x:a){
        cin >> x;
    }
    int all=accumulate(a.begin(),a.end(),0);
    map<int,priority_queue<int>> pq;
    for(int i=0;i<n;i++){
        pq[a[i]].emplace(i);
    }
    while(q--){
        int x;
        cin >> x;
        if(x>all){
            cout << -1 << "\n";
            continue;
        }
        all-=x;
        vector<pair<int,int>> ans;
        auto solve=[&](auto &&self,int x){
            if(x==0)return;
            auto it=pq.lower_bound(x);
            if(it==pq.end()){
                it--;
            }
            int i=it->second.top();
            int v=it->first;
            int used=min(x,v);
            ans.emplace_back(it->second.top(),used);
            it->second.pop();
            v-=used;
            if(v>0){
                pq[v].emplace(i);
            }
            if(it->second.empty()){
                pq.erase(it);
            }
            self(self,x-used);
        };
        solve(solve,x);
        sort(ans.begin(),ans.end());
        for(auto [x,y]:ans){
            cout << x+1 << " " << y << " ";
        }
        cout << "\n";
    }
}
