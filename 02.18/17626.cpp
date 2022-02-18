/**
프로그램명 : 17626.cpp
설명 : 4개 이하의 제곱수 
작성일시 : 2022.02.18
작성자 : 정소영 
**/

#include <iostream>
using namespace std;
int arr[50001];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin>>n;
	
	arr[1]=1;
	
	for (int i=2;i<=n;i++){
		arr[i]=arr[i-1]+1;
		for (int j=2;j*j<=i;j++){
			arr[i]=min(arr[i],1+arr[i-j*j]);
		}
	}
	
	cout<<arr[n];
}

/**
실행 결과 
26
-----
2
**/  
