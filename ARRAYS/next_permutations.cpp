#include <bits/stdc++.h>
using namespace std;
void bruteRecurPermute(vector<int>& singlepermuation,vector<int>& v,vector<vector<int>>& allPermutations,int freq[]){

if(singlepermuation.size()==v.size()){
    allPermutations.push_back(singlepermuation);
    return;
}

for(int i=0;i<v.size();i++){
    if(!freq[i]){
        singlepermuation.push_back(v[i]);
        freq[i]=1;
        bruteRecurPermute(singlepermuation,v,allPermutations,freq);
        freq[i]=0;
        singlepermuation.pop_back();
    }
}



}
void next_permutation_brute(vector<int>& v){

vector<vector<int>> allPermutations;
    vector<int> singlepermuation;
    int freq[v.size()];
    for(int i=0;i<v.size();i++){
        freq[i]=0;
    }
    bruteRecurPermute(singlepermuation,v,allPermutations,freq);

// for(int i=0;i<allPermutations.size();i++){
//     for(int j=0;j<allPermutations[i].size();j++){
//      cout<<allPermutations[i][j]<<" ";
//     }
//     cout<<endl;
// }




}
int main(){

int n;
cin>>n;
vector<int> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}

next_permutation_brute(v);

// for(int i=0;i<n;i++){
//     cout<<ans[i]<<" ";
// }
// cout<<endl;
// return 0;


}