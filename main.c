#include <stdio.h>

const double package_Weight_Per_Motor = 5.6;

int main(void)
{
    int motorCount;
    double packageWeight;

    printf("How many motors are carrying the packages? ");
    fflush(stdout);
    if (scanf("%d", &motorCount)!= 1) return 0;

    printf("How many kg of packages do we expect? ");
    fflush(stdout);
    if (scanf("%lf", &packageWeight)!= 1) return 0;

    // Each motor can take up to 5.6 kg on avarage.

    if (motorCount > 0 && packageWeight / motorCount <= package_Weight_Per_Motor) {
        printf("Yes! The conveyor belt can carry the packages.\n");
    } else {
        printf("No. The conveyor belt cannot carry the packages.\n");
    }

    return 0;
}
