// array -> collection of same data type (homogenous datatype, user defined datatype)
//  types -> one-dimesional and multi-dimensional array
// index -> start  with 0
//  int a[size] -> arr[10] -> a[0], a[1], ....

#include<stdio.h>
int main()
{
    int a[5],i;
    int arr[10] = {1,5,3,2,1,10}; // init
    // data entry
    for(i=0;i<5;i++)
    {
        printf("Enter val a[%d]: ",i);
        scanf("%d",&a[i]);
    }

    // print data
    for(i=0;i<10;i++)
    {
        printf("\na[%d]: %d ",i,a[i]);
    }
}

// two array print total