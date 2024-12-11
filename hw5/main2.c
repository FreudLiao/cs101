#include <stdio.h>
#include <math.h>

int main()
{
    double PI = 0.0, i = 0.0, x = 1.0; 
    int sign = 1;

    for (;; x++) { 
        i = 4.0 / ((2 * x) - 1);
        PI = PI + (i * sign);
        sign = sign * -1;

        if (fabs(PI - 3.14159) <= 0.000001) {
            break;
        }
    }

    printf("PI = %.5f\n", PI);
    printf("x = %.0f\n", x); 
    return 0;
}
