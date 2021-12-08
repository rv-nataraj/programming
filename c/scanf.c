#include <stdio.h>
int main()
{
    int a;
    printf("\nEnter an integer value: ");
    scanf("%d",&a);

    float b;
    printf("Enter a float value: ");
    scanf("%f",&b);

    char c;
    printf("Enter a character value: ");
    scanf(" %c",&c);

    printf("%p : %d\n %p : %f\n %p : %c\n",&a,a,&b,b,&c,c);
    return 0;
}