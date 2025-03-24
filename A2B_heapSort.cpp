// A2B:heapSort
// UNLICENSE (2025): <https://unlicense.org/>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
void heapify(std::vector<T>& vec,  int n,  int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < n && vec[left] > vec[largest]) {
        largest = left;
    }
    if (right < n && vec[right] > vec[largest]) {
        largest = right;
    }
    if (largest != i) {
        std::swap(vec[i], vec[largest]);
        heapify(vec, n, largest);
    }
}

template <typename T>
void heapSort(std::vector<T>& vec) {
    int n = vec.size();
    for ( int i = n / 2 - 1; i >= 0; --i) {
        heapify(vec, n, i);
    }
    for ( int i = n - 1; i > 0; --i) {
        std::swap(vec[0], vec[i]);
        heapify(vec, i, 0);
    }
}
//EOF//
/*
#####################################
#algorithm, 	stable, worst, 		asymptotic, 	best, 		memory:
Heap_Sort	  NO	O(n²)		O(n log n)	O(n log n)	O(1)
Merge_Sort	yes	O(n log n)	O(n log n)	O(n log n)	O(n)
Quick_Sort	NO	O(n²)		O(n log n)	O(n log n)	O(log n)
#####################################
*/
