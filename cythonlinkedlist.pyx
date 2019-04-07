cimport  cythonlinkedlist  as  cll  #

cdef class LinkedList:
    cdef cll.LinkedListStruct *_head

    def  __cinit__ (self):

        self._head  =  NULL

    cpdef add_tail(self, int data):
        self._head = cll.add_tail(self._head, data)
        if self._head is NULL:
            raise MemoryError()

    cpdef add_head(self, int data):
        self._head = cll.add_head(self._head, data)
        if self._head is NULL:
            raise MemoryError()

    cpdef  count (self,int  data):
        return  cll.count (self._head,data )

    def  __iter__ (self):

        cdef  cll.LinkedListStruct * ptr  =  self._head
        while ptr is not NULL :
            yield  ptr.data  # implicit type conversion from int to a Python int of C
            ptr = ptr.next