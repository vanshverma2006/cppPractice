#include <iostream>
#include <vector>
class recursion{
    public:
    void printStar(int n){
        if(n==0) return;
        std::cout<<"*";
        return printStar(n-1);
    }
    void printPattern(int n,int rows){
        if (rows<=0) return;
        printStar(n);
        std::cout<<std::endl;
        printPattern(n,rows-1);

    }
};

std::vector<std::vector<int>> display(std::vector<std::vector<int>> v) {
    int n = v.size();
    std::vector<std::vector<int>> result(n, std::vector<int>(n, 0));
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int r = 0;
            for(int k=0; k<n; k++){
                r += v[i][k] * v[k][j]; 
            }
            result[i][j] = r;
        }
    } 
    return result;
}

int sum(int n){
    if (n==0) return 0;
    return n%10 + sum(n/10);
}
void pr(int arr[],int n){

    if (n<=0) return ;

    pr(arr,n-1);
    
}

int arrSum(int arr[],int n){
    int sum=arr[n-1];
    if(n<=0) return 0;
    return sum+arrSum(arr,n-1);
}
int main() {
    recursion r;
    r.printPattern(5,5);

    return 0;
}