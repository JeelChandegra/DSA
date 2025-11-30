	#include <bits/stdc++.h>
	using namespace std;

	int main() {
	   int arr[5][5];
	   int count=0;
	   for( int i=1;i<=5;i++){
	   	for(int j=1;j<=5;j++){
	   		int x;
	   		cin>>x;
	   		if(x!=0){
	   			count+=abs(3-i);
	   			count+=abs(3-j);

	   		}
	   	}
	   }
	   cout<<count;
	}
  
