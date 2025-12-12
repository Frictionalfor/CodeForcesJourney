//Intuition:
/*
    i) The function f(n) is defined as:
        - If n is even, f(n) = n / 2
        - If n is odd, f(n) = −(n + 1) / 2
    ii) This can be implemented using simple conditional checks and arithmetic operations.
*/
//Approach:
/*      i) Read the integer n.
        ii) Check if n is even or odd.
        iii) If n is even, compute f(n) = n / 2.
        iv) If n is odd, compute f(n) = −(n + 1) / 2.
        v) Print the result.
*/

#include <iostream>
using namespace std;

int main(){

    long long num;
    cin>>num;

    if(num % 2 == 0) cout<<num/2;
    else cout<<-(num/2 + 1);

    return 0;
}

/*Algorithm:-
    i) Read integer n.
    ii) If n is even, answer = n / 2.
    iii) If n is odd, answer = −(n + 1) / 2.
    iv) Print the answer.
*/

//Time Complexity: O(1) since the operations are constant time.
//Space Complexity: O(1) as no additional space is used that scales with input size.    
