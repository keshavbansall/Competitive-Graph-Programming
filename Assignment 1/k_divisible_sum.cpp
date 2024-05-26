#include<bits/stdc++.h>
using namespace std;
int main(){
  int t; 
  cin>>t;
  while(t--){
    long long a,b;
    cin>>a>>b;
    long long c=(a+b-1)/b;
    b=b*c;
    cout<<(b+a-1)/a<<endl;
  }
  return 0;
}
