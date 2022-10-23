typedef struct MyLinkedList {
    int val;
    struct MyLinkedList* next;
} MyLinkedList;


int CountIndex(MyLinkedList* obj)
{
    int count = 0;
    MyLinkedList* currrent = obj;
    while (currrent != NULL)
    {
        currrent = currrent->next;
        count++;
    }
    
    return count;
}


MyLinkedList* myLinkedListCreate() {
    MyLinkedList* node = (MyLinkedList*)malloc(sizeof(MyLinkedList));
    node->next = NULL;
    return node;
}

int myLinkedListGet(MyLinkedList* obj, int index) {
    MyLinkedList* pnode = obj;
    int count = 0;
    while (pnode != NULL)
    {
        if (pnode->val == index)
            return count;
        pnode = pnode->next;
        count++;
    }
    return -1;
}

void myLinkedListAddAtHead(MyLinkedList* obj, int val) {
    MyLinkedList* pnew = (MyLinkedList*)malloc(sizeof(MyLinkedList));
    pnew->val = val;
    pnew->next = obj;
    obj = pnew;
}

void myLinkedListAddAtTail(MyLinkedList* obj, int val) {
    MyLinkedList* pnew = (MyLinkedList*)malloc(sizeof(MyLinkedList));
    pnew->val = val;
    pnew->next = NULL;

    MyLinkedList* currrent = obj;
    while (currrent != NULL)
    {
        currrent = currrent->next;
    }
    currrent = pnew;
}

void myLinkedListAddAtIndex(MyLinkedList* obj, int index, int val) {
    int count = CountIndex(obj);
    MyLinkedList* currrent = obj;

    if (index < 0)
    {
        myLinkedListAddAtHead(currrent, val);
    }
    else if (index < count)
    {
        count = 0;
        currrent = obj;
        while (1)
        {
            if (count == index)
                break;
            currrent = currrent->next;
            count++;
        }

        MyLinkedList* tmp = currrent->next;
        MyLinkedList* pnew = (MyLinkedList*)malloc(sizeof(MyLinkedList));
        pnew->val = val;
        pnew->next = tmp;
        currrent->next = pnew;
    }
    else if (index == count)
    {
        myLinkedListAddAtTail(currrent, val);
    }
}

void myLinkedListDeleteAtIndex(MyLinkedList* obj, int index) {
    int ret = CountIndex(obj);
    MyLinkedList* currrent;
    MyLinkedList* tmp;
    if (index <= ret)
    {
        ret = 0;
        while (1)
        {
            if (ret == index)
                break;
            currrent = currrent->next;
            ret++;
        }

        tmp = currrent->next;
        currrent = currrent->next->next;
        free(tmp);
    }
}

void myLinkedListFree(MyLinkedList* obj) {
    MyLinkedList* currrent;
    while (currrent != NULL)
    {
        currrent = obj->next;
        free(obj);
        obj = currrent;
    }
}
