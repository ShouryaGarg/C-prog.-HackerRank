#include <stdio.h>
#include <string.h>

int main()
{   
    char sen[200];
    scanf("%[^\n]%c" ,&sen);
    printf("Hello, World!");
    printf("\n%s" ,sen);
    
    return 0;
}
