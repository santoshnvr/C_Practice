#include<stdio.h>
#include<stdlib.h>

// Initialize the matrix with 0 
int initialize();
int calNcR(int n, int r);
int power(int base, int exp);
int factorialOfNumber(int n);
void sumOfSquesence(int totalNumberOfCoupons,int couponsOfFirstType,int couponOfSecondType, double firstTypeProbability, double secondTypeProbability);

int l[1001][1001] = { 0 }; 

int main() {
    initialize();
    int totalNumberOfCoupons = 4;
    int couponsOfFirstType = 1;
    double probabilityValues[100]; // Need only 50 as number of coupons will not be greater than 50.
    printf("Enter total number of coupons and number of coupons of first type \n");
    scanf("%d%d", &totalNumberOfCoupons, &couponsOfFirstType);
    if (couponsOfFirstType > totalNumberOfCoupons)
    {
        printf("First type cannot be greater than total number of coupons \n");
        exit(1);
    }
    int couponsOfSecondType = totalNumberOfCoupons - couponsOfFirstType;
    printf("Enter the probability of each coupon of first type\n");
    double firstTypeProbability;
    scanf("%lf", &firstTypeProbability);

    double secondTypeProbability = (1 - firstTypeProbability)/(couponsOfSecondType);
    for (int i = 0; i < couponsOfFirstType; i++)
    {
        probabilityValues[i] = firstTypeProbability;
    }
    double remainingEachProbabilities = (1 - (firstTypeProbability * couponsOfFirstType))/(totalNumberOfCoupons - couponsOfFirstType);
    for (int i = couponsOfFirstType; i < totalNumberOfCoupons; i++)
    {
        probabilityValues[i] = remainingEachProbabilities;   
    }
    sumOfSquesence(totalNumberOfCoupons,couponsOfFirstType,couponsOfSecondType, firstTypeProbability,secondTypeProbability);
    // float findEmpiricalValue(int empirical, int seed, int m, double p1, double p2, int type1, int type2)
    // printf("Enter # of iterations for empirical ");
    // int empiricalValue, seed;
    // scanf("%d", empiricalValue);
    // printf("\n Enter seed");
    // scanf("%d", seed);
    // findEmpiricalValue(empiricalValue, seed, couponsOfFirstType, firstTypeProbability, secondTypeProbability, )
}

/*
1) Get number of triles.
2) Total 
*/

void sumOfSquesence(int totalNumberOfCoupons,int couponsOfFirstType,int couponOfSecondType, double firstTypeProbability, double secondTypeProbability){
   double theoriticalSum = 0;
   for (int setNumber = 1; setNumber < totalNumberOfCoupons; setNumber++)
   {
       printf("Set %d \n", setNumber);
       double sumOfTheSet = 0;
    for (int subSet = 0; subSet <= setNumber; subSet++)
    {
        int reverse = setNumber - subSet;
        int multiplier = power(-1, (totalNumberOfCoupons - 1 - setNumber));
        int product = calNcR(couponsOfFirstType, subSet) * calNcR(couponOfSecondType, reverse);
        printf("C(%d, %d) of 1st type X C(%d, %d) of 2nd type -- %d \n", subSet, couponsOfFirstType, reverse, couponOfSecondType, product);
        double denominator = (subSet * firstTypeProbability) + (reverse * secondTypeProbability);
        sumOfTheSet += product/(1 - denominator);
    }
       printf("Subset sum is %lf \n", sumOfTheSet);
   }
   
}

/* 1) Method to create pascals trangle. */
int initialize() 
{ 
    l[0][0] = 1; 
    for (int i = 1; i < 1001; i++) { 
        l[i][0] = 1; 
        for (int j = 1; j < i + 1; j++) {   
            l[i][j] = (l[i - 1][j - 1] + l[i - 1][j]); 
        } 
    } 
    return 0;
} 
  
// Function to return the combinations.
int calNcR(int n, int r) 
{ 
    if (n<r)
    {
        return 0;
    }
    
    return l[n][r]; 
} 

 // Function to calulate power
 int power(int base, int exp)  {
    long long result = 1;
    while (exp != 0) {
        result *= base;
        --exp;
    }
    return result;
 }

// Find factorial of given number.
 int factorialOfNumber(int n) {
    int  i;
    unsigned long long fact = 1;
    
    if (n > 0) {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
    }
    return fact;
 }
