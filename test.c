#include<stdio.h>
int main()
{
    int n=0,i=0;
    printf("ENTER SIZE n:");
    scanf("%d",&n);
    int values[n];
    printf("ENTER ARRAY VALUES:");
    for(i=0; i<n; i++)
    {
     scanf("%d",&values[i]);
    }
    int A[65536];
    for(i=0;i<65536;i++)
    {
     A[i]=0;
    }
    for(i=0;i<n;i++)
    {
     A[values[i]] = A[values[i]] + 1;
    }
    int j=0,q=0;
    for(i=0; i<65536; i++)
    {
     if(A[i]!=0)
     {
      q=j;
      for(j=q; j<q+A[i]; j++)
      {
       values[j]=i;
      }
     }
    }
    for(i=0; i<n; i++)
    {
     printf("%d ",values[i]);
    }
    printf("\n");
    int value=0,flag=0;
    printf("ENTER VALUE TO BE SEARCHED:");
    scanf("%d",&value);
    int first = 0;
    int last = n-1;
    int mid = (first + last)/2;
    for(i=0; i<n; i++)
    {
     if(value == values[mid])
     {flag=1;
     break;}
      if(value>values[mid])
      {
       first=mid+1;
       mid=(first+last)/2;
       printf("first=%d last=%d >>\n",first,last);
      }
      else
      {
       last=mid-1;
       mid=(first+last)/2;
       printf("first=%d last=%d <<\n",first,last);
      }
    }
    if(flag==0)
    printf("%d is not in the values",value);
    else
    printf("%d is located in '%d' position",value,mid);
return 0;    
}



