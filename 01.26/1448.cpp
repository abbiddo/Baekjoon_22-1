/**
프로그램명 : 1448.cpp
설명 : 최대 삼각형 
작성일시 : 2022.01.26
작성자 : 정소영
**/

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n,i;
	int a[10001];
	
	cin>>n;
	for (i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	
	for (i=n-1;i>1;i--){
		if (a[i]<a[i-1]+a[i-2]){
			cout<<a[i]+a[i-1]+a[i-2];
			return 0;
		}
	}
	
	cout<<-1;
}

/**
6    (입력) 
2
3
2
3
2
4
10   (출력) 
**/ 
