#include <stdio.h>

int main()
{

    int i, n, result;

    scanf("%d\n", &n);
    result = 0;

    for( i = 0; i < n; i++ ){
        result = result + i;
    }

    printf("Result = %d\n", result);
    return 0;
}
