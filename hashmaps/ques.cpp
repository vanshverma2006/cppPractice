#include<iostream>
#include<unordered_map>
#include<map>
#include<vector>
// 1️⃣ Count Frequency of Numbers
// Problem: Given an array of integers, count the frequency of each number and print it.
void CountFreq(std::vector<int> &v){
    std::unordered_map<int,int> k;
    for(auto i: v){
        k[i]++;
    }
    for(auto i:k){
        std::cout<<i.first<<" --> "<<i.second<<std::endl;
    }
}
// 2️⃣ Count Frequency of Characters
// Problem: Given a string, count how many times each character appears.
void strFreq(std::string s){
    std::unordered_map<char,int> f;

    for(char i:s){
        f[i]++;
    }
    for(auto i:f){
        std::cout<<i.first<<" --> "<<i.second<<std::endl;
    }
}
// 3️⃣ First Unique Character
// Problem: Find the first non-repeating character in a string.
void uniqueChar(std::string s){
    std::unordered_map<char,int> f;
    for(char i:s){
        f[i]++;
    }
    // iterate over string again to get the first element 
    for(auto i:s){
        if (f[i]==1){
            std::cout<<i;
            break;
        }
    }
}
// 4️⃣ Two Sum Problem
// Problem: Given an array and a target, check if there exist two numbers whose sum equals the target.
void twoSum(std::vector<int> &v,int target){
    std::vector<int> result;
    std::unordered_map<int,int> u;
    for(int i=0;i<v.size();i++){
        u[i]=v[i];
    }
    for(int i=0;i<v.size();i++){
        int need = target - v[i];
        if(u.find(need)!=u.end()){
            result.push_back(v[i]);
            result.push_back(need);
            break;
        }
    }
    for(int i=0;i<result.size();i++){
        std::cout << result[i] << " ";
    }
}

// 5 three sum
void threeSum(std::vector<int> &v,int target){
    std::unordered_map<int,int> u;
    std::vector<int> result;
    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v.size()-1;j++){
            int need = target-v[i]-v[j];
            u[i]=v[i];
            if(u.find(need)!=u.end()){
                result.push_back(v[i]);
                result.push_back(v[j]);
                result.push_back(need);
            }
        }
    }
    for(int i=0;i<result.size();i++){
        std::cout<<result[i]<<" ";
    }
}


int main(){
    std::vector<int> v={1,2,3,4,5};
    // CountFreq(v);
    // std::string s="hello";
    // strFreq(s);
    // uniqueChar(s);
    // twoSum(v,6);
    threeSum(v,6);

    return 0;
}