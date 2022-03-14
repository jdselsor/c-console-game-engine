#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main ()
{
    double theta = 34.2;
    double s = sin(theta);
    double c = cos(theta);

    double res = (s * s) + (c * c);

    printf("The result is %f", res);

    return 0;
}