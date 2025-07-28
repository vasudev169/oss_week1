#include<stdio.h>

int main(){

int x;
printf("enter size");
scanf("%d",&x);

int arr[x];

printf("enter the array");
int i,avg=0;
for(i=0;i<x;i++){
    scanf("%d",&arr[i]);
    avg+=arr[i];
}
printf("avg= %d",avg/x);

return 0;
}
