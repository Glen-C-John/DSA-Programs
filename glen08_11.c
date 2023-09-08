/*Array impimentation of stack*/

/*
name = Narendra Dukhande
Roll No. = 16
pid = 11
SE-IT (sem 3)
2023-24
*/

#include<stdio.h>
int head = -1;
int n=5, x, choice;
int arr[5];
void makeEmpty(int arr[])
{
    head=-1;
}
void push(int x, int arr[])
{
    if(head==n-1)
    {
        //Stack Overflow
        printf("Stack is full");
        return;
    }
    head++;
    arr[head]= x;
}
void pop(int arr[])
{
    if(head==-1)
    {
        printf("empty Stack");
        return;
    }
    head--;
}
void printArr(int arr[])
{
    if(head==-1)
    {
        //Stack Underflow
        printf("Stack is empty");
        return;
    }
    for(int i=0; i<= head; i++){
        printf("%d\n", arr[i]);
    }
}
void main()
{

    /*calling the everlasting choices*/
    while(choice!=4)
    {
        /*description of menu bar*/
        printf("\n\n\n\n-----These are the menu panel-----");
        printf("\n1. Push");
        printf("\n2. Pop");
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
            push(x, arr);
                break;
            case 2: pop(arr);
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
    printf("You got exit\n");
}
