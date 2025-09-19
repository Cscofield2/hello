/**
* Author: Carson Scofield
* Date: 9/18/2025
*
* This program will create a amortization
* table for a 401(k) account
*
*/
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {

if (argc != 6){
    printf("Error please enter correct information\n");
    return 1;
}

    double startingBalance = atof(argv[1]);
    double monthlyDeposit = atof(argv[2]);
    double returnRate = atof(argv[3]);
    double inflationRate = atof(argv[4]);
    int retireYears = atoi(argv[5]);

    double interest, annualAdjustment, monthlyAdjustment, yearsMonths, totalInterest, totalBalance;

    if (inflationRate >= 0 && inflationRate <= 1 && returnRate >= 0 && returnRate <= 1) {

    annualAdjustment = ((1 + returnRate) / (1 + inflationRate)) - 1;
    monthlyAdjustment = annualAdjustment / 12;
    yearsMonths = retireYears * 12;


    }else {
        printf("Error: Please select values in the [0,1] for inflation and return rate!");
        }
    printf("Month      Interest      Balance\n");
    if (monthlyDeposit <= 18500){
    for (int i = 1; i <= yearsMonths; i++) {

    interest = startingBalance * monthlyAdjustment;
    startingBalance += monthlyDeposit + interest;
    totalInterest += interest;
    totalBalance = startingBalance;
    printf("%d $        %.2lf         %.2lf\n", i, interest, startingBalance);
    }
}else {
    printf("Monthly contributions exceed $18,500 annual limit\n");
    return 1;
}
    //totalInterest = round(totalInterest )
    printf("Total Interest Earned: $ %.2lf\n", totalInterest);
    printf("Total Balance: $ %.2lf\n", totalBalance);


    return 0;

}
