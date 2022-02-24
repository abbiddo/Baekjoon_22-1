/**
프로그램명 : 1389.cpp
설명 : 케빈 베이컨의 6단계 법칙 
작성일시 : 2022.02.24
작성자 : 정소영 
**/

#include <iostream>
using namespace std;
int friends[101]={1000};
int relate[101][101];
int n,m,mi=1000,miii=1000;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n>>m;
	
	for (int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		relate[a][b]=relate[b][a]=1;
	}
	
	for (int k=1;k<=n;k++)
		for (int i=1;i<=n;i++)
			for (int j=1;j<=n;j++)
				if (i!=j)
					if (relate[i][k]!=0 && relate[k][j]!=0)	{
						if (relate[i][j]==0) relate[i][j]=relate[i][k]+relate[k][j];
						else relate[i][j]=min(relate[i][j],relate[i][k]+relate[k][j]);
					}
	
	for (int i=1;i<=n;i++)
		for (int j=1;j<=n;j++)
			if (i!=j) friends[i]+=relate[i][j];
			
	for (int i=1;i<=n;i++)
		if (miii>friends[i]) {
			miii=friends[i];
			mi=i;
		}
	cout<<mi;
}

/**
실행 결과
5 5
1 3
1 4
4 5
4 3
3 2
-----
3
**/  
