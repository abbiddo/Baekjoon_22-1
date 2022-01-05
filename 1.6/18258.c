/**
프로그램명 : 18258.c
설명 : 큐 
작성일시 : 2022.01.06
작성자 : 정소영
**/

#include <stdio.h>
#include <string.h>

void push(int a);
int pop();
int size();
int empty();
int front();
int back();

int i=0;
int j=0;
int queue[2000000];

int main(){
	int n,k,num;
	char order[10];
	scanf("%d",&n);
	
	for (k=0;k<n;k++){
		scanf("%s",order);
		
		if (!(strcmp(order,"push"))){
			scanf("%d",&num);
			push(num);
		}
		else if (!(strcmp(order,"pop"))) printf("%d\n",pop());
		else if (!(strcmp(order,"size"))) printf("%d\n",size());
		else if (!(strcmp(order,"empty"))) printf("%d\n",empty());
		else if (!(strcmp(order,"front"))) printf("%d\n",front());
		else if (!(strcmp(order,"back"))) printf("%d\n",back());
	}    
}

void push(int a){
	queue[i++]=a;
}

int pop(){
	if ((i-j)==0) return -1;
	return queue[j++];
}

int size(){
	return i-j;
}

int empty(){
	if ((i-j)==0) return 1;
	return 0;
}
int front(){
	if ((i-j)==0) return -1;
	return queue[j];
}

int back(){
	if ((i-j)==0) return -1;
	return queue[i-1];
}

/**
실행 결과
15
push 1
push 2
front
1
back
2
size
2
empty
0
pop
1
pop
2
pop
-1
size
0
empty
1
pop
-1
push 3
empty
0
front
3

**/ 
