//
// Created by anish on 23-07-2022.
// Printing Linearly from 1 to N using recursion
//
#include <iostream>


void number(int i,int n)
{
    if(i>n)
    {
        return;
    }
    else{
        std::cout<<i<< std::endl;
        number(i+1,n);
    }
}


int main() {

    number(1, 4);
}