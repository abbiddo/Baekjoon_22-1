/**
프로그램명 : 4963.cpp
설명 : 섬의 개수 
작성일시 : 2022.02.28
작성자 : 정소영 
**/

#include <iostream>
using namespace std;

int a,b,cnt;
int arr[51][51];

void change(int i, int j){
	arr[i][j]=0;
	if (i<a-1 && arr[i+1][j]) change(i+1,j);
	if (i>0 && arr[i-1][j]) change(i-1,j);
	if (j<b-1 && arr[i][j+1]) change(i,j+1);
	if (j>0 && arr[i][j-1]) change(i,j-1);
	if (i<a-1 && j<b-1 && arr[i+1][j+1]) change(i+1,j+1);
	if (i<a-1 && j>0 && arr[i+1][j-1]) change(i+1,j-1);
	if (i>0 && j<b-1 && arr[i-1][j+1]) change(i-1,j+1);
	if (i>0 && j>0 && arr[i-1][j-1]) change(i-1,j-1);
}

void land(){
	cnt=0;
	for (int i=0;i<a;i++)
		for (int j=0;j<b;j++)
			if (arr[i][j]==1){
				cnt++;
				change(i,j);
			}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	while(1){
		cin>>b>>a;
		if (a==0 && b==0) break;
		for (int i=0;i<a;i++)
			for (int j=0;j<b;j++) cin>>arr[i][j];
			
		land();
		cout<<cnt<<"\n";
	}
}

/**  
실행결과 
1 1
0
2 2
0 1
1 0
3 2
1 1 1
1 1 1
5 4
1 0 1 0 0
1 0 0 0 0
1 0 1 0 1
1 0 0 1 0
5 4
1 1 1 0 1
1 0 1 0 1
1 0 1 0 1
1 0 1 1 1
5 5
1 0 1 0 1
0 0 0 0 0
1 0 1 0 1
0 0 0 0 0
1 0 1 0 1
0 0
-----
0
1
1
3
1
9
**/  
