/**
프로그램명 : 11053.cpp
설명 : 가장 긴 증가하는 부분 수열 
작성일시 : 2022.02.26
작성자 : 정소영 
**/

#include <iostream>
using namespace std;
int arr[1001],dp[1001],cnt,n;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n;
	for (int i=1;i<=n;i++) cin>>arr[i];
	
	for (int i=1;i<=n;i++){
		dp[i]=1;
		for (int j=0;j<i;j++){
			if (arr[j]<arr[i]) dp[i]=max(dp[i],dp[j]+1);
		}
		cnt=max(cnt,dp[i]);
	}
	cout<<cnt;
}

/**
실행 결과
6
10 20 10 30 20 50
-----
4
**/  
