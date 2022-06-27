/**
프로그램명 : 2293.cpp
설명 : 동전1
작성일시 : 2022.06.27
작성자 : 정소영
**/

#include <iostream>
using namespace std;
int dp[100001] = { 1 };
int arr[101];
int main() {
	int a, n;
	cin >> n >> a;
	for (int i = 1; i <= n; i++) cin >> arr[i];

	for (int i = 1; i <= n; i++) 
		for (int j = arr[i]; j <= a; j++) 
			dp[j]+=dp[j-arr[i]];
	cout << dp[a];
}

/**
실행 결과
3 10
1
2
5
-----
10
**/
