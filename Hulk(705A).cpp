//Intuition:
/*
    i) To determine the minimum number of steps required to cover a distance of x units, where each step can cover up to 5 units.
    ii) This can be calculated using the ceiling of the division of x by 5, since any remaining distance less than 5 still requires an additional step.
*/
//Approach:
/*      i) Read the integer num — the total distance to be covered.   
        ii) Loop from 1 to num:
            a) If the current index is odd, print "I hate".
            b) If the current index is even, print "I love".
            c) If the current index is not the last one, print " that ".
            d) If it is the last index, print " it".
*/

#include <iostream>
using namespace std;   

int main(){
    int num;

    cin>>num;
    for(int i = 1; i <= num; i++){
        if(i % 2 == 0){
            cout<<"I love";
        }
        else{
            cout<<"I hate";
        }

        if (i != num){
            cout<<" that ";
        }
        else{
            cout<<" it";
        }
    }
    
}

/*Algorithm:-
    i) Read integer n.
    ii) Loop from 1 to n:
        a) If the current index is odd, print "I hate".
        b) If the current index is even, print "I love".
        c) If the current index is not the last one, print " that ".
        d) If it is the last index, print " it".
*/

//Time Complexity: O(n) where n is the number of steps, since we need to iterate through each step.
//Space Complexity: O(1) as no additional space is used that scales with input size.
