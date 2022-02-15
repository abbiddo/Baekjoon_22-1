/**
프로그램명 : 11727.cpp
설명 : 2*n 타일 2 
작성일시 : 2022.02.15
작성자 : 정소영 
**/

#include <iostream>
using namespace std;
int a[1001]={0}; 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	
	a[0]=a[1]=1;
	for (int i=2;i<=n;i++)
		a[i]=(a[i-1]+2*a[i-2])%10007;
	
	cout<<a[n];
}

/**
8
-----
171
**/  
