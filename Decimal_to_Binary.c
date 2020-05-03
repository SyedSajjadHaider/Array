#include<stdio.h>
int main(){
  
  d2b(1);
  
}


void d2b(int num){
  while(num !=0){
    printf("%d",num%2);
    num = num /2;
  }
  printf("\n");
  
}
