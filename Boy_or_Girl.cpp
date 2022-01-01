#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin>>str;
	int i,j,cnt=0,dit;
	for(i=0;i<str.size();i++){
		for(j=i+1;j<str.size();j++){
			if(str[i]==str[j]){
				cnt++;
				break;
			}
		}
	}
	// cnt=str.size()-cnt;
	// cnt=cnt+(cnt/2);
	dit=str.size()-cnt;
	if(dit%2==0){
		cout<<"CHAT WITH HER!";
	}
	else{
		cout<<"IGNORE HIM!";
	}
}