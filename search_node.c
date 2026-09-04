#include"student.h"
void search_node(void)
{
           if(head==0)
                {
                        printf("no records found\n");
                        return;
                }
        int f=0;
        char ch;

                printf("enter  r/R :for roll and n/N:for name and p/P:for percentage\n");
        printf("enter a char\n");
        scanf(" %c",&ch);
        if(ch=='r'||ch=='R')
        {
                int num;
                printf("enter a num:\n");
                scanf("%d",&num);
                sll *ptr=head;
                while(ptr)
                {
                        if(ptr->rollno==num)
                        {
                                printf("enter the string and percentage:\n");
                                scanf("%s %f",ptr->name,&ptr->percentage);
                                f=1;
                        }
                        ptr=ptr->next;
                }
                if(f==0)
                        printf("num not found\n");
}

        else if(ch=='n'||ch=='N')
        {
                char s[20];
                printf("enter name\n");
                scanf("%s",s);
                sll *ptr=head;
                while(ptr)
                {
                        if(strcmp(ptr->name,s)==0)
                        {
                                printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
                                f=1;
                        }

                        ptr=ptr->next;
                }
                if(f==0)
                        printf("no name found\n");
        }

        else if(ch=='p'||ch=='P')
        {
                int percentage;
                printf("enter percentage\n");
                scanf("%d",&percentage);
                sll *ptr=head;
                while(ptr)
                {
                        if(ptr->percentage==percentage)
                        {
                                printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
                                f=1;
                        }
                        ptr=ptr->next;
                }
                if(f==0)
                        printf("no name found\n");
        }
}
