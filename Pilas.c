#include <stdio.h>
#define CAPACIDAD 3


typedef struct{
    int arreglo[CAPACIDAD];
    int tope;
}Stack;

void setupStack(Stack *s);
int isStackEmpty(Stack *s);
int isStackFull(Stack *q);
void push(Stack *s, int value);
int pop(Stack *s);

int main()
{
    Stack stack;

    int valor;

    setupStack(&stack);

    push(&stack,9);
    push(&stack,11);
    push(&stack,8);
    push(&stack,7);

    dato=pop(&stack);
    printf("Valor eliminado: %d \n",dato);


    return 0;
}


void setupStack (Stack *s)
{
    s->tope=0;
}



int isStackEmpty(Stack *s)
{
    if(s->tope==0){
        return 1;
    }
    return 0;
}



int isStackFull(Stack *s)
{
    if(s->tope==CAPACIDAD){
        return 1;
    }
    return 0;
}



void push(Stack *s, int value)
{
    if(isStackFull(s)){
        printf("La pila esta llena\n");
    }else{
        s->arreglo[s->tope]=value;
        s->tope++;
    }
}


int pop(Stack *s)
{
    if(isStackEmpty(s)){
        printf("La pila esta vacia\n");
        return -1;
    }else{
        s->tope--;
        return s->arreglo[s->tope];
    }
}
