#include<iostream>
#include<vector>
int pivot(std::vector<int> &v,int start,int end){
    int idx=start-1,pvt=v[end];
    for(int i=start;i<end;i++){
        if(v[i]<pvt){
            idx++;
            int temp=v[idx];
            v[idx]=v[i];
            v[i]=temp;
        }
    }
    idx++;
    int temp=v[idx];
    v[idx]=v[end];
    v[end]=temp;

    return idx;
}
void quickSort(std::vector<int> &v,int start,int end){
    if(start<end){
        int pivotIndex= pivot(v,start,end);
        quickSort(v,start,pivotIndex-1);
        quickSort(v,pivotIndex+1,end);
    }
}
int main(){
    // std::vector<int> v={2,4,1,3,5};
    // for(auto i:v){
        
    //     std::cout<<i<<" ";
    // }
    // std::cout<<std::endl;
    // quickSort(v,0,4);
    // for(auto i:v){
    //     std::cout<<i<<" ";
    // }
    int* n=new int;
    std::cin>>*n;
    int* arr=new int[*n];
    for(int i=0;i<*n;i++) std::cin>>arr[i];
    for(int i=0;i<*n;i++) std::cout<<arr[i]<<" ";
    delete n;
    delete[] arr;




    return 0;
}