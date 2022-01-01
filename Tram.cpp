#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int ex[1001],en[1001],i,j,sum[n],max=0;
	for(i=0;i<n;i++){
			cin>>ex[i]>>en[i];
			if(i>0){

			sum[i]=abs(en[i-1]-ex[i])+en[i];
			en[i]=sum[i];
			}
	}
	sum[0]=en[0]+ex[0];
	for(i=0;i<n;i++){
		// cout<<ex[i]<<" "<<en[i]<<" "<<sum[i]<<"\n";
		if(sum[i]>max){
			max=sum[i];
		}
	}
	cout<<max;
}