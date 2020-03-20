#include <stdio.h>
#include <stdbool.h>

#define NUMBER 100

int i;

//  *********** Function ***********
//int sum(int x, int y){
//    int add;
//    add = x + y;
//    return add;
//}

//    *********** Pointer ***********
//    void swap(int* a, int* b){
//        int temp = (*a);
//        (*a) = (*b);
//        (*b) = temp;
//
//        printf("A: %d & B: %d (outside the function)\n", *a, *b);
//    }

//    *********** Struct ***********
    typedef struct studentInfo {
        char name[50];
        int id;
        int age;
        int height;
        int weight;
    }Info;

//    ********** File I/O ***********
    void fileIOTest(){

        FILE* inputFile;

        inputFile = fopen("/home/rimon/Desktop/C/c_tutorial01/inpFile.txt", "r");

        if(inputFile!=NULL){
            FILE* outFile = fopen("/home/rimon/Desktop/C/c_tutorial01/outFile.txt", "w");

            if(outFile!=NULL){
                printf("File read and write successfully!!\n");

                //Data read and write
                Info sInfo;
                fscanf(inputFile, "%s", sInfo.name);
                fscanf(inputFile, "%d %d %d %d", &(sInfo.id), &(sInfo.age), &(sInfo.height), &(sInfo.weight));

                fprintf(outFile, "Name: %s\nID: %d\nAge: %d\nHeight: %d\nWeight: %d\n", sInfo.name, sInfo.id, sInfo.age, sInfo.height, sInfo.weight);

                fclose(outFile);
            }else{
                printf("File could not be created.\n");
            }


            fclose(inputFile);
        }


//        FILE* outFile = fopen("/home/rimon/Desktop/C/c_tutorial01/outFile.txt", "w");
//
//        if(outFile!=NULL){
//            printf("File created successfully!!\n");
//
//            fprintf(outFile, "You have created this file through FILE IO to print till %d\n",100);
//
//            for (i=1; i<=100; i++){
//                fprintf(outFile, "Roll no: %d\n", i);
//            }
//
//            fclose(outFile);
//        }else{
//            printf("File could not be created.\n");
//        }
    }












int main()
{
//    *********** Variable, Data-type, Arithmetic, Operations ***********
//    int a=99, b=6;
//    int  result=a%b;
//    float c=49.0, d=10.0, result=c/d;
//    printf("a modulus b = %d\n", result);
//    printf("c divided by d = %f\n", result);

//    *********** If-else logic 01 ***********
//    if (a < 51) {
//        printf("%d is less than 51.\n", a);
//    } else {
//
//        if (a == 51) {
//            printf("%d is equal to 51.\n", a);
//        } else {
//            printf("%d is greater than 51.\n", a);
//        }
//    }

//    *********** If-else logic 02 ***********
//    if (a != NUMBER) {
//        printf("%d is not equal to %d\n", a, NUMBER);
//    } else {
//        printf("%d is equal to %d\n", a, NUMBER);
//    }

//    *********** If-else logic 03 ***********
//    if (a < NUMBER) {
//        printf("%d is less than %d\n", a, NUMBER);
//    } else if (a == NUMBER) {
//        printf("%d is equal to %d\n", a, NUMBER);
//    } else {
//        printf("%d is greater than %d\n", a, NUMBER);
//    }

//    int counter=1;

//    *********** Loops - While ***********
//    while (counter < 20) {
//        printf("Counter is: %d\n", counter);
////        counter++;
////        counter+=2;
//        counter*=2;
//    }

//    *********** Loops - Do-While ***********
//    do {
//        printf("Counter is: %d\n", counter);
//        counter++;
//    } while (counter < 10);

//    *********** Loops - for ***********
//    for ( counter=1; counter<10; counter++){
//        printf("Counter is: %d\n", counter);
//    }

//    *********** Continue ***********
//    for ( counter=1; counter<10; counter++){
//
//        if (counter == 5){
//            continue;
//        }
//        printf("Counter is: %d\n", counter);
//    }

//    *********** Break ***********
//    for ( counter=1; counter<10; counter++){
//
//        if (counter == 5){
//            break;
//        }
//        printf("Counter is: %d\n", counter);
//    }

//    Switch-Case
//    int jersey = 2;
//
//    switch (jersey) {
//        case 10:
//            printf("You're not Mashrafe, You're Messy\n");
//            break;
//        case 7:
//            printf("You're not Mashrafe, You're Penaldo\n");
//            break;
//        case 75:
//            printf("You're not Mashrafe, You're Shakib\n");
//            break;
//        case 2:
//            printf("You're Mashrafe\n");
//            break;
//        default:
//            printf("There is no Mashrafe\n");
//            break;
//    }

//     *********** Function ***********
//    int x=55, y=45;
//
//    int result = sum(x,y);
//    printf("%d + %d = %d", x, y, result);

//    *********** Pointer ***********

//    int  a=2, b=6;

//    printf("Value of a is %d and it's address %d\n", a, &a);
//    printf("Value of b is %d and it's address %d\n", b, &b);

//    swap(&a, &b);
//    printf("A: %d & B: %d (inside the function)\n", a, b);

//      int * pointerX, pointerY;
//
//      pointerX = (int*)malloc(sizeof(int));
//      printf("pointerX's address: %d & pointerX's value: %d\n", pointerX, *pointerX);
//
//      free(pointerX);

//    User Input
//    int userBalance;
//    int givenAmount = 1000;
//
//    printf("Please input your current balance to add with %d\n", givenAmount);
//    scanf("%d", &userBalance);
//    printf("Now, your total balance is %d + %d = %d\n", userBalance, givenAmount, (userBalance+givenAmount));

//   *********** Array input ***********
//    int studentAge[5], i;
//
//    for(i=0; i<5; i++){
//        printf("Please provide your age: %d\n", i);
//        int tmp;
//        scanf("%d", &tmp);
//        studentAge[i] = tmp;
//    }
//    printf("\n\n");
//
//    for(i=0; i<5; i++){
//        printf("Student[%d]'s age: %d\n", i, studentAge[i]);
//    }

//    char userName[50];
//
//    printf("Your name, please: ");
//    scanf("%s", userName);
//    printf("Hello %s!!\n",userName);

//    *********** Struct ***********
//    Info sInfo;
//
//    printf("Your name please: ");
//    scanf("%s",sInfo.name);
//    printf("Your ID please: ");
//    scanf("%d",&(sInfo.id));
//    printf("Your age please: ");
//    scanf("%d",&(sInfo.age));
//    printf("Your height please: ");
//    scanf("%d",&(sInfo.height));
//    printf("Your weight please: ");
//    scanf("%d",&(sInfo.weight));
//
//    printf("\n\n Your name %s and ID %d.\n You are %d years old\n %d cm tall man with\n %d kilo of weight.",sInfo.name, sInfo.id, sInfo.age, sInfo.height, sInfo.weight);
//    printf("\n\n");


//    ********** File I/O ***********
    fileIOTest();











    return 0;
}
