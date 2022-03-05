/**
프로그램명 : 1912.cpp
설명 : 연속합 
작성일시 : 2022.03.05
작성자 : 정소영 
**/

#include <iostream>
using namespace std;

int a,n,ma,k;
int arr[100000],dp[100000];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n;
	
	for (int i=0;i<n;i++) cin>>arr[i];
	
	ma=arr[0];
	dp[0]=arr[0];
		
	for (int i=1;i<n;i++){
		dp[i]=max(dp[i-1]+arr[i],arr[i]);
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
