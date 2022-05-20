/**
프로그램명 : 1991.c
설명 :  트리 순회 (전위, 중위, 후위) 
작성일시 : 2022.05.20
작성자 : 정소영
**/

#include <stdio.h>
#include <stdlib.h>

typedef char element;
typedef struct TreeNode {
	element data;
	struct TreeNode* left, * right;
}TreeNode;

// 전위 순회
void preorder(TreeNode* root) {
	if (!root) return;
	printf("%c", root->data);
	preorder(root->left);
	preorder(root->right);
}

// 중위 순회
void inorder(TreeNode* root) {
	if (!root) return;
	inorder(root->left);
	printf("%c", root->data);
	inorder(root->right);
}

// 후위 순회
void postorder(TreeNode* root) {
	if (!root) return;
	postorder(root->left);
	postorder(root->right);
	printf("%c", root->data);
}

int main() {
	TreeNode n[26];
	int num,i;
	scanf("%d",&num);
	
	TreeNode *root=&n[0];
	for (i=0;i<num;i++){
		char a,b,c;
		scanf("\n%c \n%c \n%c",&a,&b,&c);
		
		n[a-'A'].data=a;
		
		if (b=='.') n[a-'A'].left=NULL;
		else n[a-'A'].left=&n[b-'A'];
		
		if (c=='.') n[a-'A'].right=NULL;
		else n[a-'A'].right=&n[c-'A'];
	}
	
	preorder(root);
	printf("\n");
	inorder(root);
	printf("\n");
	postorder(root);
}

/**
실행 결과
-----
**/ 
