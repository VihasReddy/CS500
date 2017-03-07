#include<stdio.h>
#include<cs50.h>
#include<string.h>
int main(void)
{
    printf("ENTER YOUR NAME:");
    string S = GetString();
    for(int i=0; i < strlen(S); i++)
    {
        if(i==0 || S[i]==' ')
        {
            if(i==0)
            printf("%c",S[i]);
            else
            printf("%c",S[i+1]);
        }
    }
}