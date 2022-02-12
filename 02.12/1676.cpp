/**
프로그램명 : 1676.cpp
설명 : 팩토리얼 0 개수 
작성일시 : 2022.02.12
작성자 : 정소영 
**/

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,cnt=0;
	unsigned long long re=1;
	cin>>n;
	
	for (int i=1;i<=n;i++){
		re*=i;
		while(re%10==0){
			cnt++;
			re/=10;
		}
		if (re>99999) re%=100000;  // 이건 계산을 안해봐서 약간 야매인 듯
		                           // 원래 10으로 해서 한자리수만 따졌는데 25일경우 25*4 와 5*4의 0 개수는 달라짐 
	}
	cout<<cnt;
}

/**
10    (입력)
2     (출력)
**/  
