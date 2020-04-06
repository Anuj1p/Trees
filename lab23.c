#include <stdio.h>
#include<stdlib.h>

typedef struct node

            {

                int data;

                struct node *left;

                struct node *right;



            }Node;





int *make()

{



 int x;

Node *newnode=(Node*)malloc(sizeof(Node));

 printf("Enter the data for the nodes(-1 for no data)");



 scanf("%d", &x);



 if(x==-1)

 {

     return NULL;

}

      newnode->data=x;

      printf("Enter the left child data rooted at %d \n",newnode->data);

      newnode->left=make();

      printf("Enter the right child data rooted at %d\n",newnode->data);

      newnode->right=make();

      return newnode;



}

void traverse(Node *y)

{



    if(!y==NULL)

    {



     printf("Left child data is %d ",y->data);



       traverse(y->left);

       y=y->right;

      }



   if(y!=NULL)

      {



       printf("Right child data is %d\n",y->data);


       traverse(y->right);





      }

}

void Inorder(Node *y)
{

    if(y)
    {
    Inorder(y->left);
    printf(" %d",y->data);
    Inorder(y->right);
    }
}

void Postorder(Node *y)
{

    if(y)
    {
    Postorder(y->left);
    Postorder(y->right);
    printf(" %d",y->data);
    }
}

void Preorder(Node *y)
{
    if(y)
    {
    printf(" %d",y->data);
    Preorder(y->left);
    Preorder(y->right);
    }
}
void Double(Node *y)
{

    if(y)
    {
        printf("%d ",y->data);
        Double(y->left);
        printf("%d ",y->data);
        Double(y->right);
    }
}




int main()

{

Node *root=make();

Node *y=root;

printf("Root child is %d\n ",y->data);

printf("\n\nPreorder traversing is\n");
Preorder(y);
printf("\n\nInorder traversing is\n");
Inorder(y);
printf("\n\nPostorder traversing is\n");
Postorder(y);
printf("\n\nDouble order traversing is\n");
Double(y);


    return 0;

}
