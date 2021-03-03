#include <stdio.h>
#include <string.h>
int main() 
{   
    char ch, word[100], sen[100];
    
    scanf("%C" ,&ch);
    scanf("%s\n" ,&word);
    scanf("%[^\n]%c" ,&sen);
    
    printf("%c\n", ch);
    printf("%s\n", word);
    printf("%s\n", sen);
    
    return 0;
}
