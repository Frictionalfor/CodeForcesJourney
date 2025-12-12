//Intuition:
/*
    i) To divide a watermelon into two parts with even weights, the total weight must be even and greater than 2.
    ii) If the weight is odd, it cannot be split into two even parts.
    iii) If the weight is 2, splitting it would result in two parts of weight 1 each, which are not even.
*/

//Approach:
/*      i) Read the integer w — the weight of the watermelon.
        ii) Check if w is greater than 2 and if w is even.
        iii) If both conditions are satisfied, print "YES". Otherwise, print "NO".
*/

#include <iostream>
using namespace std;

int main(){

    int w;
    cin>>w;

    if(w > 2 && w % 2 ==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}

/*Algorithm:-
    i) Read integer w.
    ii) If w is even AND w > 2 → print YES.
    iii) Otherwise → print NO.
*/

//Time Complexity: O(1) since the operations are constant time.
//Space Complexity: O(1) as no additional space is used that scales with input size.
