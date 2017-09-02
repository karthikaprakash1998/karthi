


#include <stdio.h>

int main()
{
    int number, x, rem, result = 0, n = 0 ;

    printf("Enter an integer: ");
    scanf("%d", &number);

    x = number;
    
    while (x != 0)
    {
        x /= 10;
        ++n;
    }

    x= number;

    while (x != 0)
    {
        rem = x%10;
        result += pow(rem, n);
        x /= 10;
    }

    if(result == number)
        printf("%d is an Armstrong number.", number);
    else
        printf("%d is not an Armstrong number.", number);

    return 0;
}
