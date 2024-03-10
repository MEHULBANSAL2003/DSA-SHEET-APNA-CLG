#include <bits/stdc++.h>
using namespace std;
int helper(vector<int>& v,int m){
sort(v.begin(),v.end());
int i=0;
    int j=m-1;
    int mini=INT_MAX;
    while(j<v.size()){
        mini=min(mini,v[j]-v[i]);
        i++;
        j++;
    }
    return mini;


}
int main(){
int n;
cin>>n;
vector<int> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
int m;
cin>>m;

int mini=helper(v,m);

cout<<mini<<endl;

}