/**
프로그램명 : 2960.cpp
설명 : 에라토스테네스의 체
작성일시 : 2022.02.20
작성자 : 정소영 
**/

#include <iostream>
#include <cmath>
using namespace std;
int arr[1001];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n,k,cnt=0;
	cin>>n>>k;
	
	for (int i=2;i<=n;i++)
		if (arr[i]==0)
			for (int j=1;j*i<=n;j++){
				if (arr[i*j]==0){
					arr[i*j]=1;
					cnt++;	
				}
				if (cnt==k){
					cout<<i*j;
					return 0;
				}
			}
}

/**
실행 결과 
15 12
-----
7
**/  
