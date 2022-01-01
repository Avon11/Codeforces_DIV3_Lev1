#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,t;
	string s;
	cin>>n>>t;
	cin>>s;
	while(t--){
	for(int i=0;i<n;i++){
			if(s[i]<s[i+1]){
				char temp;
				temp=s[i];
				s[i]=s[i+1];
				s[i+1]=temp;
				i=i+1;
		}
	}
}
	cout<<s;

}