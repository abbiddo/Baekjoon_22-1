/**
프로그램명 : 1564.cpp
설명 : 팩토리얼 5 
작성일시 : 2022.03.03
작성자 : 정소영 
**/

#include <iostream>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,cnt=0;
	unsigned long long re=1;
	cin>>n;
	
	for (int i=1;i<=n;i++){
		re*=i;
		while(re%10==0){
			re/=10;
		}
		re%=1000000000000;
	}
	re%=100000;
	if (re<10000) cout<<0;
	if (re<1000) cout<<0;
	if (re<100) cout<<0;
	if (re<10) cout<<0;
	cout<<re;
}

/**  
실행결과 
18
-----
05728
**/  
