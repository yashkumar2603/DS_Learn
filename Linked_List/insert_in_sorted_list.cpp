void SortedInsert(int x)
{
    Node *t = new Node;
    t->data = x;

    Node *p = first;
    Node *q = NULL;

    while (p && p->data < x)
    {
        q = p;
        p = p->next;
    }
    t = new Node;
    t->data = x;
    t->next = q->next;
    q->next = t;
}