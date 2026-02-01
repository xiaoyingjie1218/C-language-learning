#include<stdio.h>

int main(){
	int x;
    int  one,two,five;
//	int exit=0;
	//接力break跳出其所在循环
	
	scanf("%d",&x);
	for(one=1;one<x*10;one++){
		for(two=1;two<x*10/2;two++){
			for(five=1;five<x*10/5;five++){
				if(one+two*2+five*5==x*10){
					printf("可以用%d个一角钱和%d个两角钱和%d个五角钱得到%d元\n",one,two,five,x);
					
				//	goto out;
					//当多重循环嵌套的循环的内层跳到最外层时用goto
					
				//	exit=1;
				//	break;
				}
			}//if(exit==1)break;
		}//if(exit==1)break;
	}
	
	//out:
	return 0;
}
