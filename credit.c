#include<stdio.h>
#include<cs50.h>
int main(void)
{

        printf("ENTER CREDIT CARD NO.:\n");
        long long n=get_long_long();
        printf("%lld\n",n);
        long long num=n;
        long long d=n;
        int i=0;
        int x=0;
        long long f=1;
        for(i=0; f>0 && n!=0; i++)
        {
            d=n%10;
            n=(n-d)/10;
            f=n/10;
            if(f==0)
            {printf("%lld\n",n);
            x=x+1;}
            else
            {printf("%lld\n",n);
            x=x+1;}
        }
    printf("size %d\n",x);
    int A[i];
    for(i=0; i<=x; i++)
    {
        d=num%10;
        A[i]=d;
        num=(num-d)/10;
        printf("%d\n",A[i]);
    }
    int B[i];
    int sum=0;
    int dig1=0,dig2=0;
    for(i=0; i<=x; i++)
    {
        if(i%2 != 0)
        B[i]=A[i]*2;
        else
        B[i]=A[i];
        if(i%2 != 0)
        {
            if(B[i]/10 == 0)
            sum=sum+B[i];
            else
            {
             dig1=B[i]%10;
             dig2=((B[i]-dig1)/10)%10;
             B[i]= dig1+dig2;
             sum=sum+B[i];
            }
        }
        else
        sum=sum+B[i];
    }
    printf("%d\n",sum);
    int card=0;
    int car=0;
    card=A[x]*10 + A[x-1];
    car=A[x];
    if(sum%10==0)
    {
        printf("Your card is VALID\n");
        if(card==37)
        printf("American express\n");
        else if(card==56)
        printf("Australian Bankcard\n");
        else if(card==30 || card==38)
        printf("Diners club\n");
        else if(card==60)
        printf("Discover\n");
        else if(card==35)
        printf("JCB\n");
        else if(car==5)
        printf("Mastercard\n");
        else if(car==4)
        printf("Visa\n");
        else if(card==76 || card==50)
        printf("Dankort\n");
        else
        printf("Switch/solo\n");
    }
    else
    printf("Your card is INVALID\n");
}    
        



