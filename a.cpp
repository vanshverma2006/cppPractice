#include<iostream>
#include<vector>

// bool checkSort(std::vector<int> &v,int n){
//     if(n==0) return;
//     bool ans=checkSort(v,n)>=checkSort(v,n-1);
//     return checkSort(v,n-1);
    
// }
class Searching{
    public:
    std::vector<int> v;
    int target;
    // Searching(std::vector<int> v={0},int target) : v(v),target(target){}
    void linearSearch(){
        for(int i=0;i<v.size();i++){
            if(v[i]==target){std::cout<<"found at index : "<<i<<std::endl;
                break;    
            }
            if(i==v.size()-1&&i!=target) std::cout<<"element not present";
        }

    } 
    void binarySearch(){
        int start=0,end=v.size(),mid=(start+end)/2;
        while(start<end){
            if(v[mid]==target){
                std::cout<<"found at index : "<<mid<<std::endl;
                break;
            }
            if(v[mid]>target){

                end=mid;
                mid=(start+end)/2;

            }
            if(v[mid]<target){
                start=mid;
                
                mid=(start+end)/2;
                
            }

        }
    }
};
int partition(std::vector<int> &v, int start, int end) {
    int pivot = v[end];       
    int idx = start - 1;      

    for (int i = start; i < end; i++) {
        if (v[i] < pivot) {
            idx++;
            std::swap(v[idx], v[i]);
        }
    }

    std::swap(v[idx + 1], v[end]); 
    return idx + 1;
}

void Quick(std::vector<int> &v, int start, int end) {
    if (start < end) {
        int pvtIdx = partition(v, start, end);
        Quick(v, start, pvtIdx - 1);
        Quick(v, pvtIdx + 1, end);
    }
}

int main(){
    std::vector<int> v={5,4,3,2,1};
    // for(int i=0;i<v.size()-1;i++){
    //     for(int j=i+1;j<v.size();j++){
    //         if(v[i]>v[j]){
    //             int temp=v[i];
    //             v[i]=v[j];
    //             v[j]=temp;
    //         }
    //     }
    // }
    Quick(v,0,4);
    for(int i=0;i<v.size();i++){
        std::cout<<v[i]<<" ";
    }

    return 0;
}