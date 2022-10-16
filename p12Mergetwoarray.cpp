#include <iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[4]={1, 3, 5, 7}, arr2[5]={0, 2, 6, 8, 9};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr2[i] < arr1[j])
                swap(arr2[i], arr1[j]);
            if (arr2[i] > arr2[i+1] && i != 4)
                swap(arr2[i], arr2[i+1]);
        }
    }
    

    for (int i=0;i<4;i++)
        cout<<arr1[i];

    for (int j=0;j<5;j++)
        cout<<arr2[j];
}