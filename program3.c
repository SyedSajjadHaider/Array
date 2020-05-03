#include<stdio.h>
int main(){
  int even=0,odd=0;
  int i;
  for(i=0; i<sizeof(arr)/sizeof(int); i++){
    if(arr[i] % 2 ==0)
      even++;
    else
      odd++;
  }
  printf("even -> %d\n odd ->%d",even,odd); 
}
