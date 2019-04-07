cdef  extern  from  "linkedlist.c":
    cdef  struct LinkedListStruct :
        int  data
        LinkedListStruct  * next
    int  count ( LinkedListStruct *  head ,  int  data )
    LinkedListStruct *  add_tail ( LinkedListStruct *  head , int  data )
    LinkedListStruct *  add_head ( LinkedListStruct *  head , int  data )