#include<bits/stdc++.h>
#include <cctype>
using namespace std;
int main(){
	string s,snew;
	cin>>s;
	int up=0,low=0;
	for(int i=0;i<s.size();i++){
		if(isupper(s[i])){
			up++;
		}
		else{
			low++;
		}
	}

	if(up>low){

		for(int i=0;i<s.size();i++){
			char ch=toupper(s[i]);
			cout<<ch;
		}
	}
	else{

		for(int i=0;i<s.size();i++){
			char ch=tolower(s[i]);
			cout<<ch;
		}
	}
	return 0;
}