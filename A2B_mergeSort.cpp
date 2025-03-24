// A2B:mergeSort
// UNLICENSE (2025): <https://unlicense.org/>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
void merge(vector<T>& vec, unsigned int left, unsigned int mid, unsigned int right){
    vector<T> temp;
    unsigned int i = left;
    unsigned int j = mid + 1;

    while (i <= mid && j <= right) {
        if (vec[i] <= vec[j]) {
            temp.push_back(vec[i++]);
        }else {
            temp.push_back(vec[j++]);
        }
    }

    while (i <= mid) temp.push_back(vec[i++]);
    while (j <= right) temp.push_back(vec[j++]);

    for (unsigned int k = 0; k < temp.size(); ++k){
        vec[left + k] = temp[k];
    }
}

template<typename T>
void mergeSort(vector<T>& vec, unsigned int left, unsigned int right) {
    if (left >= right) return;
    unsigned int mid = left + (right - left) / 2;
    mergeSort<T>(vec, left, mid);
    mergeSort<T>(vec, mid + 1, right);
    merge<T>(vec, left, mid, right);
}
//EOF//
/*
#####################################
#algorithm, 	stable, worst, 		asymptotic, 	best, 		memory:
Heap_Sort	NO	O(n²)		O(n log n)	O(n log n)	O(1)
Merge_Sort	yes	O(n log n)	O(n log n)	O(n log n)	O(n)
Quick_Sort	NO	O(n²)		O(n log n)	O(n log n)	O(log n)
#####################################
*/
