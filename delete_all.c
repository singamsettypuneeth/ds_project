#include"student.h"
   void delete_all(void)
   {
  
  
           if(head==0)
           {
                   printf("no records found\n");
                   return;
          }
 
          sll *del=head;
          while(del)
          {
                  head=del->next;
                  free(del);
                  del=head;
          }
  }
