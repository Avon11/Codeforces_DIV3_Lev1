#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int a=0,b=0,c=0,d=0;
	cin>>n;
	while(n--){
	cin>>a>>b>>c>>d;
		if(a<b){
			a=a+c;
		}
		else{
			b=b+c;
		}
		if(a<b){
			a=a+d;
		}
		else{
			b=b+d;
		}
		if(a<b){
			cout<<"S"<<"\n";
		}
		else{
			cout<<"N"<<"\n";
		}
	}
}