/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    int first = 0;
    int last = n-1;
    int mid = (first + last)/2;
    int i=0;
    for(i=0; i<n; i++)
    {
     if(value == values[mid])
     return true;
     else
     {
      if(value>values[mid])
      {
       first=mid+1;
       mid=(first+last)/2;
      }
      else
      {
       last=mid-1;
       mid=(first+last)/2;
      }
     }
    }
    if(i==n)
    return false;
return false;    
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    int i=0;
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
 return;
}
