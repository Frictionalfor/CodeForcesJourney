//Intuition: To transform 'a' to 'b', we can either add 1 (cost x) or XOR with 1 (cost y).
// We need to find the minimum cost to achieve this transformation.
//Approach:
// 1. If 'a' is greater than 'b', check if we can reach 'b' by a single XOR operation.
// 2. If 'a' is less than or equal to 'b', calculate the cost using only addition.
// 3. Additionally, simulate the process of transforming 'a' to 'b' using a combination of addition and XOR operations to find a potentially cheaper cost.
// 4. Compare the costs from the direct addition method and the simulated method to find the minimum cost.

#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long a, b, x, y;
        cin >> a >> b >> x >> y;

        if (a > b) {
            if ((a & 1) && b == a - 1) {
                cout << y << "\n";
            } else {
                cout << -1 << "\n";
            }
            continue;
        }

        long long best = (b - a) * x;

        long long cur = a, cost = 0;
        while (cur < b) {
            if ((cur & 1) == 0) {
                cost += y;
                cur ^= 1;   
            } else {
                cost += x;
                cur += 1;
            }
        }

        if (cost < best) best = cost;
        cout << best << "\n";
    }

    return 0;
}

/*Algorithm:
1. If 'a' is greater than 'b', check if we can reach 'b' by a single XOR operation.
2. If 'a' is less than or equal to 'b', calculate the cost using only addition.
3. Additionally, simulate the process of transforming 'a' to 'b' using a combination of addition and XOR operations to find a potentially cheaper cost.
4. Compare the costs from the direct addition method and the simulated method to find the minimum cost.
*/

//Time Complexity: O((b - a)) in the worst case for the simulation part, but generally efficient for small differences.
//Space Complexity: O(1) as we are using a constant amount of space.
