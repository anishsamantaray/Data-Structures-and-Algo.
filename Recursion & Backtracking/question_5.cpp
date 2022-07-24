//
// Created by anish on 23-07-2022.
//
// Checking if the word is a palindrome

#include <iostream>


bool reverse(int i,int n,int arr[])//string &s instead of arr and instead of n take it as s.size, remaining is same
{
    if(i>=n/2)
    {
        return true;
    }
    else
    {
        if(arr[i]!=arr[n-i-1])
        {
            return false;

        }
        return reverse(i+1,n,arr);

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
    std::cout << reverse(0,n,arr);

}