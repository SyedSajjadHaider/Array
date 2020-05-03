#include<stdio.h>

/* This Method prints smallest value and its position of given array*/

void smallest(int arr[],int size){
  int i,min=0;
  for(i=0; i<size; i++){
    if(arr[min] > arr[i]){
       min = i;
    }
  }
  printf("arr[min] ->%d i->%d\n",arr[min],min);  
}



int main(){

int arr[] = {2,3,4,5,6,1,7,8,9,-5};
smallest(arr,10);
return 0;
}
