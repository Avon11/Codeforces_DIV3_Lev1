#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1,s2;
	int i;
	cin>>s1;
	cin>>s2;
	for(i=0;i<s1.size();i++){
		if(s1[i]==s2[i]){
			cout<<"0";
		}
		else{
			cout<<"1";
		}
	}
}