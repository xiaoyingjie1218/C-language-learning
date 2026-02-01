#include<stdio.h>

//函数定义：函数头：【返回类型+函数名称+（参数表）】+{ +函数体 }
int isprime(int i)//函数头：返回类型+函数名称+（参数表）  注意：没有;
{
	int ret=1;
	int k;
	for(k=2;k<i-1;k++){
		if(i%k==0){
			ret=0;
			break;
		}
	}
	return ret;
}
//函数体

int main()
{
	int m,n;
	int sum=0;
	int cnt=0;
	int i;
		
	scanf("%d %d",&m,&n);
	if(m==1)m=2;
	for(i=m;i<=n;i++){
		
		if(isprime(i)){
			//调用自定义函数
			sum+=i;
			cnt++;
		}
	}
	
	printf("%d %d\n",cnt,sum);
	return 0;
}
//函数是一块代码，接收零个或者多个参数，做一件事情，并返回零个或一个值
//()起到了表示函数调用的重要作用
//即使没有参数也需要()

