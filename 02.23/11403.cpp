/**
프로그램명 : 11403.cpp
설명 : 경로 탐색 
작성일시 : 2022.02.23
작성자 : 정소영 
**/

#include <iostream>
using namespace std;
int n,arr[100][100];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n;
	for (int i=0;i<n;i++)
		for (int j=0;j<n;j++) cin>>arr[i][j];
		
	for (int i=0;i<n;i++)
		for (int j=0;j<n;j++)
			for (int k=0;k<n;k++)
				if (arr[i][k]+arr[k][j]==2){
					arr[i][j]=1;
					break;
				}
	for (int i=0;i<n;i++)
		for (int j=0;j<n;j++)
			for (int k=0;k<n;k++)
				if (arr[i][k]+arr[k][j]==2){
					arr[i][j]=1;
					break;
				}
				
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++) cout<<arr[i][j]<<" ";
		cout<<"\n";
	}
}

/**
실행 결과 
3
0 1 0
0 0 1
1 0 0
-----
1 1 1
1 1 1
1 1 1
**/  
