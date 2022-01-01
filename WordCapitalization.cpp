#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin>>str;
	int i;
	if(islower(str[0])){
		str[0]=toupper(str[0]);
	}
	for (int i = 0; i < str.size(); ++i)
	{
		cout<<str[i];
	}
}