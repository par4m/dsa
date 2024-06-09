#include <iostream>
using namespace std;


int LinearSearch(int arr[],int N, int target) {
    // search in the array
    for(int i=0;i < N;i++) {
        if (arr[i]==target)
        {
            return i;
            exit;
        }
        
    }
    return -1;

}

int main(int argc, char const *argv[])
{
    int arr[] = {18,12,9,14,77,50};
    cout << LinearSearch(arr, 6, 14);
    
    return 0;
}

// Best Case  : O(1)
// Worst Case : O(N)

