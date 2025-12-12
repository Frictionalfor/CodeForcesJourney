//Intuition:
/*
    i) To find the minimum distance between the furthest apart friends on a number line, 
    we need to identify the positions of the three friends and calculate the distance between the maximum and minimum positions.
    ii) Sorting the positions will help us easily find the minimum and maximum values.
*/
//Approach:
/*      i) Read the three friends’ positions into an array.
        ii) Sort the array in increasing order.
        iii) Compute distance = largest position − smallest position.
        iv) Print the result.
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int a, b, c;
    cin>>a>>b>>c;

    int arr[3] = {a, b, c};
    sort(arr, arr + 3);

    int minimumDistance = arr[2] - arr[0];
    
    cout<<minimumDistance<<endl;
    
    return 0;
}

/*Algorithm:-
    i) Read the three friends’ positions into an array.
    ii) Sort the array in increasing order.
    iii) Compute distance = largest position − smallest position.
    iv) Output that distance.
*/

//Time Complexity: O(1) since we are only sorting three elements, which is a constant time operation.
//Space Complexity: O(1) as no additional space is used that scales with input size.
