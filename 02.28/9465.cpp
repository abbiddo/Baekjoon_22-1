/**
프로그램명 : 9465.cpp
설명 : 스티커 
작성일시 : 2022.02.28
작성자 : 정소영 
**/

#include <iostream>
using namespace std;

int T,n;
int arr[2][100001];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>T;
	for (int i=0;i<T;i++){
		cin>>n;
		for (int j=0;j<2;j++)
			for (int k=1;k<=n;k++) cin>>arr[j][k];
		
		for (int j=2;j<=n;j++){
			arr[0][j]+=max(arr[1][j-1],arr[1][j-2]);
			arr[1][j]+=max(arr[0][j-1],arr[0][j-2]);
		}
		
		cout<<max(arr[0][n],arr[1][n])<<"\n";
	}
	
}

/**
실행 결과
2
5
50 10 100 20 40
30 50 70 10 60
7
10 30 10 50 100 20 40
20 40 30 50 60 20 80
-----
260
290

**/  
