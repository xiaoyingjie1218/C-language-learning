#include<stdio.h>

int main(){
	int x;
	scanf("%d",&x);
	
	int mask=1;
	int t=x;
//用t代替x进行下列计算，避免x为0
	while(t>9){
		t/=10;
		mask*=10;
//通过*10和/10的循环计算出与x位数对应的mask
	}
	printf("x=%d,mask=%d\n",x,mask);
	
	do{
		int d=x/mask;
//从最高位开始逐位输出
//用 x / mask 获取当前最高位数字输出该数字
		printf("%d",d);
		
		if(mask>9){
			printf(" ");
//mask > 9 判断不是最后一位时才输出空格
		}
		x%=mask;
		mask/=10;
	}while(mask>0);
//用 x % mask 去掉已处理的最高
//mask /= 10 处理下一位	
	
	printf("\n");
//数字间用空格分隔（最后一位不加空格）
	
	return 0;
}
