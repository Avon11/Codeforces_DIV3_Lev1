#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,x=4;
	int mat[5][5];
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			cin>> mat[i][j];
			if(mat[i][j]==1){
				x=x-i-j;
				if(x>=0){
					cout<<x;
				}
				else{
					cout<<x*(-1);
				}

				break;
			}
		}
	}

}