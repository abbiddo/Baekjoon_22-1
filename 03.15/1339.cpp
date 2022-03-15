/**
프로그램명 : 1339.cpp
설명 : 단어 수학 
작성일시 : 2022.03.15
작성자 : 정소영 
**/

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int n;
int len[10], al[26];
string s[10];

bool cmp(int a, int b){
	return a>b;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n;
	for (int i=0;i<n;i++) {
		cin>>s[i];
		len[i]=s[i].size();
	}
	
	for (int i=0;i<n;i++){
		int k=1;
		for (int j=len[i]-1;j>=0;j--){
			al[s[i][j]-'A']+=k;
			k*=10;
		}
	}
	
	sort (al,al+26,cmp);
	
	int re=0;
	for (int i=0;i<10;i++) re+=al[i]*(9-i);
	
	cout<<re;
}

/**
실행 결과 
2
GCF
ACDEB
-----
99437
**/ 
