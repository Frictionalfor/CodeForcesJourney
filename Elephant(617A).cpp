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