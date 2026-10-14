#include<stdio.h>
#include"student.h"
void delete_roll(void)
{

        if(head==0)
        {
                printf("no records found\n");
                return;
        }

int num,flag=0;
char ch;
printf("r/R:rollno\n n/N:name\n");
scanf(" %c",&ch);
if(ch=='r'||ch=='R')
{
printf("enter rollno:\n");
scanf("%d",&num);
sll *del=head,*prev=NULL;
while(del)
{
        if(del->rollno==num)
        {

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
        int n;
        printf("enter name to delete:\n");
        scanf("%s",s);
        sll *t=head;
        int c=0;
        while(t)
        {
                if(strcmp(t->name,s)==0)
                        c++;
                        t=t->next;
        }
        if(c==0)
                printf("name not found:\n");

        else if(c==1)
                {
                        sll *del=head,*prev=NULL;
                        while(del)
                        {
                                sll *p=del->next;
                                if(strcmp(s,del->name)==0)
                                {
                                        if(del==head)
                                                head=p;
                                                else
                                                        prev->next=p;
                                                        free(del);
                                                        break;
                                }
                                prev=del;
                                del=p;
                        }
                        printf("deleted\n");
                }

        else
        {
                int n;
                printf("duplicate name found %d times\nenter rollno to delete:\n",c);
                scanf("%d",&n);
                sll *del=head,*prev=NULL;
                int flag=0;
                while(del)
                {
                        sll *p=del->next;
                        if(strcmp(s,del->name)==0 &&n==del->rollno)
                        {
                                flag=1;
                                if(del==head)
                                        head=p;
                                        else
                                                prev->next=p;
                                                free(del);
                                                del=p;
                                                break;
                        }
                        else
                        {
                                prev=del;
                                del=p;
                        }
                }
                if(flag==0)
                        printf("rollno not foundfor that name\n");
                        else
                                printf("deleted\n");
        }
}
}
