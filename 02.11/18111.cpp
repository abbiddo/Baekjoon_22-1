/**
프로그램명 : 18111.cpp
설명 : 땅 높이 맞추기 
작성일시 : 2022.02.11
작성자 : 정소영 
**/

#include <iostream>
using namespace std;
int arr[500][500];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,m,b,mi=256,ma=0,re=2147483647,h;
	cin>>n>>m>>b;
	
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			cin>>arr[i][j];
			if (arr[i][j]>ma) ma=arr[i][j];
			if (arr[i][j]<mi) mi=arr[i][j];
		}
	}
	
	for (int i=mi;i<=ma;i++){
		int u=0,d=0;
		for (int j=0;j<n;j++){
			for (int k=0;k<m;k++){
				if (arr[j][k]-i>0) d+=arr[j][k]-i;
				else if (arr[j][k]-i<0) u+=i-arr[j][k];
			}
		}
		
		if (d+b<u) continue;
		if (re>=d*2+u) {
			re=d*2+u;
			h=i;
		}
	}
	cout<<re<<' '<<h;
}

/**
3 4 0    (입력)
64 64 64 64
64 64 64 64
64 64 64 63
22 63    (출력)
**/  
