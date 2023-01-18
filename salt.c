#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

int main()
{

    printf("Enter the length of the pool: \n");
        int Pool_Length;
            scanf("%d", &Pool_Length);

    printf("Enter the width of the pool: \n");
        int Pool_Width;
            scanf("%d", &Pool_Width);

    printf("Enter the average depth of the pool: \n");
        int Pool_Depth;
            scanf("%d", &Pool_Depth);
 
    float Gallons = Pool_Length * Pool_Width * Pool_Depth * 7.5;
    float SaltNeeded = Gallons / 5282;

    printf("Your pool has %d gallons of water\n", (int)Gallons);

    printf("You need to add 1 40lb bag of salt per 5282 gallons to increase the salinity by 1000\n");
    
    printf("The number of bags of salt needed to increase the salinity by 1000 is %f\n", SaltNeeded);
    printf("The number of bags of salt needed to increase the salinity by 500 is %f\n", SaltNeeded / 2);
    printf("The number of bags of salt needed to increase the salinity by 250 is %f\n", SaltNeeded / 4);

    printf("Press any key to end this program.\n");
        getch();

    return EXIT_SUCCESS;
}
