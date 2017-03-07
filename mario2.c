#include<stdio.h>
#include<cs50.h>
int main(void)
{
   int h;
   do
   {
    printf("Height of tower=");
    scanf("%d",&h);
   }while(h<0 || h>23);
    for(int i=0; i<h; i++)
    {
        for(int p=0; p < (2*h)-1; p++)
        {
            int x=h-i;
            if(p<x-1 || p>h+i-1)
            printf(" ");
            else if(p==h-1)
            printf("# #");
            else 
            printf("#");
        }
        printf("\n");
    }
}