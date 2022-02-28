/**
프로그램명 : 2644.cpp
설명 : 촌수계산 
작성일시 : 2022.02.28
작성자 : 정소영 
**/

#include <iostream>
using namespace std;

int n,a,b,m,x,y;
int arr[101][101];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n>>a>>b>>m;
	for (int i=0;i<m;i++){
		cin>>x>>y;
		arr[x][y]=arr[y][x]=1;
	}
	
	for (int k=1;k<=n;k++)
		for (int i=1;i<=n;i++)
			for (int j=1;j<=n;j++)
				if (arr[i][k]!=0 && arr[k][j]!=0){
					if (arr[i][j]==0) arr[i][j]=arr[i][k]+arr[k][j];
					else arr[i][j]=min(arr[i][j],arr[i][k]+arr[k][j]);
				}
				
	if (arr[a][b]==0) cout<<-1;
	else cout<<arr[a][b];
}

/**  
실행결과 
9
7 3
7
1 2
1 3
2 7
2 8
2 9
4 5
4 6
-----
3
**/  
