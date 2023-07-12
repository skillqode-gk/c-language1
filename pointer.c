// pointer -> store to address  of variable
#include<stdio.h>
int main(){
    int a = 20, *p,**q;
    p = &a;
     q = &p;
    printf("Value of a is: %d\n",a);
    printf("Address of a is: %u\n",&a);
    printf("Address of a using p is: %d\n",p);
    printf("Address of p is: %u\n",&p);
    printf("value of a using p is: %d\n",*p);
    printf("value of a using q is: %d\n",**q);
}