/**
프로그램명 : 1753.cpp
설명 : 최단경로 
작성일시 : 2022.02.26
작성자 : 정소영 
**/

#include <iostream>
using namespace std;
int arr[20001][20001];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,m,a,x,y,k;
	cin>>n>>m>>a;
	
	for (int i=0;i<m;i++){
		cin>>x>>y>>k;
		if (arr[x][y]>k || arr[x][y]==0) arr[x][y]=k;
	}
	
	for (int k=1;k<=n;k++){
		for (int j=1;j<=n;j++){
			if (arr[a][k]!=0 && arr[k][j]!=0){
				if (arr[a][j]==0) arr[a][j]=arr[a][k]+arr[k][j];
				else arr[a][j]=min(arr[a][j],arr[a][k]+arr[k][j]);
			}
		}
	}
	for (int i=1;i<6;i++){
		if (a==i) cout<<0<<"\n";
		else if (arr[a][i]!=0) cout<<arr[a][i]<<"\n";
		else cout<<"INF\n";
	}
}

/**
실행 결과
5 6
1
5 1 1
1 2 2
1 3 3
2 3 4
2 4 5
3 4 6
-----
0
2
3
7
INF
**/  
