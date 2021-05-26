#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    char *arr;
};

short isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
        return 1;
    else
        return 0;
}

short isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
        return 1;
    else
        return 0;
}

void push(struct stack *ptr, char val)
{
    if (isFull(ptr))
        printf("stack overflow");
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

char stackTop(struct stack *sp)
{
    return sp->arr[sp->top];
}

char pop(struct stack *ptr)
{
    if (isEmpty(ptr))
        printf("stack underflow");
    else
    {
        char temp = ptr->arr[ptr->top];
        ptr->top--;
        return temp;
    }
    return -1;
}

int match(char ch1, char ch2)
{
    if(ch1=='{' && ch2=='}')
        return 1;
    if(ch1=='[' && ch2==']')
        return 1;
    if(ch1=='(' && ch2==')')
        return 1;
    return 0;
}

int parenthesisMatch(char *exp)
{
    //create and initialise an stack
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    char popped_ch;

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
            push(sp, exp[i]);
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if (isEmpty(sp))
                return 0;
            popped_ch = pop(sp);
            if (!(match(popped_ch, exp[i])))
                return 0;
        }
    }
    if (isEmpty(sp))
        return 1;
    else
        return 0;
}

int main()
{
    char *exp = "((8)(*--*9))";
    if (parenthesisMatch(exp))
        printf("The parenthesis is balanced");
    else
        printf("The parenthesis is not balanced");
}