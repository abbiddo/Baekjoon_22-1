/**
프로그램명 : 1912.cpp
설명 : 연속합 
작성일시 : 2022.03.05
작성자 : 정소영 
**/

#include <iostream>
using namespace std;

int a,n,ma,k;
int dp[100001];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n;
	
	for (int i=1;i<=n;i++){
		cin>>a;
		dp[i]=dp[i-1]+a;
	}
	
	ma=dp[1];	
	for (int i=1;i<=n;i++){
		for (int j=1;j<i;j++){
			if (dp[j]<0) dp[i]=max(dp[i],dp[i]-dp[j]);
		}
		ma=max(dp[i],ma);
	}
	
	cout<<ma;
}

/**  
실행결과 
10
10 -4 3 1 5 6 -35 12 21 -1
-----
33
**/  
