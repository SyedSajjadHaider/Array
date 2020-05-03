#include<stdio.h>
int main(){
  
  int arr[] = {5,7,3,5,7,1,9,5,32,5,6};
  int i;
  int htemp = arr[0];
  int ltemp = arr[0];

  for(i=0; i<10; i++){
      if(arr[i]>htemp){
      htemp =arr[i];  
      }
      if(arr[i] <ltemp){
      ltemp = arr[i];
      }
  }
  printf(" %d ",htemp);
  printf(" %d ",ltemp);
}
