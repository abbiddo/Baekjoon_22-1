/**
프로그램명 : 5911.cpp
설명 : 선물 
작성일시 : 2022.03.03 -> 06
작성자 : 정소영 
**/

#include <iostream>
#include <algorithm>
using namespace std;

long long n,m,ma,i;

class present{
	public:
		int m,p,s;
}; 

present *p = new present[1000];

int cmp(present a, present b){
	if (a.s!=b.s) return a.s<b.s;
	return a.m>b.m;
}

long long money(int k){
	long long a=0,i;
	for (i=0;i<n;i++){
		if (k==i) a+=p[i].m/2+p[i].p;
		else a+=p[i].s;
		if (a>m) break;
	}
	
	return i;
}
 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n>>m;
	
	for (int i=0;i<n;i++){
		cin>>p[i].m>>p[i].p;
		p[i].s=p[i].m+p[i].p;
	}
	
	sort(p,p+n,cmp);
	
	for (int i=0;i<n;i++) ma=max(ma,money(i));
	
	cout<<ma;
}

/**
실행 결과 
5 24
4 2
2 0
8 1
6 3
12 5
-----
4
**/ 
