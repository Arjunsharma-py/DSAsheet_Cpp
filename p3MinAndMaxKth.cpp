#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n, k;
    cin>>n;
    int *arr = new int[n]{0};
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cin>>k;
    sort(arr,arr+k);
    cout<< "Minimum value in array is :" << arr[k-1]; 
    return 0;
}