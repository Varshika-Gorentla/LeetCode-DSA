#include <iostream>
using namespace std;

void selection_sort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        int mmi = i;

        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[mmi]) {
                mmi = j;
            }
        }

        swap(arr[i], arr[mmi]);
    }
}