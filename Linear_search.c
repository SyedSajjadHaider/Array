#include<stdio.h>

int Linear_search(int arr[],int num,int total){
    int i=0;
    while(i<total){
      if(arr[i] == num){
        return i;
      }
      i++;
    }
    return -1;
      
}

int main(){
  int arr[] = {10,14,6,77,43,44,78,11};  
  int x = Linear_search(arr,12,9);  
  printf("%d",x);
  
}
