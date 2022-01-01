#include <bits/stdc++.h>
using namespace std;
int main(){
	string guest,host,final;
	int arr[26]={0},arr2[26]={0},i,flag=1;
	cin>>guest;
	cin>>host;
	cin>>final;
	for(i=0;i<guest.size();i++){
		char ch;
		int pla;
		ch=guest[i];
		pla=int(ch)-65;
		arr[pla]+=1;
	}
	for(i=0;i<host.size();i++){
		char ch;
		int pla;
		ch=host[i];
		pla=int(ch)-65;
		arr[pla]+=1;
	}
	for(i=0;i<final.size();i++){
		char ch;
		int pla;
		ch=final[i];
		pla=int(ch)-65;
		arr2[pla]+=1;
	}
	for(i=0;i<26;i++){
		if(arr[i]!=arr2[i]){
			flag=0;
			break;
		}
	}

	if(flag==1)
		cout<<"YES";
	else
		cout<<"NO";
}