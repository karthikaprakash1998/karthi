#include <stdio.h>
int main()
{
    int n, ri = 0, rem, x;

    printf("Enter an integer: ");
    scanf("%d", &n);

    x = n; 
    while( n!=0 )
    {
        remainder = n%10;
        ri = ri*10 + rem;
        n /= 10;
    }
    if (x== ri)
        printf("%d is a palindrome.",x);
    else
        printf("%d is not a palindrome.", x);
    
    return 0;
}





