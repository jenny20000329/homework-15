#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
 
 int h,m;
 
 printf("請輸入現在時間");
 scanf("%d:%d",&h,&m);
 
 if(h<17 && h>7 &&  m<=59 && m>=0){
  printf("現在是上課時間\n"); 
 }
 else if(h==7 && m<=59 && m>=30){
  printf("現在是上課時間\n");  
 }
 else if(h >= 25 || m >= 60 || m<=-1){
  printf("您輸入的是無效時間\n"); 
 }
 else{
  printf("現在是放學時間n"); 
 }

 system("PAUSE");
 return 0;
}
