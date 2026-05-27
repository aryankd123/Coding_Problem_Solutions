#include <bits/stdc++.h>
using namespace std;

long long mergeAndCount(vector<long long>& arr, vector<long long>& temp, long long left, long long right) {
    long long inv_count = 0;
    if (left < right) {
        long long mid = (left + right) / 2;

        inv_count += mergeAndCount(arr, temp, left, mid);  // Count inversions in the left half
        inv_count += mergeAndCount(arr, temp, mid + 1, right);  // Count inversions in the right half

        // Count inversions during the merge step
        inv_count += merge(arr, temp, left, mid, right);
    }
    return inv_count;
}

long long merge(vector<long long>& arr, vector<long long>& temp, long long left, long long mid, long long right) {
    long long i = left; // Starting index for left subarray
    long long j = mid + 1; // Starting index for right subarray
    long long k = left; // Starting index to be sorted
    long long inv_count = 0;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            inv_count += (mid - i + 1);  // All remaining elements in left subarray are greater than arr[j]
        }
    }

    // Copy the remaining elements of left subarray
    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    // Copy the remaining elements of right subarray
    while (j <= right) {
        temp[k++] = arr[j++];
    }

    // Copy the sorted subarray into the original array
    for (i = left; i <= right; i++) {
        arr[i] = temp[i];
    }

    return inv_count;
}

long long countInversions(vector<long long>& arr, long long n) {
    vector<long long> temp(n);
    return mergeAndCount(arr, temp, 0, n - 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        vector<long long> arr(n);

        for (long long i = 0; i < n; i++) {
            cin >> arr[i];
        }

        cout << countInversions(arr, n) << "\n";
    }

    return 0;
}