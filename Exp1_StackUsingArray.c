#include <stdio.h>
int stack[100];
int Top = -1, i, n, x, choice;
void Push();
void Pop();
void Peep();
void Change();
void Display();

int main()
{
    printf("\t Implementation of Stack using Array!!!\n");
    printf("Enter the size of stack(maximum 100)\n");
    scanf("%d", &n);
    do
    {
        printf("Stack Operation available\n");
        printf("\t1.Push\t2.Pop\t3.Peep\t4.Change\t5.Display\t6.Exit\n");
        printf("Enter your choice\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            Push();
            break;

        case 2:
            Pop();
            break;

        case 3:
            Peep();
            break;

        case 4:
            Change();
            break;
        case 5:
            Display();
            break;
        case 6:
            printf("Program finished!!");
            break;
        default:
            printf("Please enter valid input(1-5)");
            break;
        }
    } while (choice != 6);
    return 0;
}

void Push()
{
    if (Top >= n - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        printf("Enter the element to be pushed\n");
        scanf("%d", &x);
        Top++;
        stack[Top] = x;
       
    }
}
void Pop()
{
    if (Top < 0)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("The element poped is %d\n", stack[Top]);
        Top--;
    }
}
void Peep()
{
    printf(" Enter the position of the element from the top which you want to peep:\n");
    scanf("%d", &i);
    if (Top - i + 1 < 0)
    {
        printf(" Stack Underflow on Peep \n");
    }
    else
    {
        printf(" The %d element from the top is: %d \n", i, stack[Top - i + 1]);
    }
}

void Change()
{
    printf(" Enter the position of the element from the top which you want to Change: ");
    scanf("%d", &i);
    int a;
    printf("Enter new value:");
    scanf("%d", &a);
    if (Top - i + 1 < 0)
    {
        printf(" Stack Underflow on Change \n");
    }
    else
    {
        printf(" The old %d element from the top was: %d \n", i, stack[Top - i + 1]);
        stack[Top - i + 1] = a;
        printf(" The new %d element from the top is: %d \n", i, stack[Top - i + 1]);
    }
}

void Display()
{
    if (Top < 0)
    {
        printf(" Stack is empty \n");
    }
    else
    {
        printf(" The element in the stack are:\n");
        for (i = Top; i > -1; i--)
        {
            printf("%d \n", stack[i]);
        }
    }
}
