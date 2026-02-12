#include <stdio.h>
int main()
{
    char name[20],rollno[15]; // creat variable
    float sub1,sub2,sub3,total,percentage,division;
    printf("enter name: ");                        // input from user
    scanf("%s",name);
    printf("enter roll no= ");
    scanf("%s",rollno);
    printf("enter subject marks= ");
    scanf("%f %f %f",&sub1,&sub2,&sub3);
   total=sub1+sub2+sub3;
   printf("toatal= %f\n",total);
   percentage=total/3.0;
    printf("percentage= %.2f\n",percentage);
    if (percentage>=60){
        printf("first division\n");
    } else if(percentage>=50){
        printf("second division\n");
    } else if(percentage>=30){
        printf("third division\n");
    } else{
        printf("fail\n");
    }
    return 0;
}
