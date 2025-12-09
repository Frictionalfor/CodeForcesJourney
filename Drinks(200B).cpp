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