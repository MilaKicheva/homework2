#include<iostream>
#include<limits>

int main()
{
    int num(0), sum(0), digits(0);
    std::cin>>num;
    while(num>22222 || num<111) {
        std::cin>>num;
    }
    digits = num;
    while(digits>0) {
        sum+=digits%10;
        digits/=10;
    }

    if(num%sum==0) 
        std::cout<<"TRUE!";
    else
        std::cout<<"FALSE!";

    return 0;

}