/*
Program Name: Material Property Table Precisely for 4 Materials
Author: Varun Batra||MechE Inside
*/
#include <stdio.h>
#include <stdlib.h>
char mat1[15],mat2[15],mat3[15],mat4[15];
float e1,g1,p1,w1,e2,g2,p2,w2,e3,g3,p3,w3,e4,g4,p4,w4;
int main()
{
    printf("\n\t\t\t\t\t\t\t\t-----------------------");
    printf("\n\t\t\t\t\t\t\t\tMaterial Property Table");
    printf("\n\t\t\t\t\t\t\t\t-----------------------\n\n");
    printf("\t\t\t\t\t*Alert*: Please do not use space while entering the Material Name\n");
    printf("\t\t\t\t\t\t\t(if required use Underscore\'_\')\n\n");
    printf("Enter the Name of first Material: ");    ///Data Input of Material Names
    scanf("%s",&mat1);
    printf("Enter the Name of second Material: ");
    scanf("%s",&mat2);
    printf("Enter the Name of third Material: ");
    scanf("%s",&mat3);
    printf("Enter the Name of fourth Material: ");
    scanf("%s",&mat4);
    printf("\n\t\t\t\t\t\t\t\t----------------");       ///Data Input for Material 1
    printf("\n\t\t\t\t\t\t\t\t Data for %s",mat1);
    printf("\n\t\t\t\t\t\t\t\t----------------");
    printf("\nEnter the Modulus of Elasticity(E) in GPa: ");
    scanf("%f",&e1);
    printf("Enter the Modulus of Rigidity(G) in GPa: ");
    scanf("%f",&g1);
    printf("Enter the Poisson's Ratio(v): ");
    scanf("%f",&p1);
    printf("Enter the Unit Weight(w) in kN/m^3: ");
    scanf("%f",&w1);
    printf("\n\t\t\t\t\t\t\t\t----------------");       ///Data Input for Material 2
    printf("\n\t\t\t\t\t\t\t\tData for %s",mat2);
    printf("\n\t\t\t\t\t\t\t\t----------------");
    printf("\nEnter the Modulus of Elasticity(E) in GPa: ");
    scanf("%f",&e2);
    printf("Enter the Modulus of Rigidity(G) in GPa: ");
    scanf("%f",&g2);
    printf("Enter the Poisson's Ratio(v): ");
    scanf("%f",&p2);
    printf("Enter the Unit Weight(w) in kN/m^3: ");
    scanf("%f",&w2);
    printf("\n\t\t\t\t\t\t\t\t----------------");
    printf("\n\t\t\t\t\t\t\t\t Data for %s",mat3);      ///Data Input for Material 3
    printf("\n\t\t\t\t\t\t\t\t----------------");
    printf("\nEnter the Modulus of Elasticity(E) in GPa: ");
    scanf("%f",&e3);
    printf("Enter the Modulus of Rigidity(G) in GPa: ");
    scanf("%f",&g3);
    printf("Enter the Poisson's Ratio(v): ");
    scanf("%f",&p3);
    printf("Enter the Unit Weight(w) in kN/m^3: ");
    scanf("%f",&w3);
    printf("\n\t\t\t\t\t\t\t\t----------------");       ///Data Input for Material 4
    printf("\n\t\t\t\t\t\t\t\t Data for %s",mat4);
    printf("\n\t\t\t\t\t\t\t\t----------------");
    printf("\nEnter the Modulus of Elasticity(E) in GPa: ");
    scanf("%f",&e4);
    printf("Enter the Modulus of Rigidity(G) in GPa: ");
    scanf("%f",&g4);
    printf("Enter the Poisson's Ratio(v): ");
    scanf("%f",&p4);
    printf("Enter the Unit Weight(w) in kN/m^3: ");
    scanf("%f",&w4);
    printf("\n\t\t\t\t\t\t\t\t-----------------------");        ///Table Making Starts
    printf("\n\t\t\t\t\t\t\t\tMaterial Property Table");
    printf("\n\t\t\t\t\t\t\t\t-----------------------\n\n");
    printf("----------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("\nMaterial\t\tModulus of Elasticity(E)\t\tModulus of Rigidity(G)\t\tPoisson's Ratio(v)\t\tUnit Weight(w)");
    printf("\t\t\t\t\t\tGPa\t\t\t\t\tGPa\t\t\t\t\t\t\t\t   kN/m^3\n");
    printf("----------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("%-12s\t\t\t%-4.1f\t\t\t\t\t%-4.1f\t\t\t\t%5.3f\t\t\t  %4.1f\n",mat1,e1,g1,p1,w1);
    printf("%-12s\t\t\t%-4.1f\t\t\t\t\t%-4.1f\t\t\t\t%5.3f\t\t\t  %4.1f\n",mat2,e2,g2,p2,w2);
    printf("%-12s\t\t\t%-4.1f\t\t\t\t\t%-4.1f\t\t\t\t%5.3f\t\t\t  %4.1f\n",mat3,e3,g3,p3,w3);
    printf("%-12s\t\t\t%-4.1f\t\t\t\t\t%-4.1f\t\t\t\t%5.3f\t\t\t  %4.1f\n",mat4,e4,g4,p4,w4);
    return 0;
}

