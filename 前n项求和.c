#include<stdio.h>

int main(){
	int n;
	int i;
	scanf("%d",&n);
	double sum=0.0;
	double a=1.0;
   //注意浮点数
	
	for(i=1;i<=n;i++){	
	sum+=a*1.0/i;	
		a=-a;
		//可用于计算一加一减此类循环
		
	
	}
	printf("f(%d)=%.2f",n,sum);
	return 0;
}
