//
// Created by anish on 24-07-2022.
//
//Printing all the subsequences of an array using recursion
//SUBSEQUENCES: A contiguous/ non contiguous sequence which follows the order

#include <iostream>
#include <vector>
void PrintF(int ind,std::vector<int> &ds,int arr[],int n)
{
    if(ind==n)
    {
        for(auto it:ds)
        {
            std::cout<<it<<"";

        }
        std::cout<<std::endl;

        return;


    }
    ds.push_back(arr[ind]);
    PrintF(ind+1,ds,arr,n);//to add the element into the subsquence
    ds.pop_back();
    PrintF(ind+1,ds,arr,n);//to not add the element into the subsquence
}

int main()
{
    int arr[]={4,1,3};
    int n=3;
    std::vector<int> ds;
    PrintF(0,ds,arr,n);
}