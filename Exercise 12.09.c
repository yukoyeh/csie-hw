#include<stdlib.h>
#include<stdio.h>

struct list_el {
   int val;
   struct list_el * next;
};

typedef struct list_el item;

int main() {
   item * curr, * head;
   int i,t;

   head = NULL;

   for(i=1;i<=15;i++) {
      curr = (item *)malloc(sizeof(item));
      scanf("%d",&t);
      curr->val = t;
      curr->next  = head;
      head = curr;
   }

   curr = head;

   for(i=1;i<=15||curr!=0;i++) {
     printf("%d", curr->val);
     if(i<15){
        printf(" ");
     }
      curr = curr->next ;
   }
printf("\n");
return 0;
}
