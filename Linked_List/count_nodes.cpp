
int count(struct Node *p)
{
    int count = 0;
    while (p != 0)
    {
        count++;
        p = p->next;
    }
    return count;
}

int Recursive_count(struct Node *p)
{
    int count = 0;
    if (p == 0)
    {
        return 0;
    }
    else
        return count(p->next) + 1;
}