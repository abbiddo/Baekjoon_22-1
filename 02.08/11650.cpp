/**
프로그램명 : 11650.cpp
설명 : 좌표 정렬하기 
작성일시 : 2022.02.08
작성자 : 정소영 
**/

#include <iostream>
#include <algorithm>
using namespace std;

class Person{
	public:
		int x,y;
};

Person *p= new Person[100001];

bool cx(Person a, Person b){
	return a.x<b.x;
}

bool cy(Person a, Person b){
	return a.y<b.y;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	
	for (int i=0;i<n;i++) cin>>p[i].x>>p[i].y;
	
	stable_sort(p,p+n,cy);
	stable_sort(p,p+n,cx);
	
	for (int i=0;i<n;i++) cout<<p[i].x<<' '<<p[i].y<<'\n';
}

/**
5           (입력) 
3 4
1 1
1 -1
2 2
3 3
1 -1        (출력) 
1 1
2 2
3 3
3 4

**/  
