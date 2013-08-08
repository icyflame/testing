#include<stdio.h>

int main()
{
    int a, b, c;

    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    if(a < b)
    {
        c = a;
        a = b;
        b = c;
    }

    printf("a = %d, b = %d", a, b);
    return 0;
}
