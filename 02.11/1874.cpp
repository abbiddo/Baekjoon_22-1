/**
프로그램명 : 1874.cpp
설명 : 스택 수열 
작성일시 : 2022.02.11
작성자 : 정소영 
**/

#include <iostream>
#include <stack>
#include <queue>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,k,cnt=1;
	stack<int> s;
	queue<char> q;
	cin>>n;
	
	for (int i=0;i<n;i++){
		cin>>k;
		
		while(cnt<=k){s.push(cnt++); q.push('+');}
			
		if (s.top()==k){s.pop(); q.push('-');}
		else {cout<<"NO";return 0;}
	}
	while(!q.empty()) {cout<<q.front()<<'\n'; q.pop();}
}

/**
8    (입력) 
4
3
6
8
7
5
2
1
+    (출력)
+
+
+
-
-
+
+
-
+
+
-
-
-
-
-
**/  
