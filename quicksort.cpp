#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high) {

    int pivot = arr[low];

    int i = low;
    int j = high;

    while (i < j) {

        while (arr[i] <= pivot && i <= high - 1) {
            i++;
        }

        while (arr[j] > pivot && j >= low + 1) {
            j--;
        }

        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }

    // Put pivot in its correct position
    swap(arr[low], arr[j]);

    return j;
}

void qs(int arr[], int low, int high) {

    if (low < high) {

        int Pindex = partition(arr, low, high);

        qs(arr, low, Pindex - 1);
        qs(arr, Pindex + 1, high);
    }
}

int main() {

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    qs(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}