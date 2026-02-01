#include<stdio.h>

int main(){
	int x;
	scanf("%d",&x);
	int ret=0;
	int digit;

	while(x>0){
		digit=x%10;
		printf("%d\n",digit);
		ret=ret*10+digit;
		printf("x=%d,digit=%d,ret=%d",x,digit,ret);
		x/=10;
		
	}
	return 0;
}
