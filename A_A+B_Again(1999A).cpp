//Intuition:
/*
    i) Each input number n is a two-digit positive integer (from 10 to 99). 
        To compute the sum of its digits:
                a) The tens digit is obtained by integer division: n / 10
                b) The units digit is obtained by remainder: n % 10
    ii) Adding them gives the digit sum. This is a straightforward use of basic arithmetic operations.
*/
//Approach:
/*      i) Read the integer testCase — the number of test cases.
        ii) For each test case:
        iii) Read the two-digit integer num.
        iv) Print this num / 10 + num % 10.
*/

#include <iostream>
using namespace std;

int main(){

    int testCase;
    cin>>testCase;

    while (testCase--){
        int num;
        cin>>num;

        int digit1 = num % 10;
        int digit2 = num / 10;
        cout<<digit1 + digit2<<endl;
    }
    
    return 0;
}

/*Algorithm:-
    Read integer num.
    Let digit1 = num / 10 (integer division) → first digit.
    Let digit2 = num % 10 → second digit.
    Output digit1 + digit2.
*/

//Time Complexity: O(1) for each test case, since the operations are constant time.
//Space Complexity: O(1) as no additional space is used that scales with input size