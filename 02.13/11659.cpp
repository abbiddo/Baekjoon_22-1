/**
프로그램명 : 11659.cpp
설명 : 구간 합 구하기 4 
작성일시 : 2022.02.13
작성자 : 정소영 
**/

#include <iostream>
using namespace std;
int a[100000];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,m,u;
	int k,kk,re;
	
	cin>>n>>m;
	
	cin>>u;
	a[0]=0;
	a[1]=u;
	
	for (int i=2;i<=n;i++){
		cin>>u;
		a[i]=a[i-1]+u;
	}
	
	for (int i=0;i<m;i++){
		re=0;
		cin>>k>>kk;
		cout<<a[kk]-a[k-1]<<"\n";
	}
}

/**
5 3        (입력)
5 4 3 2 1
1 3
2 4
5 5
12         (출력)
9
1

**/  
