// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     ios_base::sync_with_stdio(false); cin.tie(0);
//     long long n,v,size = 0,cap = 1;
//     char c;
//     bool check = true;
//     cin >> n;
//     while (n--) {
//         cin >> c >> v;
//         switch (c) {
//             case 'p':
//                 while (cap < size + v) {
//                     cap *= 2;
//                 }
//                 size += v;
//             break;
//             case 'o':
//                 size -= v;
//             break;
//             case 'r':
//                 size = v;
//                 cap = max(size, cap);
//             break;
//         }
//     } 
//     cout << cap - size << "\n"; 
// }

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    long long n,a,mData = 0,mCap = 1;
    string k;
    cin >> n;
    while(n--){
        cin >> k;
        if(k == "p"){
            cin >> a;
            mData +=a;
            while(mCap < mData){
                mCap = mCap*2;
            } 
        }else if(k == "o"){
            cin >> a;
            mData -=a;
            if(mData<0){
                mData =0;
            }
        }else if(k == "r"){
            cin >> a; 
            mData = a;
            mCap = max(mData, mCap);
        }
    }
    cout << mCap - mData << "\n"; 
}







