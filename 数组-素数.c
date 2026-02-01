
#include<stdio.h>
#define N 10
int isprime(int x,int kps[],int nkps);

int main(){
	int prime[N]={2};
	int count=1;
	int i=3;
	while(count<N){
		if(isprime(i,prime,count)){
	 prime[count++]=i;
}
		i+=2;}

for(i=0;i<N;i++){
	printf("%d",prime[i]);
	if((i+1)%5)printf("\t");
	else printf("\n");
}
return 0;
}

int isprime(int x, int kps[], int nkps) {
	if (x < 2) return 0;          // 处理边界
	for (int i = 0; i < nkps; i++) {
		if (kps[i] * kps[i] > x) break; // 平方根优化
		if (x % kps[i] == 0) return 0;
	}
	return 1;

}
