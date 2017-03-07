#include<stdio.h>
#include<cs50.h>
int main(void)
{
    printf("No. of minutes spent=");
    int min = GetInt();
    printf("No. of bottles used are %i \n" ,min*12);
}