#include<stdio.h>
int main(){
	int i,count=0,n;// nho khai bao count=0 ,dung sai nguu con giai thua khai bao giaithua=1 cung dung sai ngu---
	printf("nhap i vao day de dem so cua i:");//nguyen duong thi khong can if chi can for la du
	scanf("%d",&i);
	if(i<0){i*=-1;
	for(i;i>0;i/=10)
		count++;
	printf("so chu so la %d",count);
    }
return 0;
}