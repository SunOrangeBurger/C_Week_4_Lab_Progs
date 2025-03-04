#include <stdio.h>
#include <stdlib.h>
void main()
{
    int input, x, sum=0, product=1, temp, digit, count=0;
    printf("Enter number: ");
    scanf("%d", &input);
    temp = input;
    //basically creating a meat shield for the variable holding input value(a variable shield??? idk im too high off of caffeine)
    while(temp != 0) {
        digit = temp % 10;
        sum += digit;
        product *= digit;
        count++;
        temp /= 10;
    }
    //here in this loop we only iterate and eat into temp value because we need to preserve input. The order of actions cannot be changed(x needs to be updated last)
    if(sum + product == input) {
        printf("Number of digits: %d\n", count);
        printf("The number %d satisfies the condition\n", input);
    } else {
        printf("Number of digits: %d\n", count);
    }
    //no return zero becasue I used void instead of int(void is better for smaller programs with no returns)
}