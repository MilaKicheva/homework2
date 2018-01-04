#include<iostream>


int main()
{
    int num(0), digit(0);
    bool found = false;
    int max = std::numeric_limits<int>::max();

    for(int i=18; i<max; i+=18){
        num = i;
        digit = num%10;
        while(num>0) {
            if(digit == num%10){
                num/=10;
                found = true;
            }
            else {
                found = false;
                break;
            }
        }
            if (found) {
                std::cout<<i<<"/18="<<i/18<<std::endl;
                return 0;
            }
        }


    return 0;

}
