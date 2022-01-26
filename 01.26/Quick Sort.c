#include <stdio.h>

int n,pi,pivot;
int d[1000001];

void Partition(int left, int right){
	int low,high;
	
	if (pi==left) low=left+1;
	else low=left;
	
	if (pi==high) high=right-1;
	else high=right;
	
	while(low<high){
		while(d[low]<=pivot && low<right) low++;
		while(d[high]>pivot && high>left) high--;
		
		if (low<high){
			int t=d[low];
			d[low]=d[high];
			d[high]=t;
		}
		else{
			int t=d[pi];
			d[pi]=d[high];
			d[high]=t;
		}
	} 
	
	pi=high;
}

void Qsort(int left, int right){
	if(left>=right) return;
	pi=left;
	pivot=d[left];
	Partition(left,right);
	Qsort(left,pi-1);
	Qsort(pi+1,right);
}

int main(){
	int i,k=0;
	scanf("%d",&n);	
	for (i=1;i<=n;i++) scanf("%d",&d[i]);
	
	Qsort(1,n);
	
    for (i=1;i<=n;i++) printf("%d\n",d[i]);
}
