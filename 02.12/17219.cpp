/**
프로그램명 : 17219.cpp
설명 : 비밀번호 찾기 
작성일시 : 2022.02.12
작성자 : 정소영 
**/

#include <iostream>
using namespace std;
string arr[100000][2];
string s[100000];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,m;
	cin>>n>>m;
	
	for (int i=0;i<n;i++) cin>>arr[i][0]>>arr[i][1];
	for (int i=0;i<m;i++) {
		cin>>s[i];
		for (int j=0;j<n;j++){
			if (arr[j][0]==s[i]){
				cout<<arr[j][1]<<'\n';
				break;
			}
		}
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
