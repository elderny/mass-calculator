#include <stdio.h>
/*

kms to miles
inches to foot
cms to inches
pound to kgs
inches to meters


*/
int main()
{

    int num, g = 0;
    float value;
    printf("Here below are some options you can choose:\n");
    printf("Type 1 for using kms to miles converter\n");
    printf("Type 2 for using inches to food converter\n");
    printf("Type 3 for using cms to inches converter\n");
    printf("Type 4 for using pound to kgs converter\n");
    printf("Type 5 for using inches to meters converter\n");

    while(g == 0)
    {
        printf("\nType Your Number to select converters\n");
        scanf("%d", &num);

        if(num == 1)
        {
            printf("Selected kms to miles converter\n");
            printf("Type you number to Convert!\n");
            scanf("%f", &value);
            printf("Your Results are: %f miles", value*1.60934);
        }
        else if(num == 2)
        {
            printf("Selected inches to foot converter\n");
            printf("Type you number to Convert!\n");
            scanf("%f", &value);
            printf("Your Results are: %f foot", value*0.0833333);
            
        }
        else if(num == 3)
        {
            printf("Selected cms to inches converter\n");
            printf("Type you number to Convert!\n");
            scanf("%f", &value);
            printf("Your Results are: %f inches", value*0.393701);
        }
        else if(num == 4)
        {
            printf("Selected pound to kgs converter\n");
            printf("Type you number to Convert!\n");
            scanf("%f", &value);
            printf("Your Results are: %f kgs", value*0.453592);
        }
        else if(num == 5)
        {
            printf("Selected inches to meters converter\n");
            printf("Type you number to Convert!\n");
            scanf("%f", &value);
            printf("Your Results are: %f meters", value*0.0254);
        }
    }
        return 0;
}
