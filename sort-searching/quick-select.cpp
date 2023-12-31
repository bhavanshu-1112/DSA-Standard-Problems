#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int s, int e){
    int pivot = arr[e];

    int i = s-1;
    for(int j=0;j<e;j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
        
    }
    swap(arr[i+1], arr[e]);
    return i+1;
    
}
int quick_select(vector<int> arr, int s, int e, int k){
    
    int p = partition(arr, s, e);
    if(k==p){
      return arr[p];
    }
    else if(k<p){
      return quick_select(arr, s,p-1,k);
    }else{
      return quick_select(arr, p+1, e,k);
    }
}

int main(){
  vector<int> arr{10,5,2,0,7,6,4};
  int n = arr.size();
  int k=4;
  
  cout<<quick_select(arr, 0,n-1, k);


//   for(auto x:arr){
//     cout<<x<<" ";
//   }
//   cout<<ans;
}