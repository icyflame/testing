#include<stdio.h>

int main()
{
    int ppsft=3300, tot=0, area;

    int fl, br, type;

    char opt[2];

    printf("How many bedrooms do you want(1-3)?");
    scanf("%d", &br);

    area = (br == 1 ? 1095 : (br == 2 ? 1350 : 1555));

    printf("The area of your flat is: %d", area);

    printf("On which floor, do you want your flat?");

    scanf("%d", &fl);

    ppsft += 50; //maintenance charges

    ppsft += ((fl > 1) ? ((fl-1)*10) : 0);

    printf("Price per sq ft now is %d", ppsft);

    printf("Do you want a club membership?(Y/N)");

    scanf("%s", opt);

    tot += ( (opt[0] == 'Y' || opt[0] == 'y') ? 100000 : 0);

    tot += 275000;

    printf("Which type of flat do you want?\n1. Garden Facing\n2. South Facing\n3. South-East Facing\n Enter a number: ");

    scanf("%d", &type);

    ppsft += (type == 1 ? 25 : (type == 2? 75 : 125));

    tot += ppsft * area;

    printf("\n\nThe price per square feet: %d", ppsft);

    printf("\nThe area of the flat is: %d", area);

    printf("\nFloor: %d\nClub memebership: %c", fl, opt[0]);

    printf("\n\nThe total cost of the flat is: Rs. %d\n", tot);

    return 0;
}
