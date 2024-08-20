/* test how to statement a varable lenght array(val)*/

#include <stdio.h>


int main(void)
{
    int size1, size2, size3;

    printf("please input there int nums \n");
    scanf("%d%d%d", &size1, &size2, &size3);

    int array1[size1];
    int array2[size2][size3];

    int i;

    for(i = 0; i < size1; i++)
    {
        *(array1 + i) = i;
    }

    int j;
    for(i = 0; i < size2; i++)
    {
        for(j = 0; j < size3; j++)
        {
            array2[i][j] = i * size3 + j;
        }
        
    }

    for(i = 0; i < size1; i++)
    {
        printf("array1[%d] is %d\n" , i, *(array1 + i));
    }

    for(i = 0; i < size2; i++)
    {
        for(j = 0; j < size2; j++)
        {
            printf("array2[%d] is %d\n" , i, array2[i][j]);
        }
        
    }

    printf("size of array1 is %zd\n" , sizeof(array1));
    printf("size of array2 is %zd\n" , sizeof(array2));

}













