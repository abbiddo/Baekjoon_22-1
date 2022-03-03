/**
프로그램명 : 15988.cpp
설명 : 1, 2, 3 더하기 
작성일시 : 2022.03.03
작성자 : 정소영 
**/

#include <iostream>
using namespace std;
long long arr[1000001]={0,1,2,4};
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n,k;
	cin>>n;
	
	for (int i=4;i<1000001;i++) arr[i]=(arr[i-1]+arr[i-2]+arr[i-3])%1000000009;
	for (int i=0;i<n;i++){
		cin>>k;
		cout<<arr[k]<<"\n";
	}
}

/**
실행 결과 
3
4
7
10
-----
7
44
274
**/  
