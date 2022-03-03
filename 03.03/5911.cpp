/**
프로그램명 : 5911.cpp
설명 : 선물 
작성일시 : 2022.03.03
작성자 : 정소영 
**/

#include <iostream>
#include <algorithm>
using namespace std;

int n,m,ma,i;
int arr[1000][3];

int cmp(int a[], int b[]){
	return a[2]<b[2];
}

int money(int k){
	int a=0,i;
	for (i=0;i<n;i++){
		if (k==i) a+=arr[i][0]/2+arr[i][1];
		else a+=arr[i][2];
		if (a>m) break;
	}
	
	return i-1;
}
 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n>>m;
	
	for (int i=0;i<n;i++){
		cin>>arr[i][0]>>arr[i][1];
		arr[i][2]=arr[i][0]+arr[i][1];
	}
	
	sort(arr,arr+n,cmp);
	
	for (int i=0;i<n;i++) ma=max(ma,money(i));
	
	cout<<ma;
}

/**
실행 결과 
error
-----

**/  
