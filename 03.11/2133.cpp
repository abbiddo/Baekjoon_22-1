/**
프로그램명 : 2133.cpp
설명 : 타일 채우기 
작성일시 : 2022.03.13
작성자 : 정소영 
**/

#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	int arr[16]={3,11};
	cin>>n;
	
	if (n%2==1) cout<<0;
	else {
		for (int i=2;i<n/2;i++) arr[i]=4*arr[i-1]-arr[i-2];
		cout<<arr[n/2-1];
	}
}

/**
실행 결과 
4
-----
11
**/ 
