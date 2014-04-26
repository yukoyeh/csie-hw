/* Fig. 12.19: fig12_19.c
Create a binary tree and traverse it
preorder, inorder, and postorder */
#include<stdio.h>
#include<iostream>
#include<string.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
/* self-referential structure */
struct treeNode {
struct treeNode *leftPtr; /* pointer to left subtree */
char *data; /* node value */
struct treeNode *rightPtr; /* pointer to right subtree */
}; /* end structure treeNode */

 typedef struct treeNode TreeNode; /* synonym for struct treeNode */
 typedef TreeNode *TreeNodePtr; /* synonym for TreeNode* */

 /* prototypes */
 void insertNode( TreeNodePtr *treePtr, char *value );
 void inOrder( TreeNodePtr treePtr );
 void preOrder( TreeNodePtr treePtr );
 void postOrder( TreeNodePtr treePtr );

int main( void )
 {
 int i; /* counter to loop from 1-10 */
 char item[1000]; /* variable to hold random values */
 char *pch; 
 TreeNodePtr rootPtr = NULL; /* tree initially empty */
 
 //printf( "The numbers being placed in the tree are:\n" );
 gets(item);
 //printf( "%s", item );
 pch = strtok (item," ,.-");
 while (pch != NULL)
  {
  		insertNode(&rootPtr,pch);
        pch = strtok (NULL, " ,.-");
        
  }/* traverse the tree preOrder */
 //printf( "\n\nThe preOrder traversal is:\n" );
 preOrder(rootPtr);
 cout<<endl;
 /* traverse the tree inOrder */
 //printf( "\n\nThe inOrder traversal is:\n" );
 inOrder(rootPtr);
 cout<<endl;
 /* traverse the tree postOrder */
 //printf( "\n\nThe postOrder traversal is:\n" );
 postOrder(rootPtr);
 cout<<endl;
 return 0; /* indicates successful termination */
 } /* end main */

 /* insert node into tree */
 void insertNode( TreeNodePtr *treePtr, char *value )
 {
 /* if tree is empty */
 if ( *treePtr == NULL ) {
 *treePtr = (TreeNodePtr)malloc(sizeof(TreeNode));
 
 /* if memory was allocated then assign data */
 if ( *treePtr != NULL ) {
 //( *treePtr )->data = value;
 ( *treePtr )->data = value;
 ( *treePtr )->leftPtr = NULL;
 ( *treePtr )->rightPtr = NULL;
 } /* end if */
 else {
 printf( "%d not inserted. No memory available.\n", value );
 } /* end else */
 } /* end if */

 else{
      /*if ( value < ( *treePtr )->data ) {
      insertNode( &( ( *treePtr )->leftPtr ), value );
      }
 else if ( value > ( *treePtr )->data ) {
      insertNode( &( ( *treePtr )->rightPtr ), value );
      }*/
      
      if ( strcmp( value, ( *treePtr )->data ) < 0) {
      insertNode( &( ( *treePtr )->leftPtr ), value );
      }
 else if ( strcmp( value, ( *treePtr )->data ) > 0 ) {
      insertNode( &( ( *treePtr )->rightPtr ), value );
      }
      
  else { /* duplicate data value ignored 指資料重複吧XDDDDD */
   //printf( "dup" );
 } /* end else */
 } /* end else */
 } /* end function insertNode */
  void inOrder( TreeNodePtr treePtr )
 {
      if ( treePtr != NULL ) {
  inOrder( treePtr->leftPtr );
printf( "%s ", treePtr->data );
inOrder( treePtr->rightPtr );
} /* end if */
}

  void preOrder( TreeNodePtr treePtr )
 {
    if ( treePtr != NULL ) {
printf( "%s ", treePtr->data );
preOrder( treePtr->leftPtr );
preOrder( treePtr->rightPtr );
} /* end if */

}

void postOrder( TreeNodePtr treePtr ){
     if ( treePtr != NULL ) {
postOrder( treePtr->leftPtr );
postOrder( treePtr->rightPtr );
printf( "%s ", treePtr->data );
} /* end if */

}
