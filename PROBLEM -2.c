#include <stdio.h>
#include <math.h>

int main() {
    double theta = 45.0;
    double theta_radous = theta * (3.1416 / 180);
    double ratio = 1 / sin(theta_radous);
    printf("The ratio a/lambda is: %.2f\n", ratio);

    return 0;
}
