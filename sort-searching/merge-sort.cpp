#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int s, int e){

    vector<int> temp;
    int i=s;
    int m= (s+e)/2;
    int j= m+1;
    while(i<=m and j<=e){
      if(arr[i] <= arr[j]){
        temp.push_back(arr[i]);
        i++;
      }
      else{
        temp.push_back(arr[j]);
        j++;
      }
    }
    // copy rem elements from first array
    while(i<=m){
        temp.push_back(arr[i++]);
    }

    // or copy rem elements from second array
    while (j<=e){
        temp.push_back(arr[j++]);
    }
    int k=0;
    for(int i=s;i<=e;i++){
       arr[i] = temp[k++];
    }

    
}


void mergeSort(vector<int> &arr, int s, int e){
    if(s>=e){
        return;
    }
    int mid= (s+e)/2;
    mergeSort(arr, s,mid);
    mergeSort(arr, mid+1, e);
    return merge(arr, s, e);
}


int main(){
    vector<int> arr{10,5,2,0,7,6,4};
    int s = 0;
    int e = arr.size()-1;
    mergeSort(arr, s,e);
    for(auto x: arr){
        cout<<x<<" ";
    }
}
