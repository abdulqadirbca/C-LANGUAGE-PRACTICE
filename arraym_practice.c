#include <stdio.h>
int main() {
   int marks[5];
for (int i =0; i<5; i++){
      printf("subject %d marks: ",i);
   scanf("%d" ,&marks[i]);}
   int max= marks[0];
   for (int i=1; i<5; i++){
      if( marks[i]>max) {
         max=marks[i];
      }
   } printf("\n maximum marks: %d\n",max);
return 0;
}

