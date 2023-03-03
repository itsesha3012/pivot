#include<iostream>
#include<vector>
using namespace std;
int pivot(vector<int>arr){
    int s=0;
    int e=arr.size()-1;
    int mid=(s+e)/2;
    while(s<e){
        if(arr[mid]>arr[mid+1]){
            return mid;
            }
        if(arr[mid-1]>arr[mid]){
            return mid-1;
        }

    }
    
}

int main(){
    vector<int>arr{4,5,6,1,2};
 int  element=  pivot(arr);
 int piv=arr[element];
  cout<<"pivot index is"<< element << "pivot is"<< piv <<endl;

}




#include<iostream>
// #include<vector>
using namespace std;
 int sqrroot(int n)
{
    int s=0;
    int size;
    int e=size-1;
    int target=n;
    int mid=(s+e)/2;
    int ans=-1;

    while(s<=e){
     
      if(mid*mid== target){
        return mid;
      }
       if(mid*mid>target){
        e=mid-1;
      }
    //   if(mid*mid<target){
        else{     
        ans=mid;
        s=mid+1;
      }
    mid=(s+e)/2;
 }
}
int main(){
 int n;
cout<<"enter the numnber";
cin>>n;
int ans = sqrroot(n);
cout<<"square root of number is "<< ans <<endl;
                                                          square root 
}
