#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,x1=2,x2=2;
	int mat[5][5];
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			cin>> mat[i][j];
			if(mat[i][j]==1){
				x1=abs(x1-i);
				x2=abs(x2-j);
				cout<<x1+x2;

				break;
			}
		}
	}

}