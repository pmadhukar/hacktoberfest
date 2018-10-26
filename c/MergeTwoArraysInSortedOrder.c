#include <stdio.h>
int main()
{
  int l1,l2,i,j=0,k=0;
  printf("Enter the size of first array : ");
  scanf("%d",&l1);
  printf("Enter the size of second array : ");
  scanf("%d",&l2);
  printf("Enter the first array : ");  
  int a[l1],b[l2],c[l1+l2];
  for(i=0;i<l1;i++) scanf("%d",&a[i]);
    printf("Enter the second array : ");  
  for(i=0;i<l2;i++) scanf("%d",&b[i]);
  for(i=0;i<l1+l2;i++)    
  {
    if(k==l2)
    {
      c[i]=a[j];
      j++;
    }
    else if(j==l1)
    {
      c[i]=b[k];
      k++;
    }
    else if(a[j]<b[k])
    {
      c[i]=a[j];
      j++;
    }
    else
    {
      c[i]=b[k];
      k++;
    }
  }
  printf("Your Sorted array is : ");
  for(i=0;i<l1+l2;i++)     
  {
    printf("%d ",c[i]);
  }
  return 0; 
}
