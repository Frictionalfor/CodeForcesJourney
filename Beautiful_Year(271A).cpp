#include <iostream>
#include <string>
using namespace std;

bool isBeautiful(int year) {
    string s = to_string(year);
    return (s[0] != s[1]) && (s[0] != s[2]) && (s[0] != s[3]) &&
           (s[1] != s[2]) && (s[1] != s[3]) && (s[2] != s[3]);
}

int main(){
    int year;

    cin>>year;

    while(true){
        year++;

        if(isBeautiful(year)){
            cout<<year<<endl;
            break;
        }
    }
    return 0;
}

/*Algorithm:-
    i) Read integer year.
    ii) Increment year by 1.
    iii) Check if all digits in the year are distinct:
        a) Convert year to string.
        b) Compare each digit with every other digit.
    iv) If all digits are distinct, print the year and exit.
    v) If not, repeat from step ii.
*/