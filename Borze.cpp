#include<bits/stdc++.h>
using namespace std;
int main(){
		string code;
		cin>>code;
		for(int i=0;i<code.size();i++){
			if(code[i]=='.'){
				cout<<"0";
			}
			if(code[i]=='-'){
				if(code[i+1]=='.'){
					cout<<"1";
					i++;
				}
				else{
					cout<<"2";
					i++;
				}
			}

		}
}