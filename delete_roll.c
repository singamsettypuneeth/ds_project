#include<stdio.h>
   #include"student.h"
   void delete_roll(void)
   {
  
           if(head==0)
           {
                   printf("no records found\n");
                   return;
          }
 
  int num;
  char ch;
  printf("r/R:rollno\n n/N:name\n");
  scanf(" %c",&ch);
  if(ch=='r'||ch=='R')
  {
 printf("enter rollno:\n");
  scanf("%d",&num);
  sll *del=head,*prev;
  while(del)
  {
          if(del->rollno==num)
          {
                  if(del==head)
                 {
                          head=head->next;
                          return;
                  }
                  if(del==head)
                          head=del->next;
                 else
                  prev->next=del->next;
          free(del);
          return;
          }
         prev=del;
          del=del->next;
  }
 printf("num not found\n");
}
 else if(ch=='n'||ch=='N')
  {
          char s[20];
          printf("enter name to delete:\n");
          scanf("%s",s);
          sll *del=head,*prev;
         while(del)
          {
                 if(strcmp(s,del->name)==0)
                  {
                          if(del==head)
                         {
                          head=head->next;
                          return;
                          }
 
                  if(del==head)
                          head=del->next;
                  else
                   prev->next=del->next;
          free(del);
          return;
          }
          prev=del;
         del=del->next;
  }
  printf("name not found\n");
  }
  }
