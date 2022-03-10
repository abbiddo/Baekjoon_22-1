/**
프로그램명 : 9251.cpp
설명 : LCS
작성일시 : 2022.03.10
작성자 : 정소영 
**/

#include <iostream>
using namespace std;

string a,b;
int dp[1001][1001];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>a>>b;
	
	for (int i=1;i<=a.size();i++){
		for (int j=1;j<=b.size();j++){
			if (a[i-1]==b[j-1]) dp[i][j]=dp[i-1][j-1]+1;
			else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
	
	cout<<dp[a.size()][b.size()];
}

/**
실행 결과 
ACAYKP
CAPCAK
-----
4
**/ 
