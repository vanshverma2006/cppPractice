#include<iostream>
int maze(int n,int m){
    if (n==1||m==1) return 1;
    return maze(n-1,m)+maze(n,m-1);
}
void pIp(int n){
    if (n==0) return;
    std::cout<<"pre "<<n<<std::endl;
    pIp(n-1);
    std::cout<<"in "<<n<<std::endl;
    pIp(n-1);
    std::cout<<"post "<<n<<std::endl;
    pIp(n-1);
}
int main(){
    pIp(2);
    return 0;
}
