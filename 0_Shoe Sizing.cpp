#include <iostream>
#include <vector>
#include <set>
#include <utility>  
#include <algorithm>
#include <array>
#include <map>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); 
    int n,m,c;
    vector<int> vec1,vec2,ans;
    cin >> n >> m;
    for (auto i =0;i < n;i++){
        cin >> c;
        vec1.push_back(c);
    }
    set<int> set1(vec1.begin(),vec1.end());
    for (auto i =0;i < m;i++){
        cin >> c;
        vec2.push_back(c);
    }
    auto bb = set1.begin();
    auto ee = set1.end();
    ee--;
    for(auto x:vec2){
        if (set1.find(x) != set1.end()){
            ans.push_back(x);              //เจอ            
        }else if (x > *ee ){               
            ans.push_back(*ee);            //เอาตัวเกินออก
        }else if (x < *bb){                             
            ans.push_back(*bb);            //เอาตัวเล็กออก 
        }else{
            for (auto y:set1){
                if (x < y){
                    auto it1 = set1.find(y);
                    auto it2 = it1;
                    it1--;
                    int k1 = abs(x- * it1);
                    int k2 = abs(*it2 - x);
                    if (k1 == k2){
                        ans.push_back(*it2);
                        break;
                    }else if(k1 < k2){
                        ans.push_back(*it1);
                        break;
                    }else if (k1 > k2){
                        ans.push_back(*it2);
                        break;
                    }
                }
            }
        }
    }
    for(auto x:ans){
        cout << x << " ";
    }
    cout << endl;
}
        






        