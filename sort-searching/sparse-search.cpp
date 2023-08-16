#include<bits/stdc++.h>
using namespace std;

int sparse_search(string arr[], int n, string key){
        int s = 0;
        int e = n-1;
        while(s<=e){
            int mid = (s+e)/2;
            int mid_left = mid-1;
            int mid_right = mid+1;
            if(arr[mid]==""){
                //update or mid to a point nearest to  non empty string
                while(1){
                    if(mid_left < s and mid_right > e){
                        return -1;
                    }
                    else if(mid_right <= e and arr[mid_right]!=""){
                        mid = mid_right;
                        break;
                    }
                    else if(mid_left >= s and arr[mid_left]!=""){
                        mid = mid_left;
                        break;
                    }
                    mid_left--;
                    mid_right++;
                }
            }else if(arr[mid]==key){
                return mid;
            } else if(arr[mid] > key){
                e = mid - 1;
            }else{
                s = mid+1;
            }
        }
        return -1;
}
int main(){
    string arr[] = {"", "bat", "", "", "cat", "cog", "", "", "dog", "", "", "elephant"};
    int n = 12;
    string key;
    cin>>key;
    cout<<sparse_search(arr,n, key);
}