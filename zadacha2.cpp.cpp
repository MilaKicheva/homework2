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

    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            if (arr[i][j]%2!=0) {
                sum+=arr[i][j];
                std::cout<<arr[i][j];
            }
            else {
                std::cout<<" ";
            }
        }
        std::cout<<" ,sum is: "<<sum<<std::endl;
        bigSum+=sum;
        sum=0;
    }

    std::cout<<bigSum;

    return 0;

}