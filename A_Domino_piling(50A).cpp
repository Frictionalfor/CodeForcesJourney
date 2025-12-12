//Intuition:
/*
    i) A domino covers exactly two adjacent cells on a grid.
    ii) To find the maximum number of dominoes that can fit in an n x m grid, we need to determine how many pairs of cells are available.
    iii) The total number of cells in the grid is n * m. Since each domino covers 2 cells, the maximum number of dominoes that can fit is given by the integer division of the total number of cells by 2.
*/

//Approach:
/*      i) Read the dimensions of the grid, n (rows) and m (columns).
        ii) Calculate the total number of cells in the grid as n * m.
        iii) Compute the maximum number of dominoes that can fit by performing integer division of the total number of cells by 2.
        iv) Print the result.
*/


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

//Time Complexity: O(1) since the operations are constant time. 
//Space Complexity: O(1) as no additional space is used that scales with input size.
