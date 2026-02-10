#include <stdio.h>
#include <math.h>
int main (){
int a,b,result; //creat variable
char c;
printf("enter numbers: ");//input from user
scanf("%d %d",&a,&b);
printf("enter symbol: ");
scanf(" %c",&c);
switch(c){
case'+': result=a+b;
    printf("result %d",result);
    break;
case'-': result=a-b;
printf("result %d",result);
break;
case'/': result=a/b;
printf("result %d",result);
break;
case'*': result=a*b;
printf("result %d",result);
break;
case'%':result=a%b;
printf("result %d",result);
break;
default:
printf("invalid operator");}
    return 0;
}
