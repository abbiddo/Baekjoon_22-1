/**
프로그램명 : 2579.cpp
설명 : 계단 오르기 
작성일시 : 2022.01.31
작성자 : 정소영 
**/

#include <iostream>
using namespace std;
int main(){
	int s[301]={0};
	int r[301]={0};
	int n,i;
	
	cin>>n;
	
	for (i=1;i<=n;i++) cin>>s[i];
	
	r[1]=s[1];
	r[2]=s[1]+s[2];
	
	for (i=3;i<=n;i++) r[i]=s[i]+max(s[i-1]+r[i-3],r[i-2]);
	
	cout<<r[n];
}

/**
6          (입력) 
10
20
15
25
10
20
75         (출력) 
**/ 
