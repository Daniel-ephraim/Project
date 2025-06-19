#include <stdio.h>
#include <stdlib.h>
#include "FlatInterest.h"

void CalculateCompoundInterest(){
    double Amount, Time, Rate;

    printf("Enter the Investment Amount:\n");
    scanf("%lf",&Amount);

    printf("Enter the Time:\n");
    scanf("%lf",&Time);

    printf("Enter the Rate:\n");
    scanf("%lf",&Rate);

    double FlatInterest = Amount*Rate*Time;
    printf("\nThe Flat Interest is %.2lf", FlatInterest);

}
