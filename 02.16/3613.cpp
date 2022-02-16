/**
프로그램명 : 3613.cpp
설명 : JAVA vs C++
작성일시 : 2022.02.16
작성자 : 정소영 
**/

#include <iostream>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	string a;
	cin>>a;
	int total=0,c=0,java=0;
	
	for (int i=0;i<a.size();i++){
		if (a[i]>96 && a[i]<123) total+=1;
		else if (a[i]=='_') {
			c+=1;
			if (a[i-1]=='_'){
				cout<<"Error!";
				return 0;
			}
		}
		else if (a[i]>64 && a[i]<91) java+=1;
	}
	
	if (total+java+c!=a.size()){
		cout<<"Error!";
		return 0;
	}
	
	if (a[0]=='_' || a[a.size()-1]=='_'){
		cout<<"Error!";
		return 0;
	}
	
	if (a[0]>64 && a[0]<91){
		cout<<"Error!";
		return 0;
	}
		
	if (c!=0 && java!=0){
		cout<<"Error!";
		return 0;
	}
	
	char k;
	if (c!=0){
		for (int i=0;i<a.size();i++){
			if (a[i]=='_') continue;
			else if (a[i-1]=='_') {
				k=a[i]-32;
				cout<<k;
			}
			else cout<<a[i];
		}
	}
	else {
		for (int i=0;i<a.size();i++){
			if (a[i]>64 && a[i]<91) {
				k=a[i]+32;
				cout<<"_"<<k;
			}
			else cout<<a[i];
		}
	}	
}

/**
long_and_mnemonic_identifier
-----
longAndMnemonicIdentifier
**/  
