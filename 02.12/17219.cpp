/**
프로그램명 : 17219.cpp
설명 : 비밀번호 찾기 
작성일시 : 2022.02.12
작성자 : 정소영 
**/

#include <iostream>
#include <algorithm>
using namespace std;
string s[100000];

class person{
	public:
		string id;
		string psw;
};

person *p=new person[100000];

bool compa(person a, person b){
	return a.id<b.id;
}

int search(int e, int i){
	int st=0,m;
	while(st<=e){
		m=(st+e)/2;
		
		if (p[m].id>=s[i]) e=m-1;
		else st=m+1;
	}
	return st;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,m;
	cin>>n>>m;
	
	for (int i=0;i<n;i++) cin>>p[i].id>>p[i].psw;
	
	sort(p,p+n,compa);
	
	for (int i=0;i<m;i++) {
		cin>>s[i];
		cout<<p[search(n,i)].psw<<"\n";
	}
}

/**
16 4                       (입력)
noj.am IU
acmicpc.net UAENA
startlink.io THEKINGOD
google.com ZEZE
nate.com VOICEMAIL
naver.com REDQUEEN
daum.net MODERNTIMES
utube.com BLACKOUT
zum.com LASTFANTASY
dreamwiz.com RAINDROP
hanyang.ac.kr SOMEDAY
dhlottery.co.kr BOO
duksoo.hs.kr HAVANA
hanyang-u.ms.kr OBLIVIATE
yd.es.kr LOVEATTACK
mcc.hanyang.ac.kr ADREAMER
startlink.io
acmicpc.net
noj.am
mcc.hanyang.ac.kr
THEKINGOD                  (출력)
UAENA
IU
ADREAMER

**/  
