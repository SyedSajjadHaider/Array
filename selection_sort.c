#include<stdio.h>
int main(){
  int arr[]={50,10,3,99,2,56,34};
  int i,j,size=7,temp,min;
  for(i=0; i<size; i++){
     min = i;
     for(j=i+1; j<size; j++){
        if(arr[min]>arr[j]){
           min = j;
        }
     }
     if(min != i){
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
     }
  }  
  
  for(i=0; i<size; i++){
    printf(" %d ",arr[i]);
  }  

}
