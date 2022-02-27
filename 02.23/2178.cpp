/**
프로그램명 : 2178.cpp
설명 : 미로 탐색 
작성일시 : 2022.02.23
작성자 : 정소영 
**/

#include <iostream>
using namespace std;
int arr[101][101];
int num[10000][2];
int num2[10000][2];
int n,m,c=1,cc=0;
char k;

int sear(int i, int j){
	for (int k=0;k<cc;k++)
		if (num[k][0]==i && num[k][1]==j) return 0;
	return 1;
}

int change(int i, int j){
	if (i<n-1 && arr[i+1][j]!=0) {
		if (arr[i+1][j]==1) arr[i+1][j]+=arr[i][j];
		else arr[i+1][j]=min(arr[i+1][j],arr[i][j]+1);
		if (sear(i+1,j)){
			num[cc][0]=i+1;
			num[cc][1]=j;
			cc++;
		}
	}
	if (i>0 && arr[i-1][j]!=0) {
		if (arr[i-1][j]==1) arr[i-1][j]+=arr[i][j];
		else arr[i-1][j]=min(arr[i-1][j],arr[i][j]+1);
		if (sear(i-1,j)){
			num[cc][0]=i-1;
			num[cc][1]=j;
			cc++;
		}
	}
	if (j<m-1 && arr[i][j+1]!=0) {
		if (arr[i][j+1]==1) arr[i][j+1]+=arr[i][j];
		else arr[i][j+1]=min(arr[i][j+1],arr[i][j]+1);
		if (sear(i,j+1)){
			num[cc][0]=i;
			num[cc][1]=j+1;
			cc++;
		}
	}
	if (j>0 && arr[i][j-1]!=0) {
		if (arr[i][j-1]==1) arr[i][j-1]+=arr[i][j];
		else arr[i][j-1]=min(arr[i][j-1],arr[i][j]+1);
		if (sear(i,j-1)){
			num[cc][0]=i;
			num[cc][1]=j-1;
			cc++;
		}
	}
	arr[i][j]=0;
	return 0;
}

int maze(){
	for (int i=0;i<c;i++)
		change(num2[i][0],num2[i][1]);
		
	for (int i=0;i<cc;i++){
		num2[i][0]=num[i][0];
		num2[i][1]=num[i][1];
	}
	
	return 0;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n>>m;
	for (int i=0;i<n;i++)
		for (int j=0;j<m;j++) {
			cin>>k;
			arr[i][j]=k-'0';
		}
		
	for (int i=0;i<n*m;i++){
		if (arr[n-1][m-1]!=1){
			cout<<arr[n-1][m-1];
			return 0;
		}
		maze();
		c=cc;
		cc=0;
	}
}

