#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a:-""\n");
    scanf("%d",&a);
    printf("enter the value of b:-""\n");
    scanf("%d",&b);
    printf("enter the value of c:-""\n");
    scanf("%d",&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("a is maximum");
        }
        else
        {
            printf("c is maximum");
        }
    }
        else if(b>c)
        {
            printf("b is maximum");
        } 
        else
        {
            printf("c is greater");
        }
        return 0;
}        
