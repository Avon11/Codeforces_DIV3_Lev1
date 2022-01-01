#include<bits/stdc++.h>
using namespace std;
int main(){
	int k,l,m,n,d,i=1,num=0;
	cin>>k>>l>>m>>n>>d;
	if(d>=k && d>=l && d>=m && d>=n){

		while(i<=d){
			if(i%k!=0 && i%l!=0 && i%m!=0 && i%n!=0){
				num++;
			}
			i++;
		}
		cout<<d-num;

	}
	else
	{
		cout<<"0";
	}
}