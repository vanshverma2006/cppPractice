#include<iostream>
int numCount(int n){
    int copy=n;
    int totalNum=0;
    while (n>0)
    {
        copy%=10; 
        totalNum*=10;
        totalNum+=copy;
        n/=10;
        copy=n;
    }
    return totalNum;

}

int sum(int n){
    int total=0;
    for (int i=1;i<=n;i++){
        if (i%2==0){
            total-=i;
        }else{
            total+=i;
        }
    }
    return total;
}

int factorial(int n){
    int total=1;
    for (int i=1;i<=n;i++){
        total*=i;
    }
    return total;
}
void input(int arr[],int n){
    for (int i=0;i<n;i++){
        std::cout<<"enter value of arr["<<i<<"]";
        std::cin>>arr[i];
    }
}
void printArray(int arr[],int n){
    for (int i=0;i<n;i++){
        std::cout<<arr[i]<<" "<<std::endl;
    }
}
void sort (int arr[],int n){
    input(arr,n);
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if (arr[i]>arr[j]){
                int temp;
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]= temp;
            }
        }
    }
    printArray(arr,n);
}

void sumArray(int arr[],int n,int sum){
     input(arr,n);
    for (int i=0;i<n-2;i++){
        for (int j=i+1;j<n-1;j++){
            for (int k=j+1;k<n;k++){
            if (arr[i]+arr[j]+arr[k]==sum){
                std::cout<<"arr["<<i<<"] , arr["<<j<<"] , arr["<<k<<"]"<<std::endl;
            }
            }
        }
    }
}

void pre(int arr[],int n){
    input(arr,n);
    for (int i=0;i<n;i++){
        if (i>0){
            arr[i]+=arr[i-1];
        }
    }
    printArray(arr,n);
}

int main (){
    int n;
    std::cout<<"enter a num : ";
    std::cin>>n;
    // // std::cout<<"num of digits in "<<n<<"is"<<numCount(n);
    // // std::cout<<"hello";
    // // std::cout<<"hello";
    // std::cout<<factorial(n);
    int arr[n];
    pre(arr,n);




    return 0;
}