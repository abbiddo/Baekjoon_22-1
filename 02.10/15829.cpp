/**
프로그램명 : 15829.cpp
설명 : hashing 
작성일시 : 2022.02.10
작성자 : 정소영 
**/

#include <iostream>
using namespace std;
int main(){
	long long n,i=1,re=0;
	string a;
	cin>>n>>a;
	
	for (int j=0;j<n;j++){
		re=(re+(a[j]-96)*i)%1234567891;
		i*=31;
		i%=1234567891;
	}
	
	cout<<re;
}

/**
5        (입력) 
abced
4739715  (출력)
**/  
