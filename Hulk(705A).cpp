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