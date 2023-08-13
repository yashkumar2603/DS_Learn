void Insert(struct node *p, int index, int x)
{
    struct Node *t;
    if (index < 0 || index > count(p)) // invalid insertion
        return 0;

    t = new Node;
    t->data = x;

    if (index == 0)
    {
        t->next = first;
        first = t;
    }
    else
    {
        for (i = 0; i < index - 1; i++)
        {
            p = p->next;
        }
        t->next = p->next;
        p->next = t;
    }
}
