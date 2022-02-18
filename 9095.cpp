/**
프로그램명 : 9095.cpp
설명 : 1,2,3 더하기 
작성일시 : 2022.02.18
작성자 : 정소영 
**/

#include <iostream>
using namespace std;
int arr[11]={0,1,2,4};
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n,k;
	cin>>n;
	
	for (int i=4;i<11;i++) arr[i]=arr[i-1]+arr[i-2]+arr[i-3];
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
