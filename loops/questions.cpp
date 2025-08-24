#include<iostream>
using namespace std;
namespace a{
    int value = 10;
}

namespace info {
    string name = "c++";
}


int main(){
    using namespace info ;
    cout<<name<<endl;



     // namespace info 
    
    /*
    1. counting number of a given digit 
    */
        // int num;
        // std::cout<<"enter a num :: ";
        // std::cin>>num;
        // int copyOfNum=num,totalNum=0;
        // while(copyOfNum>0){
        //         totalNum++;
        //         copyOfNum/=10;
        // }
        // std::cout<<"you entered :: "<<num<<std::endl<<"number of digits in it :: "<<totalNum;
    /*
    2.sum of digits of a given number
    */
        // int num ;
        // std::cout<<"enter a num :: ";
        // std::cin>>num;
        // int copyOfNum = num ,sumOfDigits = 0 ;
        // while(copyOfNum>0){
        //     sumOfDigits+=copyOfNum%10;
        //     copyOfNum/=10;
        // }
        // std::cout << "you entered :: "<<num<<std::endl<<"sum is :: "<<sumOfDigits;

    /*
    3. revrse digits of a num 
    */
        int num ;
        std::cout << "enter a num :: ";
        std::cin >> num ;
        int lastDigit = 0,rev=0 ;
        while(num>0){
            lastDigit=num%10 ;
            rev=rev*10+lastDigit;
            num/=10;
        }
        std::cout<<"reversed num :: "<<rev;


    return 0;
}