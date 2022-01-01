#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,max=0;
	cin>>n;
	int num,i;
	while(n--){
		cin>>num;
		for (i=2;i<=num;i++){
			if(num%i==0){
				cout<<i<<"\n";
				break;
			}
		}
	}
}