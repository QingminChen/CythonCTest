#include <stdlib.h>
#include <stdio.h>

typedef struct LinkedListStruct{
    int data;
    struct LinkedListStruct *next;
}LinkedListStruct;

LinkedListStruct* add_tail(LinkedListStruct* head, int data)
{

    LinkedListStruct *obj = (LinkedListStruct *)malloc(sizeof(LinkedListStruct));
    if(obj == NULL){
        fprintf(stderr,"malloc failed\n");
        exit(1);
    }

    obj-> next  =  NULL ;
    obj-> data  =  data ;

    if(head == NULL){
        return obj;
    }else{
        LinkedListStruct *ptr = head;
        while(ptr->next != NULL){
            ptr = ptr->next;
        }
        ptr->next = obj;
        return head;
    }
}

LinkedListStruct* add_head(LinkedListStruct* head, int data)
{

    LinkedListStruct *obj = (LinkedListStruct *)malloc(sizeof(LinkedListStruct));
    if(obj == NULL){
        fprintf(stderr,"malloc failed\n");
        exit(1);
    }

    obj-> next  =  NULL ;
    obj-> data  =  data ;

    if(head == NULL){
        return obj;
    }else{
        LinkedListStruct *ptr = head;
        obj-> next = ptr;
        head = obj;
        return head;
//        while(ptr->next != NULL){
//            ptr = ptr->next;
//        }
//        ptr->next = obj;
//        return head;
    }
}

int count(LinkedListStruct *ptr, int data)
{
    int c = 0;
    while(ptr != NULL){
        if(ptr->data == data){
            c += 1;
        }
        ptr = ptr->next;
    }
    return c;
}


//int  main ( void ) {
//
//    LinkedListStruct * head = NULL ;
//
//    head = add_head(head,1);
//    head = add_head(head,2);
//    head = add_head(head,3);
//
//    LinkedListStruct *ptr = head;
//    while(ptr != NULL){
//        printf("%d, ", ptr->data);
//        ptr = ptr->next;
//    }
//    printf("\n");
//}
