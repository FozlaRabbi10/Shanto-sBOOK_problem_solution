#include <stdio.h>
#include <string.h>


int main()
{
    char a;
    char s[1000];
    char sen[1000];
    scanf("%c",&a);
    scanf("%s",s);
    scanf("%[^\n]%*c",sen);
    printf("%c\n%s\n%s\n",a,s,sen);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
