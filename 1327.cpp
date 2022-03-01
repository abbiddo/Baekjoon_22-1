/**
프로그램명 : 1326.cpp
설명 : 폴짝폴짝 
작성일시 : 2022.03.01
작성자 : 정소영 
**/

#include <iostream>
#include <queue>
using namespace std;

int n,x,y;
int arr[10001];
int vs[10001];

int bfs(){
	queue<int> q;
	q.push(x);
	vs[x]=1;
	while(!q.empty()){
		int a=q.front();
		q.pop();
		
		for (int i=0;a+i*arr[a]<=n;i++){
			if (vs[a+arr[a]*i]==0){
				q.push(a+arr[a]*i);
				vs[a+arr[a]*i]=vs[a]+1;
				if (a+arr[a]*i==y) return vs[a+arr[a]*i];
			}
		}
		for (int i=0;a+i*arr[a]>0;i--){
			if (vs[a+arr[a]*i]==0){
				q.push(a+arr[a]*i);
				vs[a+arr[a]*i]=vs[a]+1;
				if (a+arr[a]*i==y) return vs[a+arr[a]*i];
			}
		}
	}
	return 0;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n;
	for (int i=1;i<=n;i++) cin>>arr[i];
	cin>>x>>y;
	cout<<bfs()-1;
}

/**
실행 결과
5
1 2 2 1 2
1 5
-----
1
**/  
