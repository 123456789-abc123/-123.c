#include<stdio.h>
int  myfunction(int x){
	if(x<=0){
	return 0   ;
	}
	return   x+myfunction(x-1);
}
void  main(){ 
int  a =2;
printf("%d ",myfunction(a));


}
