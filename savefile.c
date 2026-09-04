 #include"student.h"
void savefile(void)
   {
   sll *t=head;
           if(t==0)
           {
                   printf("no records found:\n");
                   return;
           }
         FILE *fp=fopen("data","w");
          while(t)
          {
                  fprintf(fp,"%d %s %f\n",t->rollno,t->name,t->percentage);
                  t=t->next;
          }
          printf("data is saved\n");
 
  }
