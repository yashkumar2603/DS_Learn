Node *search(Node *p, int key)
{
    Node *q = NULL;
    while (p != Null)
    {
        if (keey == p->data)
        {
            q->next = p->next;
            p->next = first;
        }
        q = p;
        p = p->next;
    }
}