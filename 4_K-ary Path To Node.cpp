#include<bits/stdc++.h>

using namespace std;
int main(){
    ios_base :: sync_with_stdio(0) , cin.tie(0) ;
    long long n,k,p;
    stack<long long> ans;
    cin >> n >> k;
    cin >> p;
    while(p != 0){
        long long prev = (p - 1) / k ;
        ans.push((p - 1) % k) ;
        p = prev ;
    }
    cout << ans.size() << "\n";
    while(!ans.empty()){
        cout << ans.top() << " ";
        ans.pop();
    }
  
}