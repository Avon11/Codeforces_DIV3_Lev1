#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,num,i;
	cin>>n;
	while(n--){
		int count=0;
		cin>>num;
		for(i=5;num/i>=1;i=i*5){
			count += num / i;
		}
		cout<<count<<"\n";
	}
}