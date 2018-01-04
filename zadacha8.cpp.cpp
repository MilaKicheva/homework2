#include<iostream>
#include<limits>

int fibonacci(int num)
{
 if(num == 0) return 0;
 if(num == 1) return 1;
 return fibonacci(num - 1) + fibonacci(num - 2);
}

int main()
{
    int num(0);
    std::cin>>num;
    while(num>40 || num<1) {
        std::cin>>num;
    }
    int fib = fibonacci(num);
    std::cout<<fib;

    return 0;

}