/**
프로그램명 : 1541.cpp
설명 : 잃어버린 괄호 
작성일시 : 2022.02.21
작성자 : 정소영 
**/

#include <iostream>
using namespace std;
int num[30];
char pm[30];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int j=0,sum;
	string c;
	cin>>c;
	
	for (int i=0;i<c.size();i++){
		if (c[i]<='9' && c[i]>='0'){
			num[j]*=10;
			num[j]+=c[i]-48;
		}
		else{
			pm[j]=c[i];
			j++;
		}
	}
	sum=num[0];
	
	for (int i=0;i<j;i++){
		if (pm[i]=='-'){
			int minus=num[i+1];
			for (int k=i+1;pm[k]=='+';k++){
				minus+=num[k+1];
				i++;
			}
			sum-=minus;
		}
		else if (pm[i]=='+'){
			sum+=num[i+1];
		}
	}
	cout<<sum;
}

/**
실행 결과 
55-50+40
-----
-35
**/  
