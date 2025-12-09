#include <iostream>
using namespace std;

int main(){

    int testCase;
    cin>>testCase;

    while (testCase--){
        int num;
        cin>>num;

        int digit1 = num % 10;
        int digit2 = num / 10;
        cout<<digit1 + digit2<<endl;
    }
    
    return 0;
}

/*Algorithm:-
    Read integer num.
    Let digit1 = num / 10 (integer division) → first digit.
    Let digit2 = num % 10 → second digit.
    Output digit1 + digit2.
*/