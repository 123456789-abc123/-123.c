#include<stdio.h>

void  main(){

	int a,b;
	int  array2d[2][4]={
		{1,2,3,5},
		{4,7,9,8}
	
	};
	
	for(a=0;a<2;a++){
		for(b=0;b<4;b++){
			printf("%d ",array2d[a][b]);
		}
	
			printf("\n");
	}
		
	}
