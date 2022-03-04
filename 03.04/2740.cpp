/**
프로그램명 : 2740.cpp
설명 : 행렬 곱셈 
작성일시 : 2022.03.04
작성자 : 정소영 
**/

#include <iostream>
using namespace std;

int n,m,l;
int a[100][100],b[100][100],re[100][100];


int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n>>m;
	for (int i=0;i<n;i++)
		for (int j=0;j<m;j++) cin>>a[i][j];

	cin>>m>>l;
	for (int i=0;i<m;i++)
		for (int j=0;j<l;j++) cin>>b[i][j];		
		
	
	for (int i=0;i<n;i++){
		for (int j=0;j<l;j++){
			for (int k=0;k<m;k++){
				re[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	
	for (int i=0;i<n;i++){
		for (int j=0;j<l;j++) cout<<re[i][j]<<" ";
		cout<<"\n";
	}
}

/**  
실행결과 
3 2
1 2
3 4
5 6
2 3
-1 -2 0
0 0 3
-----
-1 -2 6
-3 -6 12
-5 -10 18
**/  
