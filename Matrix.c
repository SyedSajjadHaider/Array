#include<stdio.h>
#define ROW 3
#define COL 4

int main(){
  int arr[ROW][COL];
  int r,c;

  for(r=0;r<ROW; r++){
    for(c=0; c<COL; c++){
      scanf("%d",&arr[r][c]);
    }
  }
  
  
  for(r=0;r<ROW; r++){
    for(c=0; c<COL; c++){
      printf("%d ",arr[r][c]);
    }
    printf("\n");
  }  
  
  
  
}
