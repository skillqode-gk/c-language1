
#include<stdio.h>
int s(int n)
{
    if(n==0){
        return 1;
       }   
    else if(n==1)
    {
        return 1;
    }   
    else
    {
    return s(n-1)+s(n-2);
    }
}+
int main()
{
   int i,n=10;
    for(i=0;i<n;i++){
    printf("%d,",s(i));
}
}
