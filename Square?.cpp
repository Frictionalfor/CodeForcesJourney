//Intuition:
/*The problem asks whether all four numbers in a set are equal. The solution simply compares each number with the next one in sequence.
If all are equal, it prints "YES"; otherwise, it prints "NO".*/

//Approach:
/*1. Read the number of test cases.
2. For each test case, read four integers into an array.
3. Compare the integers:
   - If all four integers are equal, print "YES".
   - Otherwise, print "NO".
*/   
#include <iostream>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while(testCases--){
        int arr[4];
        for(int i = 0; i < 4; i++){
            cin >> arr[i];
        }

        if(arr[0] == arr[1] && arr[1] == arr[2] && arr[2] == arr[3]){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}

/*Algorithm:
1. Start by reading the number of test cases.
2. For each test case:
   a. Initialize an array of size 4 to hold the integers.
   b. Use a loop to read four integers into the array.
   c. Compare the integers: if all four are equal, print "YES"; otherwise, print "NO".  
3. End the program after processing all test cases.
*/

//Time Complexity: O(1) for each test case, since we are only doing a fixed number of comparisons.
//Space Complexity: O(1) as we are using a fixed amount of space regardless of input size.
