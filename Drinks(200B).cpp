//Intuition:
/*
    i) To find the average percentage of orange juice in the given drinks, we need to sum up the percentages and then divide by the number of drinks.
    ii) This involves basic arithmetic operations: addition and division.
*/

//Approach:
/*      i) Read the integer n — the number of drinks.
        ii) Initialize a variable sum to store the total percentage.
        iii) Loop through each drink, read its percentage p, and add it to sum.
        iv) After processing all drinks, calculate the average by dividing sum by n.
        v) Print the average with appropriate precision.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    if (!(cin >> n)) return 0;
    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        double p;
        cin >> p;
        sum += p;
    }
    double ans = sum / n;
    cout.setf(std::ios::fixed);
    cout << setprecision(12) << ans << '\n';
    return 0;
}


/*Algorithm:-
    Read integer n (number of drinks).
    Initialize sum = 0.
    Loop from 1 to n:
    Read p
    Add p to sum
    Final answer = sum / n
    Print the answer.
*/

//Time Complexity: O(n) where n is the number of drinks, since we need to read and sum up the percentages of all drinks.
//Space Complexity: O(1) as we are using a constant amount of space regardless of the input size.
