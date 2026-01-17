#include <stdio.h>
int main () {
    int age;
    float height;
    char section; 
    printf("my age , \n");
    scanf("%d",&age);
    printf("my height, \n");
    scanf("%f", &height);
    printf("my section , \n");
    scanf(" %c", &section);
    printf("\n  result  \n");
    printf("age: %d\n",age);
    printf("hieght: %f\n",height);
    printf("section: %c\n",section);
    return 0;
}