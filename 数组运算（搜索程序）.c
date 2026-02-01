#include<stdio.h>
int search (int key,int a[],int length);
//函数声明

//main函数
int main(){
	int a[]={2,4,6,7,1,3,5,9,11,13,23,14,32};
//数组的集成初始化
	int x;
	int loc;
	printf("请输入一个数字：");
	scanf("%d",&x);
	loc=search(x,a,sizeof(a)/sizeof(a[0]));
//数组的大小
	if(loc!=-1){
		printf("%d在第%d个位置上\n",x,loc);
	}else{
		printf("%d不存在\n",x);
	}
	return 0;
}


//search函数
	int search (int key,int a[],int length)
	{
		int ret=-1;
		int i;
		for(i=0;i<length;i++){
			if(a[i]==key){
				ret=i;
				break;
			}
		}
//遍历数组，判断要找的东西是否存在
		return ret;
	}
//代码功能说明
//search函数：
//参数：要查找的值(key)、数组(a)、数组长度(length)
//返回值：找到返回索引位置，未找到返回-1
//使用线性搜索算法，时间复杂度O(n)

//main函数：
//定义并初始化测试数组
//获取用户输入要查找的数字
//计算数组长度：sizeof(a)/sizeof(a[0])
//调用search函数并输出结果
