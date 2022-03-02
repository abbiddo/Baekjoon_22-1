/**
프로그램명 : 1431.cpp
설명 : 시리얼 번호 
작성일시 : 2022.03.02
작성자 : 정소영 
**/

#include <iostream>
#include <algorithm>
using namespace std;

int n;
string s[50];

int cmp(string a, string b){
	int la=a.size(),lb=b.size();
	int na=0,nb=0;
	
	if (la!=lb) return la<lb;
	
	for (int i=0;i<la;i++)
		if (a[i]>='0' && a[i]<='9') na+=a[i]-48;
	for (int i=0;i<lb;i++)
		if (b[i]>='0' && b[i]<='9') nb+=b[i]-48;
		
	if (na!=nb) return na<nb;
	return a<b;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n;
	
	for (int i=0;i<n;i++) cin>>s[i];
	
	sort(s,s+n,cmp);
	
	for (int i=0;i<n;i++) cout<<s[i]<<"\n";
}

/**  
실행결과 
5
ABCD
145C
A
A910
Z321
-----
A
ABCD
Z321
145C
A910
**/  
