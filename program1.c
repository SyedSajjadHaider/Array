#include<stdio.h>
#define SIZE 5

int main(){
int i;
int arr[SIZE];

printf("Enter the number\n");

for(i=0; i<SIZE; i++){
       scanf("%d",&arr[i]);
}
printf("You enterted following numbers\n");
for(i=0; i<SIZE; i++){
    printf("%d ",arr[i]);
}
printf("\n");

}
