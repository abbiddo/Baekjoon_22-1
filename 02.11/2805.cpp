/**
프로그램명 : 2805.cpp
설명 : 나무 베기 
작성일시 : 2022.02.11
작성자 : 정소영 
**/

#include <iostream>
#include <algorithm>
int arr[1000001]={0};
int n,h;
using namespace std;

int search(int e){
	int s=0, m=0;
	long long sum=0;
	
	while(s<=e){
		sum=0;
		m=(s+e)/2;
		
		for (int i=n-1;i>=0;i--){
			if (arr[i]>m) sum+=arr[i]-m;
			else break;
		}
		
		if (sum>=h) s=m+1;
		else if (sum<h) e=m-1;
	}
	return e;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int m;
	cin>>n>>h;
	
	for (int i=0;i<n;i++) cin>>arr[i];
	
	sort(arr,arr+n);
	cout<<search(arr[n-1]);
}

/**
4 7    (입력) 
20 15 10 17
15     (출력)
**/  
