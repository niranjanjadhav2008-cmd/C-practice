#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int> array,int tar){
    int st = 0;
    int end = array.size()-1;
    int mid;
    while(st<=end){
        int mid = st+(end-st)/2;
        if(array[mid]<tar){
            st = mid+1;
        } else if(array[mid]>tar){
            end = mid-1;
        } else{
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {13,6,1,7,9,38};
    int target = 1;
    cout<<binarySearch(arr,target)<<endl;
    return 0;
} 
// -1 0 3 4 5 9 12