#include<stdio.h>

//函数头（其中void 为没有返回值的函数类型，不返回任何东西）
//如果函数有返回值，则必须使用带值的return

void sum(int begin,int end)
{
	int i;
	int sum=0;
	for(i=begin;i<=end;i++){
		sum+=i;
	}
	printf("%d到%d的和是%d\n",begin,end,sum);
}
//自定义一个求和函数
int main(){
	sum(1,10);
	sum(20,30);
	sum(35,45);
//直接调用自定义函数sum
	
//调用函数：函数名（参数值）；()起到表示函数调用的重要作用；即使没有参数也需要()；
//如果有参数则需要给出正确的数量和顺序；这些值会被按照顺序依次用来初始化函数中的参数.
	return 0;
}
//
