// You are given two integer arrays nums1 and nums2, sorted in non-decreasing order,
// and two integers m and n, representing the number of elements in nums1 and nums2 respectively.
// Merge nums1 and nums2 into a single array sorted in non-decreasing order.

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){

    int max = 0;
    int temp = 0;


    for (int i = 0; i < n; i++) {
        nums1[i + m] = nums2[i];
    }

    for (int i = 0; i < (m+n)-1; i++) {
        int min_idx = i;
        for (int j = i+1; j < (m+n); j++) {
            if (nums1[j] < nums1[min_idx])
            min_idx = j;
        }
        // Swap arr[min_idx] and arr[i]
        int temp = nums1[min_idx];
        nums1[min_idx] = nums1[i];
        nums1[i] = temp;
    }

}
