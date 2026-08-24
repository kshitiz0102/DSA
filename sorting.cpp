#include <bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n){
    for(int i = 0;i<=n-2;i++){
        int mini = i;
        for(int j = i;j<=n-1;j++){
            if(arr[j] < arr[mini]){
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
        
    }
}

// bubble sort
void bubble_sort(int arr[],int n){
    for(int i = n-1;i<=0;i--){
        for(int j = 0;j<=i-1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void insertion_sort(int arr[], int n ){
    for(int i = 0;i<=n-1;i++){
        int j = i;
        while(j > 0 && arr[j-1] > arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;

            j--;
        }
    }
}
void merge(vector<int> &arr ,int low, int mid, int high){
    int left = low;
    int right = mid + 1;
    while(left<=mid && right<=high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left<=mid){
         temp.push_back(arr[left]);
            left++;
    }

    while(right<=high){
         temp.push_back(arr[right]);
            right++;
    }

    for(int i = 0;i<=high;i++){
        arr[i] = temp[i - low];
    }
}

void ms(vector<int> &arr,int low ,int high){
    if(low == high) return;
    int mid = (low + high) / 2;
    ms(arr , low , mid);
    ms(arr , mid+1 , high);
    merge(arr , low , mid , high);
}
int main(){

    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
        selection_sort(arr,n);
        for(int i = 0;i<n;i++){
            cout << arr[i] <<" ";
        
    }cout<<" "<<endl;

    bubble_sort(arr,n);
        for(int i = 0;i<n;i++){
            cout << arr[i] <<" ";
        
    }cout<<" "<<endl;

    
    insertion_sort(arr,n);
        for(int i = 0;i<n;i++){
            cout << arr[i] <<" ";
        
    }
    return 0;
}