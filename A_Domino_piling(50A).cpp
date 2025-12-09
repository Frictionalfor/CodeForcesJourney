#include <iostream>
using namespace std;

int main(){
    long n, m;
    cin>>n>>m;
    cout<<(n*m)/2 <<"\n";
    return 0;
}

/*Algorithm:-
    i) Read n, m.
    ii) Compute total cells = n * m.
    iii) Answer = floor(total cells / 2).
    iv) Print answer.
*/