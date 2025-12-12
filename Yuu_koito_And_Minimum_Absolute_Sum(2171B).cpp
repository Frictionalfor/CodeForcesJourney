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