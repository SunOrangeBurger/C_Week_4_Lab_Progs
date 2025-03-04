//find closest fibonacci number to input
#include <stdio.h>
#include <stdlib.h>

void main() {
    int input, prev = 0, curr = 1, next = 1;
    printf("Enter a number to find closest fibonacci number:");
    scanf("%d", &input);

    while (next <= input) {//fibb sequence generator until it jumps over input value
        prev = curr;
        curr = next;
        next = prev + curr;
    }
//not the only way to do it. try alternate ways lol
    // see ifcci number is closer - curr or next
    if (abs(input - curr) < abs(input - next)) {
        printf("Closest fibonacci number to %d is %d\n", input, curr);
    } else {
        printf("Closest fibonacci number to %d is %d\n", input, next);
    }
}//hehe