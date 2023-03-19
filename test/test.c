// Online C compiler to run C program online
#include <stdio.h>
#include <iostream>

int main() {
    int t = 0;
    int x;
        switch(t)
        {
            case 0:
                x=1;
                break;
            case 2:
                x=2;
            case 1:
                x=x+1;
                break;
            default:
                x=t+1;
        }
    std::cout<< x;
}