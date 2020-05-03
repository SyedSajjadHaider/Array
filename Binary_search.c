#include<stdio.h>

int Binary_search(int e,int arr[],int te){

  int low=0,mid,up=te-1;  

  while(low<=up){
    mid = (low + up)/2;
    if(arr[mid] > e)
       up = mid -1;
    else if(arr[mid] < e)
       low = mid +1;
    else
       return mid;
    
  }
  return -1;
  
}

int main(){
  int arr[] = {1,2,3,4,5,12,34,56,3};
  int x =   Binary_search(12,arr,9);
  printf(" %d ",x);
  
}
