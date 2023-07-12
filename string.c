// string - collection of char
// string  last letter -> '\0' (NULL CHARACHTER)       surat\0
 
#include<stdio.h>
int main()
{
    char str[50];

    printf("Enter string: ");
    // scanf("%s",&str);       // space not allowed
    // scanf("%[^\n]s",&str);       // space allowed
    gets(str);

    // puts(str);
    printf("\nYour string is: %s",str);

    int i=0;

    while(str[i]!='\0'){
        i++;
    }
    printf("\nLenth  is : %d",i);
}

// reverse string (strrev)
// two string merge (strcon) => hello + world = helloworld
// sahil -> s l a i h