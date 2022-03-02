/**
프로그램명 : 1334.cpp
설명 : 다음 팰린드롬 수 
작성일시 : 2022.03.02
작성자 : 정소영 
**/

#include <iostream>
using namespace std;

string n,re;

int ok(){
	int k=re.size();
	for (int i=0;i<k;i++)
		if (re[i]!=re[k-1-i]) return 1;
	return 0;
}

void res(){
	int i=re.size()-1;
	int j=re.size()-1;
	char temp;
	re[re.size()-1]+=1;
	while(re[i]>'9'){
		if (i==0){
			re[i]='0';
			re='1'+re;
			return;
		}
		re[i]='0';
		re[--i]+=1;
		
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n;
	
	re=n;
	res();
	
	while(ok()) res();
	
	cout<<re;
}

/**  
실행결과 
1999
-----
2002
**/  
