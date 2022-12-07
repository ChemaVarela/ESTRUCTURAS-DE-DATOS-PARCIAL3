#include <stdio.h>
#include <stdlib.h>

#define CAPACIDAD 10

struct queue
{
    int data[CAPACIDAD + 1];
    int inicio;
    int fin;
    int contador;

};

void setupqueue(struct queue *q);
int queueempty(struct queue q);
int queuefull(struct queue q);
int enqueue(struct queue *q, int valor);

int main()
{
    struct queue studentqueue;

    setupqueue(&studentqueue);

    int empty = queueempty(studentqueue);

    int full = queuefull(studentqueue);

    int done;

    done = enqueue(&studentqueue, 10);
    done = enqueue(&studentqueue, 10);
    done = enqueue(&studentqueue, 10);
    done = enqueue(&studentqueue, 10);
    done = enqueue(&studentqueue, 10);
    done = enqueue(&studentqueue, 10);
    done = enqueue(&studentqueue, 10);
    done = enqueue(&studentqueue, 10);
    done = enqueue(&studentqueue, 10);
    done = enqueue(&studentqueue, 10);
    done = enqueue(&studentqueue, 10);
    done = enqueue(&studentqueue, 10);
    done = enqueue(&studentqueue, 10);







    printf("Hola Mundo!");

    return 0;

}

int enqueue(struct queue *q, int valor)

{
    int r = 0;

    if(queuefull(*q) == 0){

        q->data[q->fin] = valor;
        q->fin++;

        if(q->fin > CAPACIDAD)
                q->fin = 0;

        r = 1;
    }

    return r;

}

int queueempty(struct queue q)
{
    if(q.inicio == q.fin)
        return 1;
    return 0;
}

int queuefull(struct queue q)
{
    if((q.fin+1)%(CAPACIDAD+1) == q.inicio)
        return 1;
    return 0;
}

void setupqueue(struct queue *q)
{
    q -> inicio = 0;
    q -> fin = 0;

    q -> contador = 0;
}
