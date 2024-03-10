#include <bits/stdc++.h>
using namespace std;
void helper(vector<int>& v){
  int i=0;
  int j=v.size()-1;
  while(i<j){
   swap(v[i],v[j]);
   i++;
   j--;
  }

  return ;
}
int main(){

int n;
cin>>n;
vector<int> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}

helper(v);

for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
}

}