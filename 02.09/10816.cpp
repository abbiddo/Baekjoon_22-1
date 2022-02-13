/**
프로그램명 : 10816.cpp
설명 : 숫자 카드 개수 세기 
작성일시 : 2022.02.09
작성자 : 정소영 
**/

#include <iostream>
#include <algorithm>
int num[500001];
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,k;
	cin>>n;
	
	for (int i=0;i<n;i++) cin>>num[i];
	
	sort(num,num+n);
	
	cin>>k;
	for (int i=0;i<k;i++) {
		int m;
		cin>>m;
		cout<<upper_bound(num,num+n,m)-lower_bound(num,num+n,m)<<" ";
	}	
}

/**
10                           (입력) 
6 3 2 10 10 10 -10 -10 7 3
8
10 9 -5 2 3 4 5 -10
3 0 0 1 2 0 0 2              (출력)
**/
