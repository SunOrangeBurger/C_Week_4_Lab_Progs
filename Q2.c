//check if smth is dudley number(sthe cube of the sum of digits is the number itself)
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
//math is not needed im just usig it cus I can use it. free will type shii :)
void main()
{
    int input, x, p=0;
    printf("Enter to check if the given number is a dudley number or not:");
    scanf("%d", &input);
    x=input;
    while(x>0)
    {
        p+=x%10;
        x=x/10;
        //taste hatred on thy tounge, my fall from grace
    }
    if(input==pow(p,3))//basic checks its okay
        printf("%d is a dudley number", input);
    else
        printf("%d is not a dudley number", input);
}