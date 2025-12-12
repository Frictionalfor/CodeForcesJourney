//Intuition:
/*
    i) We need to replace all -1 values in the array to minimize the absolute difference between the first and last elements.
    ii) The optimal strategy is to replace -1 values at the boundaries with the value of the opposite boundary or 0 if both are -1.
    iii) All other -1 values can be replaced with 0 to minimize their impact on the absolute difference.
*/
//Approach:
/*      i) Read the integer testCase — the number of test cases.
        ii) For each test case:
        iii) Read the integer numberOfElements — the size of the array.
        iv) Read the array elements.
        v) Handle -1 values at the boundaries:
            - If both the first and last elements are -1, set them to 0.
            - If only the first element is -1, set it to the value of the last element.
            - If only the last element is -1, set it to the value of the first element.
        vi) Replace all other -1 values in the array with 0.
        vii) Calculate the absolute difference between the first and last elements.
        viii) Print the absolute difference and the modified array.
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int testCase;
    cin >> testCase;

    while(testCase--){
        int numberOfElements;
        cin >> numberOfElements;

        long long arr[numberOfElements];
        for(int i = 0; i < numberOfElements; i++){
            cin >> arr[i];
        }

        if(arr[0] == -1 && arr[numberOfElements-1] == -1){
            arr[0] = 0;
            arr[numberOfElements-1] = 0;
        }
        else if(arr[0] == -1){
            arr[0] = arr[numberOfElements-1];
        }
        else if(arr[numberOfElements-1] == -1){
            arr[numberOfElements-1] = arr[0];
        }

        for(int i = 1; i < numberOfElements - 1; i++){
            if(arr[i] == -1){
                arr[i] = 0;
            }
        }

        long long answer = llabs(arr[numberOfElements-1] - arr[0]);
        cout << answer << "\n";

        for(int i = 0; i < numberOfElements; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}


/*Algorithm:-
1. Read the number of test cases.
2. For each test case, read the number of elements and the array.
3. Handle the -1 values at the boundaries:
    - If both the first and last elements are -1, set them to 0.
    - If only the first element is -1, set it to the value of the last element.
    - If only the last element is -1, set it to the value of the first element.
4. Replace all other -1 values in the array with 0.
5. Calculate the absolute difference between the first and last elements.
6. Print the absolute difference and the modified array.    
*/

//Time Complexity: O(n) for each test case, where n is the number of elements in the array, since we need to iterate through the array multiple times.
//Space Complexity: O(1) as we are modifying the array in place and not using any additional space that scales with input size.