/**
프로그램명 : 1490.cpp
설명 : 자리수로 나누기 
작성일시 : 2022.03.11
작성자 : 정소영 
**/

#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int arr[10]={0};
	long long n,re,k,m=0,jj=1;
	cin>>n;
	
	k=n;
	while(k){
		arr[k%10]=1;
		m=max(m,k%10);
		k/=10;
	}
	
	re=n;
	while(1){
		for (int i=1;i<=m;i++){
			if (arr[i]==1){
				if (re%i!=0) break;
				if (i==m && re%i==0){
					cout<<re;
					return 0;
				}
			}
		}
		re++;
		if (re%jj==0){
			re-=jj;
			re*=10;
			jj*=10;
		}
	}
}

/**
실행 결과 
987654321
-----
987654321360
**/ 
