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
            {
                int x=S[i];
                if(x>91)  
                {
                x=x-32;
                S[i] = (char)x;
                printf("%c",S[i]);
                }
                else
                printf("%c",S[i]);
                
            }
            else
            {
                int x=S[i+1];
                if(x>91)  
                {
                x=x-32;
                S[i+1] = (char)x;
                printf("%c",S[i+1]);
                }
                else
                printf("%c",S[i+1]);
                
            }
        }
    }
    printf("\n");
}
