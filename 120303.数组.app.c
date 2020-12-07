#include<stdio.h>
#include<windows.h>
void  main(){
int  a,b;
	int array2d[20][10]={
		{999,2,3,4,5,8,9,8,6,32}};
	
		for(a=0;a<20;a++){
			for(b=0;b<10;b++){
				array2d[a][b]=999;{
			printf("%d ",array2d[a][b]);
			}
				printf("\n");}
		
			Sleep(5000);
for(a=0;a<20;a++){
			for(b=0;b<10;b++){


			array2d[a][b]=0;
	printf("%d ",array2d[a][b]);
	{
			printf("%d ",array2d[a][b]);}
printf("\n"	);
		}
}
