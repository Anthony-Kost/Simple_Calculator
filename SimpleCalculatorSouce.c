#include <stdio.h>

int main()
{
    int choice;
    float numOne;
    float numTwo;
    float result;

    printf("----Simple Calculator App----\n");
    printf("Please Select Operation\n");
    printf("[1] Addition\n");
    printf("[2] Subtraction\n");
    printf("[3] Multiplication\n");
    printf("[4] Division\n");
    printf("\nWhat is your selection? ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("You have selected (Addition)\n");
            printf("\nInteger 1: ");
            scanf("%f", &numOne);

            printf("Integer 2: ");
            scanf("%f", &numTwo);

            result = numOne + numTwo;
            printf("\nResult: %.1f\n", result);
            break;
        case 2:
            printf("You have selected (Subtraction)\n");
            printf("\nInteger 1: ");
            scanf("%f", &numOne);

            printf("Integer 2: ");
            scanf("%f", &numTwo);

            result = numOne - numTwo;
            printf("\nResult: %.1f\n", result);
            break;
        case 3:
            printf("You have selected (Multiplication)\n");
            printf("\nInteger 1: ");
            scanf("%f", &numOne);

            printf("Integer 2: ");
            scanf("%f", &numTwo);

            result = numOne * numTwo;
            printf("\nResult: %.1f\n", result);
            break;
        case 4:
            printf("You have selected (Division)\n");
            printf("\nInteger 1: ");
            scanf("%f", &numOne);

            printf("Integer 2: ");
            scanf("%f", &numTwo);

            result = numOne / numTwo;
            printf("\nResult: %.1f\n", result);
            break;            
        default:
            printf("Error: Invalid Operator\n");
            break;
    }

    printf("\nWould you like to make another calculation?\n");
    printf("[1] Yes!\n");
    printf("[2] No!\n");
    printf("\nWhat is your selection? ");
    scanf("%d", &choice);
    
    switch (choice)
    {
        case 1:
        main();
        break;
        
        case 2:
        return 0;
        break;
    }
}