/**
실행 결과 
2 25
100 100
1111111111111111111111111111111111111111111111111101111111111111111111111111111111111111111111111111
0000000000000000000000000000000000000000000000000100000000000000000000000000000000000000000000000000
1111111111111111111111101011111111111111111111110101111111111111111111111010111111111111111111111111
1111111111111111111111101011111111111111111111110101111111111111111111111010111111111111111111111111
1111111111111111111110101010111111111111111111110101111111111111111111101010101111111111111111111111
1111111111111111111110101010111111111111111111110101111111111111111111101010101111111111111111111111
1111111111111111111110101010111111111111111111110101111111111111111111101010101111111111111111111111
1111111111111111111110101010111111111111111111110101111111111111111111101010101111111111111111111111
1111111111111111111110101010111111111111111111110101111111111111111111101010101111111111111111111111
1111111111111111000000101010000001111111111111110101111111111111110000001010100000011111111111111111
1111111111111111111111101011111111111111111111110101111111111111111111111010111111111111111111111111
1111111111111111000010101010100001111111111111110101111111111111110000101010101000011111111111111111
1111111111111111111010101010101111111111111111110101111111111111111110101010101011111111111111111111
1111111111111111111010101010101111111111111111110101111111111111111110101010101011111111111111111111
1111111111111111111010101010101111111111111111110101111111111111111110101010101011111111111111111111
1111111111111111111010101010101111111111111111110101111111111111111110101010101011111111111111111111
1111111111111111111010101010101111111111111111110101111111111111111110101010101011111111111111111111
1111111111111111111110101010111111111111111111110101111111111111111111101010101111111111111111111111
1111111010111111111110101010111111111110101111110101111110101111111111101010101111111111101011111111
1111111010111111111110101010111111111110101111110101111110101111111111101010101111111111101011111111
1111111010111111111110101010111111111110101111110101111110101111111111101010101111111111101011111111
1111111010000001111110101010111111000000101111110101111110100000011111101010101111110000001011111111
1111111011111111111110101010111111111111101111110101111110111111111111101010101111111111111011111111
1100000010000000000000101010000000000000100000010101000000100000000000001010100000000000001000000111
1111111111111111111111101011111111111111111111110101111111111111111111111010111111111111111111111111
0000000000000000000000111110000000000000000000000100000000000000000000001111100000000000000000000000
1111111111111111111111101011111111111111111111110101111111111111111111111010111111111111111111111111
1100000010000000000000101010000000000000100000010101000000100000000000001010100000000000001000000111
1111111011111111111110101010111111111111101111110101111110111111111111101010101111111111111011111111
1111111010000001111110101010111111000000101111110101111110100000011111101010101111110000001011111111
1111111010111111111110101010111111111110101111110101111110101111111111101010101111111111101011111111
1111111010111111111110101010111111111110101111110101111110101111111111101010101111111111101011111111
1111111010111111111110101010111111111110101111110101111110101111111111101010101111111111101011111111
1111111111111111111110101010111111111111111111110101111111111111111111101010101111111111111111111111
1111111111111111111010101010101111111111111111110101111111111111111110101010101011111111111111111111
1111111111111111111010101010101111111111111111110101111111111111111110101010101011111111111111111111
1111111111111111111010101010101111111111111111110101111111111111111110101010101011111111111111111111
1111111111111111111010101010101111111111111111110101111111111111111110101010101011111111111111111111
1111111111111111111010101010101111111111111111110101111111111111111110101010101011111111111111111111
1111111111111111000010101010100001111111111111110101111111111111110000101010101000011111111111111111
1111111111111111111111101011111111111111111111110101111111111111111111111010111111111111111111111111
1111111111111111000000101010000001111111111111110101111111111111110000001010100000011111111111111111
1111111111111111111110101010111111111111111111110101111111111111111111101010101111111111111111111111
1111111111111111111110101010111111111111111111110101111111111111111111101010101111111111111111111111
1111111111111111111110101010111111111111111111110101111111111111111111101010101111111111111111111111
1111111111111111111110101010111111111111111111110101111111111111111111101010101111111111111111111111
1111111111111111111110101010111111111111111111110101111111111111111111101010101111111111111111111111
1111111111111111111111101011111111111111111111110101111111111111111111111010111111111111111111111111
0000000000000000000000001000000000000000000000000100000000000000000000000010000000000000000000000000
1111111111111111111111101111111111111111111111110101111111111111111111111110111111111111111111111111
0000000000000000000000000000000000000000000000011111000000000000000000000000000000000000000000000000
1111111111111111111111101111111111111111111111110101111111111111111111111110111111111111111111111111
0000000000000000000000001000000000000000000000000100000000000000000000000010000000000000000000000000
1111111111111111111111101011111111111111111111110101111111111111111111111010111111111111111111111111
1111111111111111111110101010111111111111111111110101111111111111111111101010101111111111111111111111
1111111111111111111110101010111111111111111111110101111111111111111111101010101111111111111111111111
1111111111111111111110101010111111111111111111110101111111111111111111101010101111111111111111111111
1111111111111111111110101010111111111111111111110101111111111111111111101010101111111111111111111111
1111111111111111111110101010111111111111111111110101111111111111111111101010101111111111111111111111
1111111111111111000000101010000001111111111111110101111111111111110000001010100000011111111111111111
1111111111111111111111101011111111111111111111110101111111111111111111111010111111111111111111111111
1111111111111111000010101010100001111111111111110101111111111111110000101010101000011111111111111111
1111111111111111111010101010101111111111111111110101111111111111111110101010101011111111111111111111
1111111111111111111010101010101111111111111111110101111111111111111110101010101011111111111111111111
1111111111111111111010101010101111111111111111110101111111111111111110101010101011111111111111111111
1111111111111111111010101010101111111111111111110101111111111111111110101010101011111111111111111111
1111111111111111111010101010101111111111111111110101111111111111111110101010101011111111111111111111
1111111111111111111110101010111111111111111111110101111111111111111111101010101111111111111111111111
1111111010111111111110101010111111111110101111110101111110101111111111101010101111111111101011111111
1111111010111111111110101010111111111110101111110101111110101111111111101010101111111111101011111111
1111111010111111111110101010111111111110101111110101111110101111111111101010101111111111101011111111
1111111010000001111110101010111111000000101111110101111110100000011111101010101111110000001011111111
1111111011111111111110101010111111111111101111110101111110111111111111101010101111111111111011111111
1100000010000000000000101010000000000000100000010101000000100000000000001010100000000000001000000111
1111111111111111111111101011111111111111111111110101111111111111111111111010111111111111111111111111
0000000000000000000000111110000000000000000000000100000000000000000000001111100000000000000000000000
1111111111111111111111101011111111111111111111110101111111111111111111111010111111111111111111111111
1100000010000000000000101010000000000000100000010101000000100000000000001010100000000000001000000111
1111111011111111111110101010111111111111101111110101111110111111111111101010101111111111111011111111
1111111010000001111110101010111111000000101111110101111110100000011111101010101111110000001011111111
1111111010111111111110101010111111111110101111110101111110101111111111101010101111111111101011111111
1111111010111111111110101010111111111110101111110101111110101111111111101010101111111111101011111111
1111111010111111111110101010111111111110101111110101111110101111111111101010101111111111101011111111
1111111111111111111110101010111111111111111111110101111111111111111111101010101111111111111111111111
1111111111111111111010101010101111111111111111110101111111111111111110101010101011111111111111111111
1111111111111111111010101010101111111111111111110101111111111111111110101010101011111111111111111111
1111111111111111111010101010101111111111111111110101111111111111111110101010101011111111111111111111
1111111111111111111010101010101111111111111111110101111111111111111110101010101011111111111111111111
1111111111111111111010101010101111111111111111110101111111111111111110101010101011111111111111111111
1111111111111111000010101010100001111111111111110101111111111111110000101010101000011111111111111111
1111111111111111111111101011111111111111111111110101111111111111111111111010111111111111111111111111
1111111111111111000000101010000001111111111111110101111111111111110000001010100000011111111111111111
1111111111111111111110101010111111111111111111110101111111111111111111101010101111111111111111111111
1111111111111111111110101010111111111111111111110101111111111111111111101010101111111111111111111111
1111111111111111111110101010111111111111111111110101111111111111111111101010101111111111111111111111
1111111111111111111110101010111111111111111111110101111111111111111111101010101111111111111111111111
1111111111111111111110101010111111111111111111110101111111111111111111101010101111111111111111111111
1111111111111111111111101011111111111111111111110101111111111111111111111010111111111111111111111111
1111111111111111111111101011111111111111111111110101111111111111111111111010111111111111111111111111
1111111111111111111111101011111111111111111111110101111111111111111111111010111111111111111111111111
-----
199
**/  