//
// Created by anish on 23-07-2022.
//
//find sum of n numbers using recursion
// Example of functional Recursion

#include <iostream>

int sum(int n)
{
    if(n==0)
    {
        return n;
    }
    else{
        return n + sum(n-1);
    }
}


int main() {

    std::cout<<sum(3);
    return 0;
}