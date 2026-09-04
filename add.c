 #include"student.h"
void add_node(void)
   {
  
   sll *new;
   int c=1;
   new=malloc(sizeof(sll));
   printf("enter name and percentage:\n");
   scanf("%s %f",new->name,&new->percentage);
 sll *p=head,*q;
  if(p)
  {
          while(p)
          {
                  if(c!=p->rollno)
                          break;
                          c++;
                          q=p;
                          p=p->next;
          }
  }
  new->rollno=c;
  if(head==0)
  {
          new->next=0;
          head=new;
  }
  else if(head==p)
  {
         new->next=head;
          head=new;
  }
  else
  {
          new->next=p;
          q->next=new;
  }
  }
