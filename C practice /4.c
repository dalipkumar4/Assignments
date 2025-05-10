// Q2.Write a program to multiple 2*3 and 3*2 matrix. The program first accept the two matrix and store multiplication in 3rd matrix.

#include <stdio.h>

int main()
{
    int i, j, s = 0;

    // Define first matrix arr1 of size 2x3
    int arr1[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};

    // Define second matrix arr2 of size 3x2
    int arr2[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}};

    // Resultant matrix arr3 will be of size 2x2
    int arr3[2][2];

    // Perform matrix multiplication
    // arr3[i][j] = sum of (arr1[i][k] * arr2[k][j]) for k from 0 to 2
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            s = 0; // Reset sum for each element
            for (int k = 0; k < 3; k++)
            {
                s = s + arr1[i][k] * arr2[k][j];
            }
            arr3[i][j] = s; // Store the computed value
        }
    }

    // Print the resultant matrix arr3
    printf("Resultant matrix after multiplication:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
