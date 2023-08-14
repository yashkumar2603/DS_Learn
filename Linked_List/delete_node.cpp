void Delete(struct Node *p, int index)
{
    struct Node *q;
    int x = -1, i;

    if(index<1 || index>count(p)
        return -1;
    if(index==1)
    {
        q = first;
        x = first->data;
        first = first->next;
        delete q;
        return x;
    }
    else
    {
        for (i = 0; i < index - 1; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        delete p;
    }
}