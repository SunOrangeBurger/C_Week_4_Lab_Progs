//all prime numbers in a given range
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int lower, upper;
    printf("Enter lower limit:");
    scanf("%d", &lower);
    printf("Enter uppper limit");
    scanf("%d", &upper);
    if(lower>upper){//swapping limits when lower is greater than upper(not exactly needed but this testcase needs to be handled and this is the dumb way to do it)
        lower = lower + upper;
        upper = lower - upper;
        lower = lower - upper;
    }
    //classic prime numebr check. using a checkpoint variable is very reliable, simple to use. IF YOU DONT UNDERSTAND IT JUST MEMORISE IT ITS NOT THAT HARD ;>
    for(int i = lower; i <= upper; i++) {
        int isPrime = 1;
        if(i <= 1) {
            isPrime = 0;
        }
        for(int j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime) {
            printf("%d ", i);
        }
    }
}