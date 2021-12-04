#include <stdio.h>
int main()
{
    float pi=3.14;
    float diameter;
    float revolutions;
    float distance;
    printf("Enter the diameter of the wheel in centimeters:");
    scanf("%f",&diameter);
    printf("Enter the total wheel revolutions");
    scanf("%f",&revolutions);
    distance=revolutions*pi*diameter;
    printf("The total distance travelled in cm is %f",distance);
    return 0;
}