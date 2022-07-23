//
// Created by anish on 23-07-2022.
//
//reverse an array
//Leetcode easy
#include <iostream>


void reverse(int l,int r,int arr[])
{
    if(l>=r)
    {
        return;
    }
    else
    {
        std::swap(arr[l],arr[r]);
        reverse(l+1,r-1,arr);
    }
}

int main()
{

    int n;
    int arr[20];
    std::cin>>n;
    for (int i=0; i<n;i++)
    {
        std::cin>>arr[i];
    }
    reverse(0,n-1,arr);
    for (int i=0; i<n;i++)
    {
        std::cout<<arr[i];
    }
}