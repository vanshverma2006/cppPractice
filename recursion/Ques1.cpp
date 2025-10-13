#include <iostream>
#include <vector>
class patterns{
    public:
    void printStar(int n){
        if(n==0) return;
        std::cout<<"*";
        return printStar(n-1);
    }
    void triangle(int n){
        if (n<=0) return;
        triangle(n-1);
        printStar(n);
        std::cout<<std::endl;
    }
    
    void invertedTriangle(int n){
        if (n<=0) return;
        printStar(n);
        std::cout<<std::endl;
        triangle(n-1);
    }

    void rectangle(int col,int rows){
        if (rows<=0) return;
        printStar(col);
        std::cout<<std::endl;
        rectangle(col,rows-1);

    }
    


};

class ques{
    public:
    void palindrome(int n){
        if(n==0) return;
        int p=p*10+n%10;
        palindrome(n/10);
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
    patterns p;


    return 0;
}