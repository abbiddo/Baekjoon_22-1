/**
프로그램명 : 2217.cpp
설명 : 로프 
작성일시 : 2022.02.20
작성자 : 정소영 
**/

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n,a[100000],m=0;
	cin>>n;
	for (int i=0;i<n;i++) cin>>a[i];
	
	sort(a,a+n);
	
	for (int i=0;i<n;i++) m=max(m,a[i]*(n-i));
	
	cout<<m;
}

/**
실행 결과 
2
10
15
-----
20
**/  
