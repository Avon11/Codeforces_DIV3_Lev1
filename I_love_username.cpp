#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int score[n],i,max,min,count=0;
	for(i=0;i<n;i++){
		cin>>score[i];
	}
	max=score[0];
	min=score[0];
	for(i=1;i<n;i++){
		if(score[i]>max){
			count++;
			max=score[i];
		}
		if(score[i]<min){
			count++;
			min=score[i];
		}
	}
	cout<<count;
}