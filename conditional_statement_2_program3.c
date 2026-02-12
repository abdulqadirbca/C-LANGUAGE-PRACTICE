#include <stdio.h>
int main()
{
    float tem; // creat variable
    printf("enter temperature: ");//input from user
    scanf("%f", &tem);
    if (tem < 0)
    {
        printf("freezing weather\n");
    }
    else if (tem <= 10)
    {
        printf("very cold weather\n");
    } 
    else if (tem <= 20)
    {
        printf("cold weather\n");
    }
    else if (tem <= 30)
    {
        printf("normal temperature\n");
    } else if(tem<=40){
     printf("its hot\n");
    }
    else if (tem >= 40)
    {
        printf("very hot\n");
    }
    return 0;
}
