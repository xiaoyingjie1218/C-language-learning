#include<stdio.h>
int main(){
	
	const int number=10;
//数组大小
	int x;
	
	int count[number];
//定义数组	
	int i;
	
	for(i=0;i<number;i++){
		count[i]=0;
	}
//数组参与运算	
	scanf("%d",&x);
	while(x!=-1){
		if(x>=0&&x<=9){
			count[x]++;
		}
		scanf("%d",&x);
	}
	
	for(i=0;i<number;i++){
		printf("%d:%d\n",i,count[i]);
	}
//遍历数组输出	
	return 0;
}
