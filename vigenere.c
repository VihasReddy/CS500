#include<stdio.h>
#include<cs50.h>
#include<string.h>
int main(int argc, string argv[])
{
    if(argc==1 || argc>2)
     printf("usage: ./vigenere k\n");
    else
    {argc=2;
    int n1= strlen(argv[1]);
    int i=0;
    int flag=0;
    for(i=0; i<n1; i++)
    {
      if(argv[1][i]<65 || argv[1][i]>122) 
       flag=1;
      else if(argv[1][i]>90 && argv[1][i]<97)
       flag=1;
      else
       flag=0;
    }
    if(flag==1)
    printf("usage: ./vigenere k");
    else
    {
      printf("PLaintext: ");
      string s= GetString();
      int n2=strlen(s);
      printf("Ciphertext: ");
      int d=0;
      int x=0;
      for(x=0;x<n2;x++)
      {
        for(i=0;i<n1;i++)
        {
         d = argv[1][i];
         if(d>90)
          d=d%97;
         else
          d=d%65;
         if((s[x]>=65 && s[x]<91) || (s[x]>=97 && s[x]<123))
         { s[x]=s[x]+d;
         if((s[x]>=65 && s[x]<91) || (s[x]>=97 && s[x]<123))
          s[x]=s[x];
         else
          s[x]=s[x]-26;}
         else
          {if(x<n2)
          i=i-1;}
        x=x+1;
         }
        if(((s[x]>=65 && s[x]<91) || (s[x]>=97 && s[x]<123)) && x!=0) 
        x=x-1;
      }
      for(x=0; x<n2; x++)
      {
       printf("%c",s[x]);
      }
    printf("\n");
    }}
}