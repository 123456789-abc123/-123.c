#include<stdio.h>
#include<stdlib.h>
void  main(){
int  max;
int a,b,c;
printf("请输入三个数:\n");
scanf("%d%d%d",&a,&b,&c);
max=a>b?a:b;
max=c>max?c:max;
printf("MAX  IS,%d",max);
}
		
