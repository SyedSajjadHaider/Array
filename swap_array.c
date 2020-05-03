#include<stdio.h>
int main(){
  int j,i,temp;
  int arr[] = {1,2,3,4,5,6,7,8,9};
  for(i=0,j=8; i<j; i++,j--){
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp; 
  }

  for(i=0; i<sizeof(arr)/sizeof(int); i++){
    printf("%d ",arr[i]);  
  }

}
