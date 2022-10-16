#include<stdio.h>
int main()
{
    int arr[100] , number , i , j , key;
    printf("Enter the size of the array : ");
    scanf("%d" , &number);
    printf("Enter the elements in the array : ");
    for(i=0 ; i<number ; i++)
    {
        scanf("%d" , &arr[i]);
    }
    for(i=0 ; i<number ; i++)
    {
        key = arr[i];
        j = i-1;
        while(j>=0 && key<arr[j])
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
                        5
       /* for(j=i+1 ; j<number ; j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }*/
    printf("Insertion  Sort : ");
    for(i=0 ; i<number ; i++)
    {
        printf("%d " , arr[i]);
    }
    printf("\n");
    return 0;
}