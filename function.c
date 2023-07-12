/* function -> perticular task / work
        argument    return
    1    no          no
    2    no          with
    3    with        no
    4    with        with
*/
//4. WAWR
#include<stdio.h>
int add(int x, int y)       // function define
{
    return x*y;
}
int main()
{
    int a,b;
    printf("Enter a and b: ");
    scanf("%d%d",&a,&b);

    int t = add(a,b);       //  a,b - argument
    printf("product  is: %d",t);
}

