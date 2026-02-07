#include <stdio.h>
int main (){
    int n,i,sum=0;
 printf("natural number: ");
 scanf("%d",&n);
 for(i=1; i<=n; i++){
 sum=i+sum;}
 printf("\n sum natural number: %d",sum);
    return 0;
}
