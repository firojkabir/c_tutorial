#include <stdio.h>

int main()
{
//  ******* Time Complexity: 1st Example O(n) *******

//    int i, n, result;
//
//    printf("Input a number: \n");
//    scanf("%d", &n);
//
//    result = 0;
//    for( i = 0; i < n; i++ ){
//        result = result + i;
//    }
//    printf("Result = %d\n", result);


//  ****** Time Complexity: 2nd Example O(n^2) *******
//
//    int i, j, n, count;
//
//    printf("Input a number: \n");
//    scanf("%d", &n);
//
//    count = 0;
//    for( i = 0; i < n; i++){
//        for( j = 0; j < n; j++){
//            count = count + 1;
//        }
//    }
//
//    printf("N = %d, Count = %d\n", n, count);


//  ****** Time Complexity: 3rd Example O(n^3) *******
//
//    int i, j, k, n, count;
//
//    printf("Input a number: \n");
//    scanf("%d", &n);
//
//    count = 0;
//    for( i = 0; i < n; i++){
//        for( j = 0; j < n; j++){
//            for( k = 0; k < n; k++){
//            count = count + 1;
//        }
//        }
//    }
//
//    printf("N = %d, Count = %d\n", n, count);


//  ****** Time Complexity: 4th Example O(n^2) + O(n) but will take heighst value so O(n^2) *******
//
//    int i, j, n, count;
//
//    printf("Input a number: \n");
//    scanf("%d", &n);
//
//    count = 0;
//    for( i = 0; i < n; i++){
//        for( j = 0; j < n; j++){
//            count = count + 1;
//        }
//    }
//
//    for( i = 0; i < n; i++){
//            count = count + 1;
//        }
//
//    printf("N = %d, Count = %d\n", n, count);


//******* Space Complexity: 1st example O(1) *******
//
//    int n;
//
//    printf("Input a number to check odd or even: \n");
//    scanf("%d", &n);
//
//    if( n % 2 == 0 ){
//        printf("%d is an even number.\n", n);
//    } else {
//        printf("%d is an odd number.\n", n);
//    }


//******* Space Complexity: 2nd example O(n) *******
//
//    int i, n, even[101];
//
//    for( i = 0; i < 101; i++ ){
//        even[i] = 0;
//    }
//
//    for( i = 0; i < 101; i+=2 ){
//        even[i] = 1;
//    }
//
//    printf("Input a number to check odd or even: \n");
//    scanf("%d", &n);
//
//    if( even[n] ){
//        printf("%d is an even number.\n", n);
//    } else {
//        printf("%d is an odd number.\n", n);
//    }


//******** Linear Search ********
//
//    int linear_search(int A[], int n, int x)
//    {
//        int i;
//
//        for( i = 0; i < n; i++ ){
//            if( A[i] == 0 ){
//                return i;
//            }
//        }
//        i = -1;
//        return i;
//    }


//******** Binary Search ********
//
//    int binary_search(int A[], int n, int x)
//    {
//        int left, right, mid;
//        left = 0;
//        right = n - 1;
//
//        while (left <= right) {
//            mid = (left + right) / 2;
//            if (A[mid] == x) {
//                return mid;
//            }
//            if (A[mid] < x) {
//                left = mid +1;
//            } else {
//                right = mid -1;
//            }
//        }
//        return -1;
//    }


//******** Selection Sort ********

    void selection_sort(int a[], int n)
    {
        int i, j, index_min, temp;

        for ( i = 0; i < n-1; i++ ) {
            index_min = i;
            for ( j = i+1; j < n; j++ ) {
                if ( A[j] < A[index_min] ) {
                    index_min = j;
                }
            }
            if ( index_min != i ) {
                temp = A[i];
                A[i] = A[index_min];
                A[index_min] = temp;
            }
        }
    }








    return 0;
}
