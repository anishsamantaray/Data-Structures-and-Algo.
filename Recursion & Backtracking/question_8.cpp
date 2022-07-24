//
// Created by anish on 24-07-2022.
// Find all the subsequences of a array whose sum is k .
#include <iostream>
#include <vector>
void PrintF(int ind,std::vector<int> &ds,int s,int sum,int arr[],int n)
{
    if(ind==n)
    {
        if(s==sum)
        {
            for(auto it:ds)
            {
                std::cout<<it<<" ";

            }
            std::cout<<std::endl;


        }
        return;



    }
    ds.push_back(arr[ind]);
    s+=arr[ind];
    PrintF(ind+1,ds,s,sum,arr,n);//to add the element into the subsquence
    ds.pop_back();
    s-=arr[ind];
    PrintF(ind+1,ds,s,sum,arr,n);//to not add the element into the subsquence
}

int main()
{
    int sum=4;
    int arr[]={4,1,3};
    int n=3;
    std::vector<int> ds;
    PrintF(0,ds,0,sum,arr,n);
}