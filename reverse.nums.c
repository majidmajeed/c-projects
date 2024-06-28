//reverse  enterd numberss

#include<stdio.h>
int main (){
  int n,r;
  printf("enter nums ");
  scanf("%d",&n);

  while(n>0){

    r=n%10;
    printf("%d",r);
    n /=10;//(n=n/10)
  }


  return 0;
}