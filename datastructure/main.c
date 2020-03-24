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
    int i, j, n, count;

    printf("Input a number: \n");
    scanf("%d", &n);

    count = 0;
    for( i = 0; i < n; i++){
        for( j = 0; j < n; j++){
            count = count + 1;
        }
    }

    for( i = 0; i < n; i++){
            count = count + 1;
        }

    printf("N = %d, Count = %d\n", n, count);






    return 0;
}
