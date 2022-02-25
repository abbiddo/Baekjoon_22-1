/**
프로그램명 : 11660.cpp
설명 : 구간 합 구하기 5 
작성일시 : 2022.02.24
작성자 : 정소영 
**/

#include <iostream>
using namespace std;

int n,m;
int arr[1025][1025];
int sum[1025][1025];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n>>m;
	
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			cin>>arr[i][j];
			sum[i][j]=sum[i][j-1]+sum[i-1][j]-sum[i-1][j-1]+arr[i][j];
		}
	}
	
	for (int i=0;i<m;i++){
		int x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		cout<<sum[x2][y2]-sum[x1-1][y2]-sum[x2][y1-1]+sum[x1-1][y1-1]<<"\n";
	}
}

/**
실행 결과
4 3
1 2 3 4
2 3 4 5
3 4 5 6
4 5 6 7
2 2 3 4
3 4 3 4
1 1 4 4
-----
27
6
64
**/  
