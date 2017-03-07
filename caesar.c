#include<stdio.h>
#include<cs50.h>
#include<string.h>
int main(int argc, string argv[])
{
    if(argc==1 || argc>2)
    printf("usage: ./caesar k\n");
    else
    {argc=2;
    string p=argv[1];
    int n1=strlen(p);
    int i=0;
    int flag=0;
    for(i=0; i<n1; i++)
    {
      if(argv[1][i]>=48 && argv[1][i]<=57) 
       flag=0;
      else
       flag=1;
    }
    if(flag==0)
    {
    int x=0,d=1,z=0;
    for(i=strlen(p)-1; i>=0; i--)
    {
        z=p[i]-48;
        x=x+z*d;
        d=d*10;
    }
    if(x>26)
      x=x%26;
    printf("Plaintext: ");
    string s= GetString();
    printf("Ciphertext: ");
    for(i=0; i < strlen(s); i++)
    {
      int y=s[i];
      int c=0;
      if((y>=65 && y<91) || (y>=97 && y<123))
      {
        c=y+x;
        if(y<91)
        {
          if(c>=91)
          c=c-26;
        }
        else
        {
          if(c>122)
          c=c-26;
        }
      }
      else
      c=y;
     printf("%c",(char)c);  
    }  
 printf("\n");    
 }
else
printf("usage: ./caesar k");
}
}


