#include"student.h"
   void display()
  {
           if(head==0)
           {
                   printf("no record found:\n");
                   return;
         }
          sll *ptr=head;
          while(ptr)
          {
                  printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
                  ptr=ptr->next;
         }
  }
