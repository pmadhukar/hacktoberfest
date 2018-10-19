#include<stdio.h>

void main()
{
    int size,i,j,temp;

    printf("Enter the size of the array =");
    scanf("%d",&size);

    int arr[size],*ptr=arr;

    printf("\nEnter the elements of the array= ");

    for(i=0;i<size;i++)
        scanf("%d",ptr+i);


    j=size-1;

        for(i=0;i<size/2;i++)
        {
            temp=*(ptr+i);
            *(ptr+i)=*(ptr+j);
            *(ptr+j)=temp;
            j--;
        }

     printf("\n\n The reversed array is----->\n \t");
    for(i=0;i<size;i++)
    {
        printf("%d \t",*(ptr+i));
    }




}
