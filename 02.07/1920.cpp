/**
프로그램명 : 1920.cpp
설명 : 수 찾기 (이진탐색) 
작성일시 : 2022.01.07 -> 02.07
작성자 : 정소영 
**/

#include <iostream>
#include <algorithm>
using namespace std;
int num[100001];
int N,M;
void search(int n, int num[]){     // 이진 탐색 알고리즘이라고 합니다만 
	int low=0, high=N-1, mid;
	while (low<=high){
		mid=(high+low)/2;
		
		if (num[mid]==n){
			cout<<1<<"\n";
			return;
		}
		else if (num[mid]<n) low=mid+1;
		else if (num[mid]>n) high=mid-1;
	}
	cout<<0<<'\n';
	return;
}

int main(){
	ios::sync_with_stdio(false);  // 이것들은 
	cin.tie(NULL);                // 무엇 
	cout.tie(NULL);               // 일까요? 
	
	cin>>N;
	for (int i=0;i<N;i++) cin>>num[i];
	
	sort(num,num+N);
	
	cin>>M;
	for (int i=0;i<M;i++){
		int k;
		cin>>k;
		search(k,num);	
	}	
}

/**
5           (입력) 
4 1 5 2 3
5 
1 3 7 9 5 
1           (출력) 
1
0 
0 
1 
 
**/  
