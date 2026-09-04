#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
typedef struct student
{
        int rollno;
        char name[20];
        float percentage;
        struct student *next;
}sll;
extern sll *head;
void add_node(void);
void delete_roll(void);
void display(void);
void savefile(void);
int countnode(void);
void sort_name(void);
void delete_all(void);
void reverse_link(void);
void search_node(void);
