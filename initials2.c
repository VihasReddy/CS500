#include<stdio.h>
#include<cs50.h>
#include<string.h>
int main(void)
{
    printf("ENTER YOUR NAME:");
    string S = GetString();
    for(int i=0; i < strlen(S); i++)
    {
        if(S[i]!=' ')
        {   
            if(S[i-1]==' ' || S[0]!=' ')
            {
                int x=S[i];
                if(x>91)  
                {
                x=x-32;
                S[i] = (char)x;
                printf("%c",S[i]);
                }
            }
        }    
    } 
    printf("\n");
}