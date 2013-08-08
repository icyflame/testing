#include<stdio.h>

int main()
{
    int a, b, c;

    printf("Enter the three lengths:\n");

    scanf("%d %d %d", &a, &b, &c);

    if(a+b>c)
        if(b+c>a)
            if(a+c>b)
            {
                printf("These lengths can form a triangle\n");
                return 0;
            }

            printf("These lengths can't form a triangle!");
            return 0;





}
