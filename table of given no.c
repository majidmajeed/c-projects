//write a program t0 print the table of a given number upto 10
#include<stdio.h>
#include<stdlib.h>

int main(){
  int n;
  printf("enter n");
  scanf("%d",&n);
  for(int i=1;i<=10;i++){
    printf("%d * %d = %d\n",n,i,n*i);
  }

    return 0;
}