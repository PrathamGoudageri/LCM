#include <stdio.h>
 

int x(int a, int b)
{
    if (a == 0)
        return b;
    return x(b % a, a);
}
 
int lcm(int a, int b)
{
    return (a / x(a, b)) * b;
}
 

int main()
{
    int a = 0, b = 0;
    printf("Input the first number:\n");
    scanf("%d",&a);
    printf("Input the second number:\n");
    scanf("%d",&b);
    printf("LCM of %d and %d = %d ", a, b, lcm(a, b));
    return 0;
}
