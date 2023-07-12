// continue statements
#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        if (i == 5 || i==9)
        {
            continue;
        }
        printf("%d ", i);
    }
}

/*
// goto statements
int i=1;
    test:
        if(i<=10){
            printf("%d ",i++);
            goto test;
        }

*/