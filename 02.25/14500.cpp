/**
프로그램명 : 14500.cpp
설명 : 테트로미노 
작성일시 : 2022.02.25
작성자 : 정소영 
**/

#include <iostream>
using namespace std;

int ma,n,m;
int arr[500][500];

void l1(){
	for (int i=0;i<n;i++)
		for (int j=0;j<m-3;j++)
			ma=max(ma,arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i][j+3]);
}

void l2(){
	for (int i=0;i<n-3;i++)
		for (int j=0;j<m;j++)
			ma=max(ma,arr[i][j]+arr[i+1][j]+arr[i+2][j]+arr[i+3][j]);
}

void nemo(){
	for (int i=0;i<n-1;i++)
		for (int j=0;j<m-1;j++)
			ma=max(ma,arr[i][j]+arr[i+1][j]+arr[i][j+1]+arr[i+1][j+1]);
}

void L1(){
	for (int i=0;i<n-2;i++)
		for (int j=0;j<m-1;j++)
			ma=max(ma,arr[i][j]+arr[i+1][j]+arr[i+2][j]+arr[i+2][j+1]);
}

void L2(){
	for (int i=0;i<n-1;i++)
		for (int j=0;j<m-2;j++)
			ma=max(ma,arr[i][j]+arr[i+1][j]+arr[i][j+1]+arr[i][j+2]);
}

void L3(){
	for (int i=0;i<n-2;i++)
		for (int j=0;j<m-1;j++)
			ma=max(ma,arr[i][j]+arr[i][j+1]+arr[i+1][j+1]+arr[i+2][j+1]);
}

void L4(){
	for (int i=0;i<n-1;i++)
		for (int j=0;j<m-2;j++)
			ma=max(ma,arr[i+1][j]+arr[i+1][j+1]+arr[i+1][j+2]+arr[i][j+2]);
}

void L5(){
	for (int i=0;i<n-2;i++)
		for (int j=0;j<m-1;j++)
			ma=max(ma,arr[i+2][j]+arr[i+2][j+1]+arr[i+1][j+1]+arr[i][j+1]);
}

void L6(){
	for (int i=0;i<n-1;i++)
		for (int j=0;j<m-2;j++)
			ma=max(ma,arr[i][j]+arr[i+1][j]+arr[i+1][j+1]+arr[i+1][j+2]);
}

void L7(){
	for (int i=0;i<n-2;i++)
		for (int j=0;j<m-1;j++)
			ma=max(ma,arr[i][j]+arr[i][j+1]+arr[i+1][j]+arr[i+2][j]);
}

void L8(){
	for (int i=0;i<n-1;i++)
		for (int j=0;j<m-2;j++)
			ma=max(ma,arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+2]);
}

void z1(){
	for (int i=0;i<n-2;i++)
		for (int j=0;j<m-1;j++)
			ma=max(ma,arr[i][j]+arr[i][j+1]+arr[i+1][j+1]+arr[i+2][j+1]);
}

void z2(){
	for (int i=0;i<n-1;i++)
		for (int j=0;j<m-2;j++)
			ma=max(ma,arr[i+1][j]+arr[i+1][j+1]+arr[i][j+1]+arr[i][j+2]);
}

void z3(){
	for (int i=0;i<n-2;i++)
		for (int j=0;j<m-1;j++)
			ma=max(ma,arr[i][j+1]+arr[i+1][j+1]+arr[i+1][j]+arr[i+2][j]);
}

void z4(){
	for (int i=0;i<n-1;i++)
		for (int j=0;j<m-2;j++)
			ma=max(ma,arr[i][j]+arr[i][j+1]+arr[i+1][j+1]+arr[i+1][j+2]);
}

void T1(){
	for (int i=0;i<n-1;i++)
		for (int j=0;j<m-2;j++)
			ma=max(ma,arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]);
}

void T2(){
	for (int i=0;i<n-1;i++)
		for (int j=0;j<m-2;j++)
			ma=max(ma,arr[i+1][j]+arr[i+1][j+1]+arr[i+1][j+2]+arr[i][j+1]);
}

void T3(){
	for (int i=0;i<n-2;i++)
		for (int j=0;j<m-1;j++)
			ma=max(ma,arr[i][j]+arr[i+1][j]+arr[i+2][j]+arr[i+1][j+1]);
}

void T4(){
	for (int i=0;i<n-2;i++)
		for (int j=0;j<m-1;j++)
			ma=max(ma,arr[i][j+1]+arr[i+1][j+1]+arr[i+2][j+1]+arr[i+1][j]);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin>>n>>m;
	for (int i=0;i<n;i++)
		for (int j=0;j<m;j++) cin>>arr[i][j];
	
	l1();l2();
	nemo();
	L1();L2();L3();L4();L5();L6();L7();L8();
	z1();z2();z3();z4();
	T1();T2();T3();T4();
	
	cout<<ma;
}

/**
실행 결과
5 5
1 2 3 4 5
5 4 3 2 1
2 3 4 5 6
6 5 4 3 2
1 2 1 2 1
-----
19
**/  
