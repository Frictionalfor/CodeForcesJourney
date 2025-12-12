#include <iostream>
using namespace std;

int main(){
    int testCase;
    cin>>testCase;

    while(testCase--){
        long long a, b, n;
        cin>>a>>b>>n;

        if((long long) b*n <= a || b >= a) {       
            cout<<"1"<<endl;
        }

        else {
            cout<<"2"<<endl;
        }
    }
    return 0;
}

/*Algorithm:-
1. Read the number of test cases.
2. For each test case, read the integers a, b, and n.
3. Check the conditions:
   - If b*n <= a or b >= a, print "1".
   - Otherwise, print "2".
*/