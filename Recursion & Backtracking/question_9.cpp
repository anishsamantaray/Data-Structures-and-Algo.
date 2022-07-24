//
// Created by anish on 24-07-2022.
//
//Given an integer n, return true if it is a power of two. Otherwise, return false.//Leetcode Easy
//An integer n is a power of two, if there exists an integer x such that n == 2^x.
#include <iostream>

bool isPowerOfTwo(int n) {
    if(n==1 || n==2)
        return true;
    if(n%2!=0 || n==0)
        return false;
    else
        isPowerOfTwo(n/2);
}

int main(){
    int n;
    std::cin>>n;
    std::cout<<isPowerOfTwo(n);
}

//example if the number is 32 , it does not fall into any condition and then atlast divoides itself by 2 recursively, atlast it is 2 so returns true.

