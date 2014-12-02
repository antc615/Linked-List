#include <stdio.h>
#include <stdlib.h>

struct node {
  int count;
  struct node *next;
};

void insert(int x);

struct node *head=NULL;
struct node *curr=NULL;

void insert(int x)
{
  curr=head;
  struct node *temp;
      
      temp = malloc(sizeof(struct node)); 
      
      temp->count=x;temp->next=NULL;

      if(head==NULL)
	{
	  head=temp;
	}
      else 
	{
	  while(curr->next!=NULL)
	    {
	      curr=curr->next;
	    }
	  curr->next=temp;
	}
}
void print()
{
  curr=head;
  while(curr!=NULL)
    {
      printf("%d ",curr->count);
      curr=curr->next;
    }
  printf("\n");
}

int main(void)
{
  int x=1;
  while(x>0)
    {
      printf("enter a number plz:\n");
      scanf("%d",&x);
      
      if(x>=0)
	{
	  insert(x);
	}
    }
  print();
  return 0;
}
