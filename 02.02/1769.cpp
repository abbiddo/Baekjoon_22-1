/**
프로그램명 : 1769.cpp
설명 : 3의 배수 
작성일시 : 2022.02.02
작성자 : 정소영 
**/

#include <iostream>
#include <string.h>
using namespace std;
int main(){
	int num,re=0,cnt=1;
	string n;
	cin>>n;
	
	if (n.size()==1){
		n[0]-=48;
		if (n[0]%3==0) cout<<"0\nYES";
		else cout<<"0\nNO";
		
		return 0;
	}
	
	for (int i=0;i<n.size();i++){
		re+=(n[i]-48);
	}
	
	num=re;
	
	while(num>=10){
		re=0;
		while(num){
			re+=num%10;
			num/=10;
		}
		num=re;
		cnt++;
	}
	cout<<cnt<<"\n";
	
	if (num%3==0) cout<<"YES";
	else cout<<"NO";
}

/**
1234567  (입력)
3        (출력)
NO 
**/ 
