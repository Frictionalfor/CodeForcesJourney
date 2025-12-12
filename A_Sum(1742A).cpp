//Intuition:
/*
    i) We need to determine if any two of the three given integers sum up to the third integer.
    ii) This can be checked using simple arithmetic comparisons.
*/
//Approach:
/*      i) Read the integer testCase — the number of test cases.
        ii) For each test case:
        iii) Read the three integers a, b, and c.
        iv) Check the three possible sums:
            - If a + b == c
            - If b + c == a
            - If c + a == b
        v) If any of these conditions is true, print "YES". Otherwise, print "NO".
*/


#include <iostream>
using namespace std;

int main(){
    int testcase;
    cin>>testcase;

    while (testcase--){
        int a, b, c;
        cin>>a>>b>>c;

        if(a + b == c || b + c == a || c + a == b){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

/*Algorithm:-
i) Read the three integers a, b, c.
ii) Check if any two numbers add up to the remaining one:
    If a + b == c  
    OR a + c == b
    OR b + c == a
iii) If any of the above is true → print YES.
iv) Otherwise → print NO.
*/

//Time Complexity: O(1) for each test case, since the operations are constant time. 
//Space Complexity: O(1) as no additional space is used that scales with input size.