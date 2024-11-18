#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    int n;
    cin >> n;
    map<int,int> mp;
    for(int i=1;i<=n;i++){
        int l,r;
        cin >> l >> r;
        auto it=mp.lower_bound(l);
        if(it==mp.end()|| it->second > r){
            cout << i << " ";
            mp[r]=l;
        }
    }
}