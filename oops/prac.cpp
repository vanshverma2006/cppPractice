#include<iostream>
void binarySearch(int arr[], int start, int end, int target){
    if(start > end){ std::cout<<"Not found"; return;}
    int mid = (start + end) / 2;
    if(arr[mid] == target){ std::cout<<"found at index :"<< mid; return;}
    if(arr[mid] > target) binarySearch(arr, start, mid - 1, target);
    if(arr[mid] < target) binarySearch(arr, mid + 1, end, target);

}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n = 6;
    binarySearch(arr, 0, n-1, 5);
    return 0;
}