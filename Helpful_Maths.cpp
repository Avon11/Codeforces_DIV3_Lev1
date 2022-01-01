#include<bits/stdc++.h>
using namespace std;
int main(){
	string str,str2;
	int n=str2.size();
	int i;
	cin>>str;
	if(str.size()<2){
		cout<<str;
	}
	else{
		for(i=0;i<str.size();i++){
			if(i%2==0){
				str2+=str[i];
			}
		
		}
		sort(str2.begin(),str2.end());
		cout<<str2[0];
		for(i=1;i<str2.size();i++){
			cout<<"+"<<str2[i];

		}
	}
	
}