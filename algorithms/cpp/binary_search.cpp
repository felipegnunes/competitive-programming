/*
Outstanding reference: https://zhu45.org/posts/2018/Jan/12/how-to-write-binary-search-correctly/
*/

#include <stdio.h>

// 1#: A[low] < A[i] < A[high]

// 2#: A[low] <= A[i] < A[high]
int binary_search_2(int A[], int n, int x){
    if (n == 0) return -1;

    int low = 0, high = n;
    while (low < high){
        int mid = low + (high - low)/2;

        if (A[mid] == x)
            return mid;
        if (A[mid] < x)
            low = mid + 1;
        else
            high = mid;
    }

    return -1;
}

// 3#: A[low] < A[i] <= A[high]

// 4#: A[low] <= A[i] <= A[high]
int binary_search_4(int A[], int n, int x){
    if (n == 0) return -1;

    int low = 0, high = n - 1;
    while (low <= high){
        int mid = low + (high - low)/2;

        if (A[mid] == x)
            return mid;
        if (A[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

// Find first occurrence
int first_occurrence(int A[], int n, int x){
    int low = 0, high = n - 1;

    while (low < high){
        int mid = low + (high - low)/2;

        if (A[mid] < x)
            low = mid + 1;
        else // A[mid] >= x
            high = mid;
    }

    if (A[low] == x)
        return low;
    
    return -1;
}

// Find last occurrence
int last_occurrence(int A[], int n, int x){ // Endless loop
    int low = 0, high = n - 1;

    while (low < high){
        int mid = low + (high - low)/2;

        if (A[mid] < x)
            low = mid + 1;
        else if (A[mid] > x)
            high = mid - 1;
        else
            low = mid;
    }

    if (A[high] == x)
        return high;
    
    return -1;
}

int main(int argc, char const *argv[]){
    int x;
    int array[] = {4, 11, 17, 17, 17, 23, 31, 31, 33, 41};
    
    scanf("%d", &x);
    printf("Element found at index %d\n", last_occurrence(array, 10, x));
    return 0;
}