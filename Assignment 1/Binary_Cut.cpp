#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;++i){
		string s;
		cin>>s;
		int num=1;
		for(int i=0;i<s.size()-1;++i){
			if(s[i]=='1' && s[i+1]=='0'){
				num=num+1;
			}
		}
		cout<<num<<endl;
	}

}