#include<stdio.h>
int main (){
	int x;
	double sum=0;
	int cnt=0;
	int number[100];
//定义数组（静态数组）
	scanf("%d",&x);
	
	while(x!=-1){
//输入-1作为结束标志
		number[cnt]=x;
//对数组的元素赋值
		sum+=x;
		cnt++;
		scanf("%d",&x);
	}
	
	if(cnt>0){
		double average=sum/cnt;
		int i;
		
		for(i=0;i<cnt;i++){
			if(number[i]>average){
				printf("%d\n",number[i]);
//使用数组中的元素				
			}
		}
//遍历数组		
	}
	return 0;
}
// 数组与动态计数
//number[cnt] = x; cnt++; → 动态填充数组，cnt 记录实际输入的数字个数。
//固定数组限制：int number[100] 最多存 100 个数，超出会导致缓冲区溢出。
//改进方法：动态内存分配（malloc）或检查 cnt < 100。


