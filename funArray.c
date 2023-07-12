// array pass with function
#include<stdio.h>
#define n 7
int display(int b[]){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",b[i]);
    } 
}

int main()
{
    int arr[n],i;
    for(i=0;i<n;i++){
        printf("Enter val: ");
        scanf("%d",&arr[i]);
    }
    display(arr);
    
}

// maximum, minimum no find
/*  running total
    10
    20      30
    30      50
    40      70
    50      90
*/