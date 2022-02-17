/**
프로그램명 : 1931.cpp
설명 : 회의실 배정 
작성일시 : 2022.02.17
작성자 : 정소영 
**/

#include <iostream>
#include <algorithm>
using namespace std;

class time{
	public:
		int s,f;
};

time *t=new time[100000];

int cmp(time a, time b){
	if (a.f==b.f) return a.s<b.s;
	return a.f<b.f;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,m=0,f=0;
	cin>>n;
  	
	for (int i=0;i<n;i++) cin>>t[i].s>>t[i].f;
	
	sort(t,t+n,cmp);

    for(int i=0;i<n;i++)
	    if(t[i].s>=f){
        f=t[i].f;
		m++;
    	}
    cout<<m;
}

/**
실행 결과
11
1 4
3 5
0 6
5 7
3 8
5 9
6 10
8 11
8 12
2 13
12 14 
-----
4
**/  
