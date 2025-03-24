// A2B:quickSort
// UNLICENSE (2025): <https://unlicense.org/>
#include <vector>
#include <algorithm>
using namespace std;

template<typename T>
int partition(vector<T>& vec, int low, int high) {
    T pivot = vec[high];
    int i = low - 1;

    for (int j = low; j < high; ++j) {
        if (vec[j] < pivot) {
            swap(vec[++i], vec[j]);
        }
    }
    swap(vec[i + 1], vec[high]);
    return i + 1;
}
template<typename T>
void quickSort(vector<T>& vec, int low, int high) {
    if (low < high) {
        int ition = partition(vec, low, high);
        quickSort(vec, low, ition - 1);
        quickSort(vec, ition + 1, high);
    }
}
//EOF//
/*
#####################################
#algorithm, 	stable, worst, 		asymptotic, 	best, 		memory:
Heap_Sort 	NO	O(n²)		O(n log n)	O(n log n)	O(1)
Merge_Sort	yes	O(n log n)	O(n log n)	O(n log n)	O(n)
Quick_Sort	NO	O(n²)		O(n log n)	O(n log n)	O(log n)
#####################################
*/
