#include <bits/stdc++.h>
using namespace std;
int helper(vector<int>& v){
int maxi=INT_MIN;
int sum=0;
for(int i=0;i<v.size();i++){
    sum+=v[i];
    if(sum>maxi){
        maxi=sum;
    }
    if(sum<0){
        sum=0;
    }
    
}
return maxi;
}
int main(){

int n;
cin>>n;
vector<int> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}

int maxsum=helper(v);
cout<<maxsum<<endl;

}