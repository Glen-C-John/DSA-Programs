/*Array implementation of Circular Queue*/

#include<stdio.h>
int f=-1, r=-1;
int n=5, x, choice;
int arr[5];
void makeEmpty(int arr[])
{
    //making Queue empty
    f=r=-1;
}
void enQueue(int x, int arr[])
{
    if((r==n-1)&&(f==0)||(f==r+1))
    {
        //Queue Overflow
        printf("Queue is full");
        return;
    }
    if(f==-1)
    {
        //entering first value
        f++;
    }
    r = (r+1)%n;
    arr[r]= x;
}
void deQueue(int arr[])
{
    if(f==-1)
    {
        //Queue Underflow
        printf("Queue is empty");
        return;
    }
    if(f==r)
    {
        //single element to pop
        f=-1;r=-1;
        return;
    }
    f=(f+1)%n;
}
void printArr(int arr[])
{
    if(f==-1)
    {
        //no element to print
        printf("Queue is empty");
        return;
    }
	int i=f-1;
    do
    {
    	i=(i+1)%n;
        printf("%d\n", arr[i]);
    }while(i!=r);
}
void main()
{

    /*calling the everlasting choices*/
    while(choice!=4)
    {
        /*description of menu bar*/
        printf("\n\n\n\n-----These are the menu panel-----");
        printf("\n1. Enter in Queue");
        printf("\n2. Delete from Queue");
        printf("\n3. Traverse");
        printf("\n4. Exit");
        printf("\nenter the option no.: ");
        scanf("%d", &choice);

        /*switch on entered choice*/
        switch(choice)
        {
            /*case-wise calling functions*/
            case 1: 
            printf("enter the number you wnat to push: ");
            scanf("%d", &x);
            enQueue(x, arr);
                break;
            case 2: deQueue(arr);
                break;
            case 3: printArr(arr);
                break;
            case 4:
                break;
            default:
                printf("incorrect choice");
        }
    }/*end of while*/

    /*code execution completed*/
    printf("You got exit\n\n");
}
