#include<stdio.h>
int main ()
{
  int a[20],n,i,j,temp,first,last,mid,key;
  printf("Enter the number of elements in the array:");
  scanf("%d",&n);
  printf("Enter array elements:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("\nArray elements before sorting are:");
  for(i=0;i<n;i++)
  {
    printf("\t%d",a[i]);
  }
  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-1-i;j++)
    {
      if(a[j]>a[j+1])
      {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
  }
  printf("\nArray elements after sorting are:");
  for(i=0;i<n;i++)
  {
    printf("\t%d",a[i]);
  }
  first = 0;
  last = n-1;
  printf("\nEnter the key to search:");
  scanf("%d",&key);
  while(first<=last)
  {

      mid = (first+last)/2;
      if(key==a[mid])
      {
          printf("key element found at position : %d" ,mid);
          return 0;
      }
      else if(key>a[mid])
      {
        first = mid+1;
        last = n-1;
      }
      else if(key<a[mid])
      {
         first = 0;
         last = mid-1;
      }
  }
  printf("\nKey not found in the array");
  return -1;
  }