#include <stdio.h>

void add(int m, int a);
void sub(int m, int a);
void multi(int m, int a);
void divide(int m, int a);
void modulus(int m, int a);

int main() 
{
    int choice, num1, num2;

    while (1) 
	{
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0) 
		{
            printf("Exiting the program...\n");
            break;
        }

        printf("Enter the first number: ");
        scanf("%d", &num1);
        printf("Enter the second number: ");
        scanf("%d", &num2);

        switch (choice) 
		{
            case 1:
                add(num1, num2);
                break;
            case 2:
                sub(num1, num2);
                break;
            case 3:
                multi(num1, num2);
                break;
            case 4:
                divide(num1, num2);
                break;
            case 5:
                modulus(num1, num2);
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

void add(int m, int a) 
    {
        printf("Addition of %d and %d is %d\n",m,a,m+a);
    }

void subtract(int m, int a) 
    {
       printf("Subtraction of %d from %d is %d\n",m,a,m-a);
    }

void multiply(int m, int a) 
    {
       printf("Multiplication of %d and %d is %d\n",m,a,m*a);
    }

void divide(int m, int a) 
	{
       printf("Division of %d by %d is %d\n",m,a,m/a);
	}

void modulus(int m, int a) 
    {
       printf("Modulus of %d and %d is %d\n",m,a,m%a);
	}