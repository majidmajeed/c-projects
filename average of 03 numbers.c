//enter  3 numbers from the user & make a function to print  their average;
#include<stdio.h>
float average(int a,int b,int c);

int main(){
  int a,b,c;

  printf(" avg is %f",average(a,b,c));

  return 0;
}
float average(int a,int b,int c){

  printf("enter 3 numbers");
  scanf("%d%d%d",&a,&b,&c);
  float avg=(a+b+c)/3;
  return avg;

}