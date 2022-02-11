/**
프로그램명 : 1654.cpp
설명 : 랜선 자르기 
작성일시 : 2022.02.11
작성자 : 정소영 
**/

#include <iostream>
#include <algorithm>
int n,h;
int arr[10001]={0};
using namespace std;

int search(int e){
	long long s=0, m=0;
	long long sum=0;
	
	while(s<=e){
		sum=0;
		m=(s+e)/2;
		
		if (m==0) m++;
		
		for (int i=n-1;i>=0;i--)
			sum+=arr[i]/m;
		
		if (sum>=h) s=m+1;
		else if (sum<h) e=m-1;
	}
	return e;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n>>h;
	
	for (int i=0;i<n;i++) cin>>arr[i];
	
	sort(arr,arr+n);
	cout<<search(arr[n-1]);
}

/**
4 11   (입력) 
802
743
457
539
200    (출력)
**/  
