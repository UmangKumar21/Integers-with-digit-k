#include<stdio.h>
#include<stdlib.h>
int main(){
	int um,k,rj,tj,gt;
	int c=0;
	scanf("%d %d",&um,&k);
	for(int i=1;i<=um;i++){
		rj=0;
		tj=i;
		while(tj!=0){
			gt=tj%10;
			if(gt==k){
				printf("%d ",i);
				rj=1;
				break;	
			}
			tj=tj/10;
		}
		if(rj==0){
			c++;
		}
	}
	if(c==um){
		printf("-1");
	}
}