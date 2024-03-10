#include<stdio.h>
#include<stdlib.h>
#include<math.h>


    //declaring functions
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void factorial();
void power();
void square();
void cube();
void squareroot();




//main function ends here


//definition of addition
void addition(){
            printf("Enter the numbers you want to add: ");
            int a, b;
            scanf("%d %d", &a, &b);
            printf("The addition of %d and %d is %d\n\n", a, b, a+b);
        }



//definition of subtraction
void subtraction(){
            printf("Enter the numbers you want to subtract: ");
            int a, b;
            scanf("%d %d", &a, &b);
            printf("The addition of %d and %d is %d \n\n", a, b, a-b);
        }


//definition of Multiplication
void multiplication(){
            printf("Enter the numbers you want to multiply: ");
            int a, b;
            scanf("%d %d", &a, &b);
            printf("The multiplication of %d and %d is %d \n\n",a, b, a*b);
}

void division(){
    printf("Enter the numbers you want to divide: ");
    float a, b;
    scanf("%f %f", &a, &b);
    printf("The division of %.2f and %.2f is %.3f \n\n",a, b, a/b);
}
void modulus(){
    printf("Enter the numbers to find the modulus: ");
    int a, b;
    scanf("%d %d",&a ,&b);
    printf("The modulus of a and b is %d \n\n",a%b);
}
void factorial(){
    int n, facto;
    printf("Enter the number to find the factorial: ");
    scanf("%d", &n);
    facto = 1;

    for(int i = 1; i <= n; i++)
        {
        facto = facto*i;
        }
    printf("\nFactorial of %d is %d \n\n",n,facto);
}
void power(){
    int i;
    double a, b, e=1.0;

    printf("Enter the number and its power: ");
    scanf("%lf %lf", &a, &b);

    while (b!=0)
    {
        e*= a;
        --b;
    }
    printf("The power is %.2lf \n\n",e);
}
void square(){
    double a;
    printf("Enter the number you want the square of: ");
    scanf("%lf", &a);
    printf("The square of %.2lf is %.2lf \n\n", a, a*a);
}
void cube(){
    double a;
    printf("Enter the number you want the cube of: ");
    scanf("%lf", &a);
    printf("The cube of %.2lf is %.2lf \n\n", a, a*a*a);
}
void squareroot(){
    double a;

    printf("Enter the number you want the square root of : ");
    scanf("%lf",&a);

    printf("The square root of %.2lf is %.2lf \n\n",a, sqrt(a));
}




//Main function starts here
int main()
{
    //Introduction
        printf("\nHello there, I am a scientific calculator. I am able to do this following operations\n");


        //Taking input from the user
        int option;

        //break function input
        printf("\n\t ***Press 0 to quit the program*** \n\n");
    //Giving choice to the user
        printf("\tPress 1  for ADDITION\n");
        printf("\tPress 2  for SUBTRACTION\n");
        printf("\tPress 3  for MULTIPLICATION\n");
        printf("\tPress 4  for DIVISION\n");
        printf("\tPress 5  for MODULUS\n");
        printf("\tPress 6  for POWER\n");
        printf("\tPress 7  for FACTORIAL\n");
        printf("\tPress 8  for SQUARE\n");
        printf("\tPress 9  for CUBE\n");
        printf("\tPress 10 for SQUARE ROOT\n");


while(1)
    {
        printf("\n\nPlease choose your operation:-\n");

        scanf("%d", &option);


    //break sequence
        if(option==0)
        {
            break;
        }




    //Implementing switch case for performing operations.
        switch(option)
            {
                case 1:
                    addition();
                    break;


                case 2:
                    subtraction();
                    break;

                case 3:
                    multiplication();
                    break;


                case 4:
                    division();
                    break;

                case 5:
                    modulus();
                    break;

                case 6:
                    power();
                    break;


                case 7:
                    factorial();
                    break;



                case 8:
                    square();
                    break;

                case 9:
                    cube();
                    break;


                case 10:
                    squareroot();
                    break;

                case 0:
                    exit(0);




            }
}








}

