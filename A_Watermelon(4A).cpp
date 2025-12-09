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