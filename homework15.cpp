#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
 
 int h,m;
 
 printf("�п�J�{�b�ɶ�");
 scanf("%d:%d",&h,&m);
 
 if(h<17 && h>7 &&  m<=59 && m>=0){
  printf("�{�b�O�W�Үɶ�\n"); 
 }
 else if(h==7 && m<=59 && m>=30){
  printf("�{�b�O�W�Үɶ�\n");  
 }
 else if(h >= 25 || m >= 60 || m<=-1){
  printf("�z��J���O�L�Įɶ�\n"); 
 }
 else{
  printf("�{�b�O��Ǯɶ�n"); 
 }

 system("PAUSE");
 return 0;
}
