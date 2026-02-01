#include<stdio.h>

int main(){
	int n;
	int i=1;
	int c=1;
	printf("请输入一个数字:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		c*=i;
	}
	printf("%d!=%d\n",n,c);
	return 0;
}
