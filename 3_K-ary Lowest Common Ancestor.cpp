#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,k,a,b;
    cin >> n >> k;
    cin >> a >> b;
    set<int> x;
    x.insert(a);
    while(a>0){
        a = (a-1)/k;
        x.insert(a);
    }
    while(true){
        if(x.count(b)) break;
        b = (b-1)/k;
    }
    cout << b <<"\n";
}




