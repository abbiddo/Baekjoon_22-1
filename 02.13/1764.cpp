/**
프로그램명 : 1764.cpp
설명 : 듣보잡 (문자열 찾기) 
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
3 4        (입력)
ohhenrie
charlie
baesangwook
obama
baesangwook
ohhenrie
clinton
2          (출력)
baesangwook
ohhenrie

**/  
