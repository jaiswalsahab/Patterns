//Author- Pankaj jaiswal
//Date- 17-07-2019
/*
ABCDEEDCBA
ABCDDCBA
ABCCBA
ABBA
AA
*/

#include<iostream>
using namespace std;
	int main(){
			int n;
			cin>>n;
		  for(int i=0;i<n;i++){
		  		char ch='A';
		  	 for(int j=1;j<=n-i;j++){
		  	 		cout<<ch;
		  	 		ch=ch+1;
		  	 }
		  	 ch=ch-1;
		  	 for(int j=1;j<=n-i;j++){
		  	 		cout<<ch;
		  	 		ch=ch-1;
		  	 }
		  	 cout<<endl;
		  }
		  return 0;
	}