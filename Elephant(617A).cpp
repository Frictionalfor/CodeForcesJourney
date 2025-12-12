//Intuition:
/*
    i) To determine the minimum number of steps required to cover a distance of x units, where each step can cover up to 5 units.
    ii) This can be calculated using the ceiling of the division of x by 5, since any remaining distance less than 5 still requires an additional step.
*/
//Approach:
/*      i) Read the integer x — the total distance to be covered.   
        ii) Calculate the minimum number of steps as ceil(x / 5). This can be computed using integer arithmetic as (x + 4) / 5.
        iii) Print the result.
*/

#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    cout << (x + 4) / 5 << "\n";
    return 0;
}

/*Algorithm:-
i) Read integer x.
ii) Each step can cover up to 5 units.
iii) So minimum steps needed = ceil(x / 5).
*/

//Time Complexity: O(1) since the operations are constant time.
//Space Complexity: O(1) as no additional space is used that scales with input size.
