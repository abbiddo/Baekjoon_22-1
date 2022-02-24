/**
프로그램명 : 5525.cpp
설명 : IOIOI 
작성일시 : 2022.02.24
작성자 : 정소영 
**/

#include <iostream>
using namespace std;
int n,t,ox,cnt=0;
string io;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n>>t>>io;
	
	for (int i=0;i<=t-(2*n+1);i++){
		ox=0;
		if (io[i]=='I'){
			while(io[i+1]=='O' && io[i+2]=='I'){
				i+=2;
				ox++;
				if (ox==n) {
					ox--;
					cnt++;
				}
			}
		}
	}
	cout<<cnt;
}

/**
실행 결과
2
13
OOIOIOIOIIOII
-----
2
**/  
