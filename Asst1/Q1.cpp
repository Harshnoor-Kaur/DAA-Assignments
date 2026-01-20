#include<iostream>
using namespace std;
int main(){  
int arr[]={2,5,8,12,16,23,38,56,72,91};
int low=0,high=9,mid,key=23;
while (low<=high){
  mid=(low+high)/2;
  if (arr[mid]==key){
    cout<<"Element found at index"<<mid<<endl;
    break;
  }
  else if (key>arr[mid])
    low=mid+1;
  else
    high=mid-1;
}
}
