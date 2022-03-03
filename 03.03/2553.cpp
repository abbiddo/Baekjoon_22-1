/**
프로그램명 : 2553.cpp
설명 : 마지막 팩토리얼 수 
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
		re%=1000000;
	}
	re%=10;
	cout<<re;
}

/**
실행 결과 
5
-----
2
**/  
