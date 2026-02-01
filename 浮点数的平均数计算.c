#include<stdio.h>
int main()
{
	float a,b,c;
	//float：单精度浮点类型，用于存储带小数位的数字。
	scanf("%f %f %f",&a,&b,&c);
	//scanf("%f %f %f", &a, &b, &c)：读取3个浮点数，%f为格式符，&表示取地址
	printf("%.2f %.2f",a+b+c,(a+b+c)/3);
    //printf("%.2f", x)：输出浮点数并保留2位小数（自动四舍五入）
	
	return 0;
	
	
}
