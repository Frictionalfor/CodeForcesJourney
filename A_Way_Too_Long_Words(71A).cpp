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