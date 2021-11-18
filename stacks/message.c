#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long int

typedef struct stack
{
    int size;
    int top;
    int *arr;
} STACK;

STACK *build(int capacity)
{
    STACK *s;
    s = (STACK *)malloc(sizeof(STACK));
    s->size = capacity;
    s->top = -1;
    s->arr = (int *)malloc(capacity * sizeof(int));
    return s;
}

int isFull(STACK *s)
{
    if (s->top == (s->size) - 1)
        return 1;
    else
        return 0;
}

int isEmpty(STACK *s)
{
    if (s->top == -1)
        return 1;
    else
        return 0;
}

void push(STACK *s, int value)
{
    if ((s->top) >= (s->size) - 1)
    {
        printf("Stack Overflow\n");
        return;
    }
    (s->top)++;
    s->arr[s->top] = value;
}

int pop(STACK *s)
{
    if (s->top < 0)
    {
        printf("Stack Underflow\n");
    }
    int val = s->arr[s->top];
    s->arr[s->top] = 0;
    (s->top)--;
    return val;
}

int isRBS(char *s)
{
    ll count = strlen(s);
    STACK *rbs;
    rbs = build(count);
    for (ll i = 0; i < count; i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            push(rbs, s[i]);
        }
        else if (s[i] == ')')
        {
            if (isEmpty(rbs))
                return 0;
            if (rbs->arr[rbs->top] == '(')
                pop(rbs);
            else
                return 0;
        }
        else if (s[i] == '}')
        {
            if (isEmpty(rbs))
                return 0;
            if (rbs->arr[rbs->top] == '{')
                pop(rbs);
            else
                return 0;
        }
        else if (s[i] == ']')
        {
            if (isEmpty(rbs))
                return 0;
            if (rbs->arr[rbs->top] == '[')
                pop(rbs);
            else
                return 0;
        }
    }
    if (isEmpty(rbs))
        return 1;
    else
        return 0;
}

int order(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    return -1;
}

char *infixToPostfix(char s[])
{
    char *c = (char*)malloc(strlen(s)*sizeof(char));
    int j = 0;
    STACK *a;
    a = build(strlen(s)); //stack
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^')
        {

            while (!isEmpty(a) && order(s[i]) <= order(a->arr[a->top]))
            {
                c[j] = pop(a);
                j++;
            }
            push(a, s[i]);
        }
        else if (s[i] == '(' || s[i] == ')')
        {
            if (s[i] == '(')
                push(a, '(');
            if (s[i] == ')')
            {
                while (!isEmpty(a) && a->arr[a->top] != '(')
                {
                    c[j] = pop(a);
                    j++;
                }
                int xyz = pop(a);
            }
        }
        else
        {
            c[j] = s[i];
            j++;
        }
    }
    while (!isEmpty(a))
    {
        c[j] = pop(a);
        j++;
    }
    return c;
    // printf("Postfix:- ");
    // for (ll i = 0; i < j; i++)
    // {
    //     printf("%c", c[i]);
    // }
    // printf("\n");
}

void rev(char s[])
{
    int i = 0, j = strlen(s) - 1;
    while (i < j)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}

void infixToPrefix(char s[])
{
    // printf("%s\n",s);
    rev(s);
    // printf("%s\n",s);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == '(')
            s[i] = ')';
        else if (s[i] == ')')
            s[i] = '(';
    }
    // printf("%s\n",s);
    char *an = infixToPostfix(s);
    // printf("%s\n",an);
    
    rev(an);
    printf("Prefix is %s\n",an);
    free(an);
}

int main()
{
    char ch[100];
    scanf("%s", ch);
    printf("%s", infixToPostfix(ch));
    return 0;
}