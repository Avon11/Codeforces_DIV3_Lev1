#include<bits/stdc++.h>
using namespace std;
int main(){
	int year,a,b,c,d,i;
	cin>> year;
	for(i=year+1;;i++){

		a = i / 1000;
		b = i / 100 % 10;
		c = i / 10 %10;
		d = i % 10;
		if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
			cout<<a<<b<<c<<d;
			break;
		}
	}
}