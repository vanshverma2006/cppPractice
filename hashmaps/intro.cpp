#include <iostream>
#include <unordered_map>
#include<map>
#include<vector>

int main(){
    // always in sorted order
    // std::map<std::string,int> m;
    // m["a"]=1;
    // m["b"]=2;
    // for(auto i:m){
    //     std::cout<<i.first<<" "<<i.second;
    // }
    // std::unordered_map<std::string,int> u;
    // u["a"]=1;
    // u["b"]=2;
    // for(auto i:u){
    //     std::cout<<i.first;
    // }
    std::vector<int> v={1,1,1,1,12,2,4,5,5,6,7,8};
    std::map<int,int> freq;
    for(auto i:v){
        freq[i]++;
    }
    for(auto i:freq){
        std::cout<<i.first<<" "<<i.second<<std::endl;
    }

    return 0;
}