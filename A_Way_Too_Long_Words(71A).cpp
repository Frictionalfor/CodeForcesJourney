//Intuition:
/*
    i) For words with length ≤ 10, no abbreviation is needed.
    ii) For longer words, the abbreviation is formed by:
        - First letter
        - Count of middle letters (length - 2)
        - Last letter
*/

//Approach:
/*
    i) Read the number of test cases.
    ii) For each test case:
        a) Read a string.
        b) If the length is ≤ 10, print the string as is.
        c) Otherwise, print the first character, followed by the count of middle characters (length - 2), followed by the last character.
*/

#include <iostream>
#include <string>
using namespace std;

int main(){

    int testCase;
    cin>>testCase;

    while (testCase--){
        
        string s;
        cin>>s;

        int n = s.length();

        if(n <= 10){
            cout << s <<endl;
        }
        else{
            cout<<s[0]<<n -2<<s[n-1]<<endl;
        }
    }
    
    return 0;
}

/*Algorithm:-
For each word:
    i) If length ≤ 10 → print word as is.
    ii) Otherwise:
        a) Take first letter
        b) Count middle letters = length - 2
        c) Take last letter
        d) Print: first + count + last
*/

//Time Complexity: O(1) for each test case, since string length check and basic operations are constant time.
//Space Complexity: O(1) as no additional space is used that scales with input size
