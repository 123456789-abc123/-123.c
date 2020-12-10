#include<stdio.h>
#include<string.h>
void  main(){
char  s1[50];
scanf("%s",&s1);
   if(!strcmp(s1,"春节")){
printf("给我安排吃饺子\n");
}

else  if(!strcmp(s1,"端午节")){
printf("给我安排吃粽子\n");
}

else  if(!strcmp(s1,"中秋节")){
printf("给我安排吃月饼\n");
}

else  if(!strcmp(s1,"元宵节")){
printf("给我安排吃元宵\n");
}
else{printf("什么都没有");}




}
