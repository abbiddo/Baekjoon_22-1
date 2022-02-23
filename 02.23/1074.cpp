/**
프로그램명 : 1074.cpp
설명 : Z
작성일시 : 2022.02.23
작성자 : 정소영 
**/

#include <iostream>
using namespace std;
int n,r,c,cnt;
void sear(int row, int col, int range){
	if (r==row && c==col){
		cout<<cnt;
		return;
	}
	
	if (r<row+range && r>=row && c<col+range && c>=col){
		sear(row,col,range/2);
		sear(row,col+range/2,range/2);
		sear(row+range/2,col,range/2);
		sear(row+range/2,col+range/2,range/2);
	}
	else cnt+=range*range;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n>>r>>c;
	sear(0,0,1<<n);
}

/**
실행 결과 
10 512 512
-----
786432
**/  
