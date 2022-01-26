/**
프로그램명 : 2751.cpp
설명 : 정렬 
작성일시 : 2022.01.26
작성자 : 정소영
**/

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n,i;
	int a[1000001];
	
	cin>>n;
	for (i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	
	for (i=0;i<n;i++) cout<<a[i]<<'\n';
}

/**
5    (입력) 
5 
4
3
2
1
1    (출력)
2
3
4
5
**/ 
