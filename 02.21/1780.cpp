/**
프로그램명 : 1780.cpp
설명 : 종이 개수 
작성일시 : 2022.02.21
작성자 : 정소영 
**/

#include <iostream>
using namespace std;
int arr[2187][2187],mcnt=0,zcnt=0,pcnt=0;
int paper(int x, int y, int n){
	int k=arr[x][y],s=0;
	
	for (int i=x;i<x+n;i++)
		for (int j=y;j<y+n;j++)
			if (k!=arr[i][j]){
				s=1;
				paper(x,y,n/3);
				paper(x,y+n/3,n/3);
				paper(x,y+n/3+n/3,n/3);
				paper(x+n/3,y,n/3);
				paper(x+n/3,y+n/3,n/3);
				paper(x+n/3,y+n/3+n/3,n/3);
				paper(x+n/3+n/3,y,n/3);
				paper(x+n/3+n/3,y+n/3,n/3);
				paper(x+n/3+n/3,y+n/3+n/3,n/3);
				return 0;
			}
			
	if (s==0 && k==0) zcnt++;
	else if(s==0 && k==1) pcnt++;
	else if (s==0 && k==-1) mcnt++;
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
	
	cout<<mcnt<<"\n"<<zcnt<<"\n"<<pcnt;
}

/**
실행 결과 
9
0 0 0 1 1 1 -1 -1 -1
0 0 0 1 1 1 -1 -1 -1
0 0 0 1 1 1 -1 -1 -1
1 1 1 0 0 0 0 0 0
1 1 1 0 0 0 0 0 0
1 1 1 0 0 0 0 0 0
0 1 -1 0 1 -1 0 1 -1
0 -1 1 0 1 -1 0 1 -1
0 1 -1 1 0 -1 0 1 -1
-----
10
12
11
**/  
