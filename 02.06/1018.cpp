/**
프로그램명 : 1018.cpp
설명 : 체스판 다시 칠하기 
작성일시 : 2022.02.06
작성자 : 정소영 
**/

#include <iostream>
#include <string>
using namespace std;
string WB[8]={
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW"
};
string BW[8]={
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB"
};
string b[50];

int WBC(int x, int y){
	int cnt=0;
	for (int i=0;i<8;i++){
		for (int j=0;j<8;j++){
			if (WB[i][j]!=b[i+x][j+y]) cnt++;
		}
	}
	return cnt;
}

int BWC(int x, int y){
	int cnt=0;
	for (int i=0;i<8;i++){
		for (int j=0;j<8;j++){
			if (BW[i][j]!=b[i+x][j+y]) cnt++;
		}
	}
	return cnt;
}

int main(){
	int n,m,tmp,mn=64;;
	cin>>n>>m;
	for (int i=0;i<n;i++) cin>>b[i];
	
	for (int i=0;i<=n-8;i++){
		for (int j=0;j<=m-8;j++){
			tmp=min(WBC(i,j),BWC(i,j));
			if (mn>tmp) mn=tmp;
		}
	}
	cout<<mn;
}

/**
10 13          (입력)
BBBBBBBBWBWBW
BBBBBBBBBWBWB
BBBBBBBBWBWBW
BBBBBBBBBWBWB
BBBBBBBBWBWBW
BBBBBBBBBWBWB
BBBBBBBBWBWBW
BBBBBBBBBWBWB
WWWWWWWWWWBWB
WWWWWWWWWWBWB
12             (출력)
**/ 
