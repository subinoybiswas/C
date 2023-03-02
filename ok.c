#include<stdio.h>


int main(){
float arr[100]={0};
arr[0]=1;
arr[1]=1;
for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
arr[i+2]=arr[i]+arr[i+1];}
for(int i=0;i<100;i++){
printf("%0.0f ",arr[i]);}
return 0;}
