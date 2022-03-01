/**
프로그램명 : 11060.cpp
설명 : 점프 점프 
작성일시 : 2022.03.01
작성자 : 정소영 
**/

#include <iostream>
#include <queue> 
using namespace std;

int n;
int arr[1000];
int vs[1000]={1};

int bfs(){
	queue<int> q;
	q.push(0);
	while(!q.empty()){
		int a=q.front();
		q.pop();
		
		if (a==n-1) return vs[a]-1;
		
		for (int i=1;i<=arr[a];i++){
			if (a+i<n && vs[a+i]==0){
				vs[a+i]=vs[a]+1;
				q.push(a+i);
			}
		}
	}
	return -1;
}
 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n;
	for (int i=0;i<n;i++) cin>>arr[i];
	
	cout<<bfs();
}

/**
실행 결과 
10
1 2 0 1 3 2 1 5 4 2
-----
5
**/  
