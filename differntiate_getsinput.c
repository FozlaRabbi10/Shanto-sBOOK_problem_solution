#include<stdio.h>
int main()
{
    char string[200];
    char diff[10][100];
    int j=0;
    int k=0;
    int i;
    gets(string);
    for(i=0;string[i]!= '\0';i++)
    {
        if(string[i] == ' ')
        {
            diff[j][k] = '\0';
            j=j+1;
            k=0;
        }
        else
        {
            diff[j][k] = string[i];
            k=k+1;
        }


    }
    k=0;
    printf("\n");
    for(i=0;i <= j;i++)
    {
        for(k=0; diff[i][k]!= '\0';k++)
        {
            printf("%c",diff[i][k]);
        }
        printf("\n");
    }

}
