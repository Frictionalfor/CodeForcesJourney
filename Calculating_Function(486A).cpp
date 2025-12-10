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