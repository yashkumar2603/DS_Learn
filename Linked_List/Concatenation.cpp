// we have first, head of first LL.
// we have second, head of second LL.

void concat(first, second)
{
    Node *p = first;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = second;
}