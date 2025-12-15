//Approach:
/*Iterate through the array to find the indices of the minimum and maximum 
elements.
*/
//Intuition:
/*
    i) The problem requires identifying the positions of the smallest and largest
    elements in an array.
    ii) By iterating through the array once, we can keep track of the indices of
    the minimum and maximum elements efficiently.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int minIdx = 0, maxIdx = 0;
        for (int i = 1; i < n; i++) {
            if (a[i] < a[minIdx]) minIdx = i;
            if (a[i] > a[maxIdx]) maxIdx = i;
        }

        cout << minIdx + 1 << " " << maxIdx + 1 << "\n";
    }

    return 0;
}


/*Algorithm:-
    i) Read integer t for number of test cases.
    ii) For each test case:
        a) Read integer n for size of array.
        b) Read array elements.
        c) Initialize minIdx and maxIdx to 0.
        d) Loop through the array from index 1 to n-1:
            - If current element is less than element at minIdx, update minIdx.
            - If current element is greater than element at maxIdx, update maxIdx.
        e) Print minIdx + 1 and maxIdx + 1 (1-based indexing).
*/

//Time Complexity: O(n) for each test case, where n is the size of the array.
//Space Complexity: O(n) for storing the array elements.
