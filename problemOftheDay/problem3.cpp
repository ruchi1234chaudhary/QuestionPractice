// You have given two sorted arrays arr1[] & arr2[] of distinct elements. The first array has one element extra added in between. Return the index of the extra element.

// Note: 0-based indexing is followed.

// Examples

// Input: n = 7, arr1[] = {2,4,6,8,9,10,12}, arr2[] = {2,4,6,8,10,12}
// Output: 4
// Explanation: In the first array, 9 is extra added and it's index is 4.

class solution{
    public:
    int findExtra(int n,int arr1[], int arr2[]){
        for(int i=0; i<n; i++){
          if ( arr1[i]!=arr2[i]){
            return i;
          }
        }
    }

};