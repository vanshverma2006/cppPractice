#include<iostream>
int partition(int arr[],int start,int end){
    int idx=start-1,pvt=arr[end];
    for(int i=start;i<end;i++){
        if(arr[i]<pvt){
            idx++;
            int temp=arr[i];
            arr[i]=arr[idx];
            arr[idx]=temp;
        }
    }
    idx++;
    int temp=arr[idx];
    arr[idx]=arr[end];
    arr[end]=temp;
    return idx;

}
void Qsort(int arr[],int start,int end){
    if(start<end){
        int pvtIdx=partition(arr,start,end);
        Qsort(arr,start,pvtIdx-1);
        Qsort(arr,pvtIdx+1,end);
    } 
}
int main(){
    int end=9;
    int* arr=new int[end+1];
    for(int i=0;i<=end;i++) std::cin>>arr[i];
    Qsort(arr,0,end);
    for(int i=0;i<=end;i++) std::cout<<arr[i]<<" ";
    delete[] arr;

    return 0;
}