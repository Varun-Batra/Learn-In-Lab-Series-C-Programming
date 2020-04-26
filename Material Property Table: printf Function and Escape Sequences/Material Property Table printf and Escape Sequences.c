/*Program Name: Use of Formatted Console Output Function and escape sequences for table making.
Author: Varun Batra || MechE Inside
Output of Program: Strings on Console Output in Tabular format.*/

#include <stdio.h>

main()
{
    printf("\n\t\t\t\t\t\t\t\t-----------------------");
    printf("\n\t\t\t\t\t\t\t\tMaterial Property Table");
    printf("\n\t\t\t\t\t\t\t\t-----------------------\n\n");
    printf("Material\t\tModulus of Elasticity(E)\t\tModulus of Rigidity(G)\t\tPoisson's Ratio(v)\t\tUnit Weight(w)");
    printf("\t\t\t\t\t\tGPa\t\t\t\t\tGPa\t\t\t\t\t\t\t\t   kN/m^3\n");
    printf("----------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("Brass\t\t\t\t106\t\t\t\t\t40.1\t\t\t\t 0.324\t\t\t   83.8\n");
    printf("Cast Iron\t\t\t100\t\t\t\t\t41.4\t\t\t\t 0.211\t\t\t   70.6\n");
    printf("Copper\t\t\t\t119\t\t\t\t\t44.7\t\t\t\t 0.326\t\t\t   87.3\n");
    printf("Glass\t\t\t\t46.2\t\t\t\t\t18.6\t\t\t\t 0.245\t\t\t   25.4");
    printf("\n\n\n\n\n\n\n");
}
