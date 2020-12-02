#include<stdio.h>
void  main (){
int a,b,c,d;
scanf("%d",&a);
b=a/3600;
c=(a%3600)/60;
d=a-3600*b-60*c;
printf("%02d时%02d分%02d秒",b,c,d);

}
