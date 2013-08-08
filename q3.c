#include<stdio.h>

int main()
{
    int a, b, x1, y1, x2, y2;
    printf("Enter the coordinates of the first bus stand: ");
    scanf("%d %d", &x1, &y1);

    printf("Enter the coordinates of the second bus stand: ");
    scanf("%d %d", &x2, &y2);

    printf("Enter your coordinates: ");
    scanf("%d %d", &a, &b);

    float d1, d2;

    d1 = sqrt((x1-a)*(x1-a)+(y1-b)*(y1-b));
    d2 = sqrt((x2-a)*(x2-a)+(y2-b)*(y2-b));

    if(d1 < d2)

        printf("Target the first bus stand.");

    else
        printf("Target the second bus stand.");




    return 0;
}
