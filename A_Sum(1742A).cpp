#include <iostream>
using namespace std;

int main(){
    int testcase;
    cin>>testcase;

    while (testcase--){
        int a, b, c;
        cin>>a>>b>>c;

        if(a + b == c || b + c == a || c + a == b){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

/*Algorithm:-
i) Read the three integers a, b, c.
ii) Check if any two numbers add up to the remaining one:
    If a + b == c  
    OR a + c == b
    OR b + c == a
iii) If any of the above is true → print YES.
iv) Otherwise → print NO.
*/