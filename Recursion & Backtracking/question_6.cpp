//
// Created by anish on 24-07-2022.
//
//write a program to find nth term of fibonnaci series
#include <iostream>
int f(int n)
{
if(n<=1)
{
    return n;
}
else
{
    return f(n-1)+f(n-2);
}
}

int main()
{
    std::cout<<f(5);
}