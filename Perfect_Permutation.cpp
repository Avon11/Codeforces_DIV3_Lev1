#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	cin>>n;
	int arr[n];
	if(n%2!=0){
		cout<<"-1";
	}
	else{
		for(i=0;i<n;i++){
			arr[i]=i+1;
		}
		for(i=0;i<n;i++){
			int temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
			cout<<arr[i]<<" "<<arr[i+1]<<" ";
			i++;
		}
	}

}