#include<iostream>

int main()
{
    int arr[6][6];

    for(int i=0; i<6; i++) {
        for(int j=0; j<6; j++) {
            std::cin>>arr[i][j];
            while(arr[i][j] > 99 || arr[i][j] < 10) {
                std::cout<<arr[i][j]<<" ne e v interval 10-99 vuvedete nanovo"<<std::endl;
                std::cin>>arr[i][j];
            }
        }
    }

    int sum = 0;
    int bigSum = 0;

    for(int i=1; i<6; i+=2){
        for(int j=0; j<6; j++){
            sum+=arr[i][j];
        }
        std::cout<<sum<<std::endl;
        bigSum+=sum;
        sum=0;
    }

    std::cout<<bigSum;

    return 0;

}