    #include <stdio.h>
    #include <stdlib.h>
    #include "ipg.h"

     
    struct node {
       int data;
       struct node *next;
    };
     
    struct node *start = NULL;
  
    int count = 0;
     
    void main () {
       int input, data;
       
       
          printf("1. Insert an element at beginning of linked list.\n");
          printf("2. Insert an element at end of linked list.\n");
          printf("3. Traverse linked list.\n");
          printf("4. Delete element from beginning.\n");
          printf("5. Delete element from end.\n");
          printf("6. Exit\n");
	 printf("enter your choice");     
          scanf("%d", &input);
         switch(input)
	{
        			
	case 1:
							 				
             printf("Enter value of element\n");
             scanf("%d", &data);
             insert_at_begin(data);
    					break;      
	case 2:
         
             printf("Enter value of element\n");
             scanf("%d", &data);
             insert_at_end(data);
							break;
        case 3:  
          
             traverse();
							break;
          case 4:
             delete_from_begin();
							break;  
          case 5:
             delete_from_end();
							break;
          case 6:
             break;
				
          default:
             printf("Please enter valid input.\n");      
       }
	
      
    }
     
    
     
    
