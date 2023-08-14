void insertLast(int x)
{
    Node *t = new Node;
    t->data = x;
    t->next = NULL; // new node is ready.

    if (first == NULL)
        first = last = t;

    else
    {
        last->next = t;
        last = t;
    }
}