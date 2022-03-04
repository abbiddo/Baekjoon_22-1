/**
프로그램명 : 1629.cpp
설명 : 곱셈 
작성일시 : 2022.03.04
작성자 : 정소영 
**/

#include <iostream>
using namespace std;

long long a,b,c,re=1; 

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>a>>b>>c;
	
	while(b>0){
		if (b%2==1) re=(re%c)*(a%c)%c;
		a=(a%c)*(a%c)%c;
		b/=2;
	}
	
	cout<<re;
}

/**  
실행결과 
10 11 12
-----
4
**/  
