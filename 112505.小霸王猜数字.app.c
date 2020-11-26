#include<stdio.h>
#include<windows.h>
void  main(){
int  key=1314;
int  eser_num;
printf("有情提示:请猜数字在0-2000\n");
scanf  ("%d",&eser_num);
if(eser_num==key){
printf("你猜对了我的生日");}
else  if (eser_num>key){
printf("你猜错了，打死你");
}
else{printf("请你出门右拐");}



}


