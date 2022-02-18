/**
프로그램명 : 2630.cpp
설명 : 색종이 만들기 
작성일시 : 2022.02.18
작성자 : 정소영 
**/

#include <iostream>
using namespace std;
int arr[128][128],wcnt=0,bcnt=0;
int paper(int x, int y, int n){
	int k=arr[x][y],s=0;
	
	for (int i=x;i<x+n;i++)
		for (int j=y;j<y+n;j++)
			if (k!=arr[i][j]){
				s=1;
				paper(x,y,n/2);
				paper(x,y+n/2,n/2);
				paper(x+n/2,y,n/2);
				paper(x+n/2,y+n/2,n/2);
				return 0;
			}
			
	if (s==0 && k==0) wcnt++;
	else if(s==0 && k==1) bcnt++;
	return 0;
} 

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin>>n;
	
	for (int i=0;i<n;i++)
		for (int j=0;j<n;j++) cin>>arr[i][j];
		
	paper(0,0,n);
	
	cout<<wcnt<<"\n"<<bcnt;
}

/**
실행 결과 
8
1 1 0 0 0 0 1 1
1 1 0 0 0 0 1 1
0 0 0 0 1 1 0 0
0 0 0 0 1 1 0 0
1 0 0 0 1 1 1 1
0 1 0 0 1 1 1 1
0 0 1 1 1 1 1 1
0 0 1 1 1 1 1 1
-----
9
7
**/  
