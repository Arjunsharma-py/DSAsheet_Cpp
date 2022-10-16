#include<iostream>

using namespace std;


int main()
{
    int *arr ,n, low=0, high, mid=0, temp;
    cin>>n;
    arr = new int[n]{0};
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    high = n-1;
    while(high>mid)
    {
        
        if(arr[mid]==0)
        {
            temp = arr[mid];
            arr[mid] = arr[low];
            arr[low] = temp;
            low++;
            mid++;
        }
        else if(arr[mid]==1)
           mid++;
        else if(arr[mid]==2)
        {
            temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}