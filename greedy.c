#include<stdio.h>
#include<cs50.h>
int main(void)
{
    float h;
    do
    {
        printf("How much do I owe you:");
        scanf("%f",&h);
    }while(h < 0.00 || h);
    int x=0,p=0;
    x= h*100; 
    p= x%100;
    int s=0;
    for(int i=0; p>0; i++)
    {
        if(p >= 75)
        {
            p=p-75;
            s=s+3;
        }
        else if(p >= 50 )
        {
            p=p-50;
            s=s+2;
        }
        else if(p >= 25)
        {
            p=p-25;
            s=s+1;
        }
        else if(p >= 20)
        {
            p=p-20;
            s=s+2;
        }
        else if(p >= 10)
        {
            p=p-10;
            s=s+1;
        }
        else if(p >= 5)
        {
            p=p-5;
            s=s+1;
        }
        else
        {
            s=s+p;
            p=0;
            printf("No. of coins you get is:%d",s);
        }
    }      
}