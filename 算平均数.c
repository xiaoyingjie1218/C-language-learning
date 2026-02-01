#include<stdio.h>

int main()
{
	int number;
	int count=0;
	int sum=0;
	
	scanf("%d",&number);
	while(number!=-1){
		count++;
		sum+=number;
		scanf("%d",&number);
	}
	printf("%f",1.0*sum/count);
	return 0;
}
