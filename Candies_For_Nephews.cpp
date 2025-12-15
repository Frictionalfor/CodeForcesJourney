//Intuitions:
// 1. We need to find the maximum number of candies that can be distributed to nephews
// 2. We can use a greedy approach to maximize the candies given to each nephew
// 3. We will sort the candies and distribute them in a way that maximizes the total candies given
// 4. The key is to ensure that we do not exceed the total number of candies available

//Approach:
// 1. Sort the candies in descending order  
// 2. Distribute candies to nephews starting from the largest available candy
// 3. Keep track of the total candies distributed and the number of nephews
// 4. Stop when we can no longer distribute candies without exceeding the total available

#include <iostream>
using namespace std;

int main(){
    int testCase;

    cin>> testCase;
    while(testCase--){
        int n;
        cin >> n;
        
        cout<<(3 - n % 3) % 3 << "\n";
    }
    return 0;
}

/*Algorithm:
1. Read the number of test cases.
2. For each test case, read the number of nephews (n).
3. Calculate the number of candies needed to make the total candies divisible by 3.
4. Output the result for each test case.
Time Complexity: O(1) for each test case since we are only performing a constant number
   of operations.
Space Complexity: O(1) as we are using a constant amount of space.
This solution efficiently calculates the number of candies needed to ensure that the total
candies distributed is divisible by 3, which is the requirement for the problem.    
*/
