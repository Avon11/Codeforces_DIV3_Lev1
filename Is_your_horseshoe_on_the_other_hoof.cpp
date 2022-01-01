#include<bits/stdc++.h>
using namespace std;
int main(){
	int s1,s2,s3,s4,cnt=0;
	cin>>s1>>s2>>s3>>s4;
	int arr[4]={s1,s2,s3,s4};
	for(int i=0;i<4;i++){
		for(int j=i+1;j<4;j++){
			if(arr[i]==arr[j]){
			cnt++;
			break;
			}

		}
		
	}
	
	cout<<cnt;
}