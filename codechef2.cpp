#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int size,pos1,pos2;
	string str;
	string substr1="code",substr2="chef";
	while(n--){
		cin>>size;
		cin>>str;
		int pos1=str.find(substr1);
		int pos2=str.find(substr2);
		if(pos2>pos1){
			cout<<"AC"<<"\n";
		}
		else{
			cout<<"WA"<<"\n";
		}


	}
}