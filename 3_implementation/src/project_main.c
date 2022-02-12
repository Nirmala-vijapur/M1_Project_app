
#include"calculator.h"
  
int main(){
    printf("\t\tWelcome to the scientific calculator!!\n\n");
    int choice;
    printf("\n******* Press 0 to quit the program ********\n");
    printf("1.Addition\n, 2.Subtraction\n, 3.Multiplication\n, 4.Division\n, 5.Modulus\n, 6.Power\n, 7.Factorial \n, 8.squar\n, 9.cube\n, 10.squareroot\n ");
        while(1){
    printf("\n\nEnter the operation you want to do: ");
    scanf("%d",&choice);

    switch(choice)
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
                default:
                    printf("\n********** %s ***********\n",note);
        }

    }
    return 0;
}