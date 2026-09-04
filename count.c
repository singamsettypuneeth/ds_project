 #include"student.h"
int countnode(void)
   {
           int c=0;
           sll *p=head;
           while(p)
          {
                  c++;
                  p=p->next;
          }
          return c;
  }
 
