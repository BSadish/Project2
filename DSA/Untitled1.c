
 #include<stdio.h>
 #include<conio.h>
 #define MAX 5

 void push();
 void pop();
 void display();

 int stack[MAX];
 int top=-1;
 int main()
 {
     int choice;
     do{
        printf("\n1.Push\n2.POP\n3.Display\n4.Exit");
        printf("\n Enter your choice: ");
        switch (choice)
        {
            case 1:
            push();
            break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            default:
                printf("Enter the valid choice");
        }
     } while (choice!=4);
     return 0;
 }
 void push()
 {

     int item;
     if(top==MAX-1)
     {
         printf("\n Overflow");
     }
     else{
        printf("\n Enter a value you want to push");
        scanf("%d",&item);
        top=top+1;
        stack[top]=item;
     }
 }
 void pop()
 {

     int item;
     if(top==-1)
     {
         printf("\n Underflow");
     }
     else{
       item=stack[top];
        top=top-1;
        printf("\n %d item delected from stack",item);
     }
 }
 void display()
 {

     int i;
     if(top==-1)
     {
         printf("\n Underflow");
     }
     else{
        printf("\n Stack element are\n");
        for(i=top;i>=0;i--){
            printf("\n%d",stack[i]);
        }
     }
 }

