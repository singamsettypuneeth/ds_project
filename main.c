 #include<stdio.h>
   #include"student.h"
  
  
   sll *head=0;
   int main()
   {
           int c;
           char op;
          while(1)
          {
                  printf("enter your choice:\n");
                  printf("a/A.add d/D.delete_roll p/P.display s/S.savefile c/C. count h/H.sort i/I.delete_all r/R. reverse v/V.search_node e/E.exit:\n");
                  scanf(" %c",&op);
                  switch(op)
                  {
                          case 'A':
                          case 'a':add_node();break;
                          case 'D':
                          case 'd':delete_roll();break;
                          case 'P':
                          case 'p':display();break;
                          case 'S':
                          case 's':savefile();break;
                          case 'C':
                          case 'c':c=countnode();
                                  printf("%d\n",c);break;
                          case 'H':
                          case 'h':sort_name();break;
                          case 'I':
                          case 'i':delete_all();break;
                          case 'R':
                          case 'r':reverse_link();break;
                          case 'V':
                          case 'v':search_node();break;
                         case 'E':
                          case 'e':exit(0);
 
                  }
         }
   }
