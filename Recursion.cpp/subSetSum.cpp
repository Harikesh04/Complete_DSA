
// C++ program to print the count of
// subsets with sum equal to the given value X
 
#include <iostream>
using namespace std;
 
// Recursive function to return the count
// of subsets with sum equal to the given value
int subsetSum(int arr[], int n, int i,
              int sum, int count)
{
    // The recursion is stopped at N-th level
    // where all the subsets of the given array
    // have been checked
    if (i == n) {
 
        // Incrementing the count if sum is
        // equal to 0 and returning the count
        if (sum == 0) {
            count++;
        }
        return count;
    }
 
    // Recursively calling the function for two cases
    // Either the element can be counted in the subset
    // If the element is counted, then the remaining sum
    // to be checked is sum - the selected element
    // If the element is not included, then the remaining sum
    // to be checked is the total sum
    count = subsetSum(arr, n, i + 1, sum - arr[i], count);
    count = subsetSum(arr, n, i + 1, sum, count);
    return count;
}
 
// Driver code
int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    int sum = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
 
    cout << subsetSum(arr, n, 0, sum, 0);
}