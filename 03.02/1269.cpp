/**
프로그램명 : 1269.cpp
설명 : 대칭 차집합 (map) 
작성일시 : 2022.03.02
작성자 : 정소영 
**/

#include <iostream>
#include <map>
using namespace std;

map<int, bool> ma;
int n,m,a;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n>>m;
	
	for (int i=0;i<n+m;i++){
		cin>>a;
		if (ma[a]) ma.erase(a);
		else ma[a]=1;
	}
	
	cout<<ma.size();
}

/**  
실행결과 
3 5
1 2 4
2 3 4 5 6
-----
4
**/  
