
#include <stdio.h>
int main(){
int len = 2;
int array[1];
int count=0;
while(getchar()!='\n'&& count<len) 
{
scanf("%d",&array[count]);
count+=1;
}
printf("END OF FIRST WHILE\n");
int array2[array[0]];
int count2 =0;
while(getchar()!='\n'&& count2<array[0]*2-1)
{
scanf("%d",&array2[count2]);
count2+=1;
}
printf("END OF SECOND WHILE\n");
int array3[array[1]];
int count3=0;
while(getchar()!='\n'&&count3<array[1]*2-1)
{
scanf("%d",&array3[count3]);
count3+=1;
}
printf("END OF THIRD WHILE\n");

printf("%d",array[1]);
printf("%d",array2[1]);
printf("%d",array3[1]);
return 0;

}
