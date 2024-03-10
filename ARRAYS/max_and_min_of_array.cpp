#include <bits/stdc++.h>
using namespace std;
vector<int> helper(vector<int> v){
    int maxi=INT_MIN;
    int mini=INT_MAX;

    for(int i=0;i<v.size();i++){
        if(v[i]>maxi){
            maxi=v[i];
        }
        if(v[i]<mini){
            mini=v[i];
        }
    }

    return {maxi,mini};

}
int main(){

int n;
cin>>n;
vector<int> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}

vector<int> ans=helper(v);

cout<<"Maximum element: "<<ans[0]<<endl;
cout<<"Minimum element: "<<ans[1]<<endl;



}