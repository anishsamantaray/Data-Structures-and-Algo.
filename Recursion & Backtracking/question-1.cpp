//
// Created by anish on 23-07-2022.
//
// Printing name n times using recursion
#include <iostream>


void name(int i,int n)
{
    if(i>n)
    {
        return;
    }
    else{
        std::cout<<"anish"<< std::endl;
        name(i+1,n);
    }
}


int main() {

    name(1, 4);
}