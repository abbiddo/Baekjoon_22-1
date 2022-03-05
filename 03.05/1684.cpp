/**
프로그램명 : 1684.cpp
설명 : 같은 나머지 
작성일시 : 2022.03.05
작성자 : 정소영 
**/

#include <iostream>
#include <algorithm>
using namespace std;

int n,arr[1000],cnt;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n;
	for (int i=0;i<n;i++) cin>>arr[i];
	sort(arr,arr+n);
	
	for (int i=arr[n-1];i>0;i--){
		cnt=0;
		for (int j=0;j<n-1;j++){
			int a=arr[j]%i;
			int b=arr[j+1]%i;
			
			if (a<0) a+=i;
			if (b<0) b+=i;
			
			if (a==b) cnt++;
			else break;
		}
		if (cnt==n-1){
			cout<<i;
			break;
		}
	}
}

/**  
실행결과 
4
701 1059 1417 2312
-----
179
**/  
