


#include <stdio.h>
int main()
{
    int i, n,a = 0, b = 1, c;

    printf("Enter the number  ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
   a=0;b=1;

    for (i = 1; i <= n; ++i)
    {
       
        c=a+b;
        a=b;;
        b = c;
    }
    return 0;
}
