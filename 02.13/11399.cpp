/**
프로그램명 : 11399.cpp
설명 : ATM 
작성일시 : 2022.02.13
작성자 : 정소영 
**/

#include <iostream>
#include <algorithm>
using namespace std;
int a[1000];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,re=0;
	cin>>n;
	
	for (int i=0;i<n;i++) cin>>a[i];
	
	sort(a,a+n);
	
	for (int i=0;i<n;i++) re+=a[i]*(n-i);
	
	cout<<re;
}

/**
5          (입력)
3 1 4 3 2
32         (출력)
**/  
