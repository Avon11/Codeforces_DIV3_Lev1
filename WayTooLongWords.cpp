#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	// string str;
	cin>>n;
	while(n--){
		string str;
		cin>>str;
		int size=str.size();
		string ch1,ch2;
		if(size>10){
			ch1=str[0];
			ch2=str[size-1];
			cout<<ch1<<size-2<<ch2<<"\n";
		}
		else{
			cout<<str<<"\n";
		}
	}
}