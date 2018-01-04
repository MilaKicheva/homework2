#include<iostream>

int main()
{
    int found(0), num(0);

    while(found<4) {
        if(num%2 == 1 && num%3 == 2 && num%4 == 3 && num%5 == 4 && num%6 == 5 && num%7 ==6 && num%8 == 7 
            && num%9 == 8){
            std::cout<<num<<" ";
            found++;
            }
        num++;
    }

    return 0;

}

