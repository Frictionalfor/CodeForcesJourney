//Intuition:
/*
    i) We need to determine the minimum number of tabs required to close a window given the number of tabs (n), 
    the memory freed by closing each tab (b), and the total memory used by the window (a).
    ii) If closing one tab frees enough memory (b >= a), then we can close all tabs in one step.
    iii) Otherwise, we need to close all tabs in two steps.
*/
//Approach:
/*      i) Read the integer testCase — the number of test cases.
        ii) For each test case:
        iii) Read the integers a, b, and n.
        iv) Check the conditions:
            - If b*n <= a or b >= a, print "1".
            - Otherwise, print "2".
*/

#include <iostream>
using namespace std;

int main(){
    int testCase;
    cin>>testCase;

    while(testCase--){
        long long a, b, n;
        cin>>a>>b>>n;

        if((long long) b*n <= a || b >= a) {       
            cout<<"1"<<endl;
        }

        else {
            cout<<"2"<<endl;
        }
    }
    return 0;
}

/*Algorithm:-
1. Read the number of test cases.
2. For each test case, read the integers a, b, and n.
3. Check the conditions:
   - If b*n <= a or b >= a, print "1".
   - Otherwise, print "2".
*/

//Time Complexity: O(1) for each test case, since the operations are constant time. 
//Space Complexity: O(1) as no additional space is used that scales with input size.
