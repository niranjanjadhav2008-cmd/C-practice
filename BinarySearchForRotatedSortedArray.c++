#include<iostream>
#include<vector>
using namespace std;
int BinarySearch(vector<int> array,int target){
    int st = 0;
    int end = array.size()-1;
    int mid;
    while(st<=end){
        mid = st+(end-st)/2;
        if(array[mid] == target){
            cout<<mid;  
            break;
        }
        if(array[st]<=array[mid]){
            if(array[st]<=target && target <= array[mid] ){
                end = mid-1;
            } else{
                st = mid+1;
            }
        } else{
            if(array[mid]<=target && target<=array[end]){
                st = mid+1;
            } else{
                end = mid-1;
            }
        }
        
    }
    
}
int main(){
vector<int> array = {};
int target = 0;
cout<<BinarySearch(array,target);
return 0;
}