#include <calculator_operations.h>
int main()
{

    int choice;
    float input1,input2,result;

    printf("Enter the choice\n :");
    printf("Enter 1 for addition\n2 for subtraction \n3 for multiplication \n4 for division");
    printf("Enter 5 for squareroot\n");
    printf("Enter 6 for sine\n");
    printf("Enter 7 for cosine\n");
    printf("Enter 8 for tangent\n");
    printf("Enter 9 for inverse\n");
    printf("Enter 10 for power\n");
    printf("Enter 11 for logarithm\n");
    printf("Enter 12 for square\n");

    scanf("%d",&choice);
    
    if(choice == 0)
    {exit(0);
    }
    #selection of the various operations
    switch(choice) {
    case 1:
    printf("Enter first number");
    scanf("%f",&input1);
    printf("Enter second number");
    scanf("%f",&input2);
    result=add(input1,input2);
    printf("%0.4 f",result);
    break;

    case 2:
    printf("Enter first number");
    scanf("%f",&input1);
    printf("Enter second number");
    scanf("%f",&input2);
    result=sub(input1,input2);
    printf("%0.4 f",result);
    break;

    case 3:
    printf("Enter first number");
    scanf("%f",&input1);
    printf("Enter second number");
    scanf("%f",&input2);
    result=mul(input1,input2);
    printf("%0.4 f",result);
    break;

    case 4:
    printf("Enter first number");
    scanf("%f",&input1);
    printf("Enter second number");
    scanf("%f",&input2);
    if(input2==0)
    {
        printf("invalid");
        exit(0);
    }
    else{


    result=div(input1,input2);
    printf("%0.4f",result);
    }
    break;

    case 5:

    printf("Enter number");
    scanf("%f",&input1);
    result=squareroot(input1);
    printf("%0.4f",result);
    break;

    case 6:

    printf("Enter the angle in degrees");
    scanf("%f",&input1);
    result=sine(input1);
    printf("%0.4f",result);
    break;

    case 7:
    printf("Enter the angle in degrees");
    scanf("%f",&input1);
    result=cosine(input1);
    printf("%0.4f",result);
    break;

    case 8:
    printf("Enter the angle in degrees");
    scanf("%f",&input1);
    result=tangent(input1);
    printf("%0.4f",result);
    break;

    case 9:
    printf("Enter  number");
    scanf("%f",&input1);
    result=inv(input1);
    printf("%0.4f",result);
    break;

    case 10:
    printf("Enter first number");
    scanf("%f",&input1);
    printf("Enter superscript ");
    scanf("%d",&input2);
    result=power(input1,input2);
    printf("%0.4f",result);
    break;

    case 11:
    printf("Enter  number");
    scanf("%f",&input1);
    result=logarithm(input1);
    printf("%0.4f",result);
    break;
    case 12:
    printf("Enter  number");
    scanf("%f",&input1);
    result=square(input1);
    printf("%0.4f",result);
    break;

    default:printf("Enter the valid input");




}
return 0;
}
