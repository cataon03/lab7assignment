/*
Catalina Ocampo
COP3502C-0004
Dr. Neslisah Torosdagli
Lab 7 Assignment
March 22, 2023

In this program, the function bubbleSort() will sort the array pData and count the amount of swaps every pass.
*/

#include <stdio.h>

void bubbleSort(int* pData, int n)
{
    int temp = 0;
    int count = 0;
    for(int i=0; i<n-1; i++)
    {
        count = 0;
        for(int k=0; k<n-i-1; k++)
        {
            if(pData[k]>pData[k+1])
            {
                temp = pData[k];
                pData[k] = pData[k+1];
                pData[k+1] = temp;

                count++;
            }
        }

        printf("Pass #%d: %d\n", i+1, count);
    }	
}

int main()
{
    int a[9] = {97,16,45,63,13,22,7,58,72};

    printf("Array before Bubble Sort: \n");

    for(int i=0; i<9; i++)
    {
        printf("\t%d", a[i]);
    }

    printf("\n");
    bubbleSort(a, sizeof(a)/sizeof(a[0]));

    printf("\nArray After Bubble Sort: \n");

    for(int i=0; i<9; i++)
    {
        printf("\t%d",  a[i]);
    }

    return 0;
}