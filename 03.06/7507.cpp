/**
프로그램명 : 7507.cpp
설명 : 올림픽 게임 
작성일시 : 2022.03.06
작성자 : 정소영 
**/

#include <iostream>
#include <algorithm>
using namespace std;

int n,a,cnt;

class olympic{
	public:
		int d,s,f;
};

olympic *o = new olympic[50001];

int cmp(olympic a, olympic b){
	if (a.d!=b.d) return a.d<b.d;
	if (a.f!=b.f) return a.f<b.f;
	return a.s<b.s;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n;
	
	for (int i=1;i<=n;i++){
		cnt=0;
		cin>>a;
		
		for (int j=0;j<a;j++) cin>>o[j].d>>o[j].s>>o[j].f;
		
		sort(o,o+a,cmp);
		
		int fi=0,da=o[0].d;
		for (int j=0;j<a;j++){
			if (da!=o[j].d){
				da=o[j].d;
				fi=0;
			}
			if (o[j].s>=fi){
				fi=o[j].f;
				cnt++;
			}
		}
		
		cout<<"Scenario #"<<i<<":\n"<<cnt<<"\n\n";
	}
}

/**  
실행결과 
2
10
1 1220 1340
2 1155 1220
2 1220 1340
3 1220 1240
1 1200 1320
2 1250 1310
2 1330 1550
3 1030 1130
3 1130 1300
3 1240 1330
3
1 0500 2200
1 0000 0700
1 2000 2359
-----
Scenario #1:
7

Scenario #2:
2
**/
