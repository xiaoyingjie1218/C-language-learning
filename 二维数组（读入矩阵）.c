#include<stdio.h>
int main(){
	const int size=3;
	int board[size][size];
	int i,j;
	int numofx;
	int numofo;
	int result=-1;
	
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&board[i][j]);
		}
	}
//读取棋盘输入	
	
	for(i=0;i<size&&result==-1;i++){
		numofx=numofo=0;
		for(j=0;j<size;j++){
			if(board[i][j]==1){
				numofx++;
			}else{
				numofo++;
			}
		}
		if(numofx==size){
			result=0;
		}else if(numofx==size){
			result=1;
		}
	}
//检查行
	
	if(result==-1){
		for(j=0;j<size&&result==-1;j++){
			numofo=numofx=0;
			for(i=0;i<size;i++){
				if(board[i][j]==1){
					numofx++;
				}else{
					numofo++;
				}
			}
			if(numofo==size){
				result=0;
			}else if(numofx==size){
				result=1;
			}
		}
	}
//检查列
	
	if(result==-1){
		numofx=numofo=0;
		for(i=0;i<size;i++){
			if(board[i][i]==1){
				numofx++;
			}else if(board[i][i]==0){
				numofo++;
			}
		}
		if(numofx==size){
			result=1;
		}else if(numofo==size){
			result=0;
		}
	}
//检查主对角线	
	
	if(result==-1){
		numofx=numofo=0;
		for(i=0;i<size;i++){
			if(board[i][size-1-i]==1){
				numofx++;
			}else if(board[i][size-1-i]==0){
				numofo++;
			}
		}
		if(numofx==size){
			result=1;
		}else if(numofo==size){
			result=0;
		}
	}
//检查副对角线	
	
	if(result==1){
		printf("x win\n");
	}else if(result==0){
		printf("o win\n");
	}else{
		printf("no winner\n");
	}
	
	return 0;
}
