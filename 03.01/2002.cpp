/**
프로그램명 : 2002.cpp
설명 : 추월 
작성일시 : 2022.03.01
작성자 : 정소영 
**/

#include <iostream>
using namespace std;

int n,cnt;
int arr[1000];
string car[1000];
string c;
 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n;
	for (int i=0;i<n;i++) cin>>car[i];
	
	for (int i=0;i<n;i++){
		cin>>c;
		for (int j=0;j<n;j++){
			if (car[j]==c){
				arr[i]=j;
				break;
			}
		}
	}
	
	for (int i=0;i<n;i++){
		for (int j=i;j<n;j++){
			if (arr[i]>arr[j]){
				cnt++;
				break;
			}
		}
	}
	cout<<cnt;
}

/**
실행 결과
5
ZG508OK
PU305A
RI604B
ZG206A
ZG232ZF
PU305A
ZG232ZF
ZG206A
ZG508OK
RI604B
-----
3
**/  
