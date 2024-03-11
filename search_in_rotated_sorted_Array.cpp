#include <bits/stdc++.h>
using namespace std;
int search(vector<int>& v,int target){

int i=0;
int j=v.size()-1;
int ans=-1;

while(i<=j){
    int mid=(i+j)/2;
    if(v[mid]==target){
       ans=mid;
       break;
    }
    else if(v[i]<=v[mid]){
       if(target>=v[i]&&target<=v[mid]){
        j=mid-1;
       }
       else{
        i=mid+1;
       }
    }
    else{
        if(target>=v[mid]&&target<=v[j]){
            i=mid+1;
        }
        else{
            j=mid-1;
        }
    }

}

return ans;


}
int main(){

int n;
cin>>n;
vector<int> v(n);

for(int i=0;i<n;i++){
    cin>>v[i];
}
int target;
cin>>target;
int ans=search(v,target);

cout<<ans<<endl;

}