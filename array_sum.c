#include <stdio.h>
int main() {
   int marks[5];
   int sum=0;
   float average;
for (int i =0; i<5; i++){
      printf("subject %d marks: ",i);
   scanf("%d" ,&marks[i]);}
   int min= marks[0];
   for (int i=0; i<5; i++){
      sum=sum+marks[i];}
      average =sum/5.0;
      printf("\n sum marks: %d\n",sum);
      printf("/n average :%.2f%%",average);
return 0;
}

