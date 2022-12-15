
#include <stdio.h>

int main(void) 
{
    
    printf("To calculate the angle (in degree) of the large spike in the wall-mounted wheel.");

    float h , min, sec, deg;
    printf("\n\n");

    printf("Enter the hours: \n");
    scanf("%i", &h)

    printf("Enter the minutes: \n");
    scanf("%i", &min)

    printf("Enter the seconds: \n");
    scanf("%i", &sec)

    deg = (h) + (min / 60) + (sec/3600);
    printf("Therefore, the angle rotated by the large spike in the wall-mounted wheel is %f degrees.\n", deg);

    return 0;
}