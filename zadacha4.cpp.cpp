#include<iostream>

int main()
{
    int n(0);
    std::cin>>n;
    while (n<5 || n>105){
        std::cout<<"Vuvedete novo chislo N: ";
        std::cin>>n;
    }

    int arr[n][2];

    for(int i=0; i<n; i++) {
        for(int j=0; j<2; j++) {
            std::cin>>arr[i][j];
            while(arr[i][j] > 99 || arr[i][j] < 10) {
                std::cout<<arr[i][j]<<" ne e v interval 10-99 vuvedete nanovo"<<std::endl;
                std::cin>>arr[i][j];
            }
        }
    }


    for(int i=0; i<n; i++){
            std::cout<<arr[i][0]<<"/"<<arr[i][1]<<"=";
            std::cout<<(arr[i][0]*100)/arr[i][1]<<"%"<<std::endl;
    }

    return 0;

}