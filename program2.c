#include<stdio.h>
int main(){

  int i,arr[5];
  int sum=0;

  for(i=0;i<5;i++){
    scanf("%d",&arr[i]);
    sum = sum + arr[i];
  }

  printf("%d\n",sum);

}
