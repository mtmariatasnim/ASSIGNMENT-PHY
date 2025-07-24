#include <stdio.h>  

#include <math.h>  



int main()  

{  

    double theta = 45;  

    double angle = theta * 3.1416 / 180;  



    double ratio = 1 / sin(angle);  



    printf("Ratio = %.2f\n", ratio);  



    return 0;  

}
