#include <stdio.h>
#define arrNumElements(x) (sizeof(x)/sizeof(x[0]))

int main()
{   
    long arr1[5];
    int sum=0;  

    printf("Enter 5 integers here: \n");

    for (int i=0;i<5;++i)
    {
        scanf("%d", arr1+i); //arr+1 is equivalent to &x[0+i]
        sum = sum + *(arr1+i); //sum += x[i]
    }
    printf("\nsum = %d\n", sum);
    for (int i=0;i<arrNumElements(arr1);++i)
    {   
        printf("address of x[%d]: %p\n", i, arr1+i);
    }
    
    return 0;   
    
}