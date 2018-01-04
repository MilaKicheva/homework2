#include<iostream>

int main()
{
    int num(0), k(0);

    std::cin>>num;
    std::cin>>k;

    while(num>1000000 || num<1000) {
        std::cout<<"Vuvedete novo chislo: ";
        std::cin>>num;
    }


    int kNow(0);
    bool zero = false;

    while (num > 0) {
        if(num%2==0) {

        }

           else if(kNow >= k)
                zero = true;
            kNow=0;
        }
        num/=2;
    }

    if(zero)
    std::cout << '\n'<<"Ima suotvetstvasht broi posledovatelni nuli";

    else
    std::cout << '\n'<<"Nqma suotvetstvasht broi posledovatelni nuli";

    return 0;

}
