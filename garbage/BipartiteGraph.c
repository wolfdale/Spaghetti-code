#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int front = -1, rear = -1;
int V, E; //V for number of vertices and E for number of edges
int queue[100];

//function to be implemented
int isGraphBipartite(int **G);


/*.......Functions for queue.......*/

//function returns 1 if queue is empty and 0 otherwise

int isEmpty(int queue[]) {
    if (front == -1)
        return 1;
    else
        return 0;
}

//returns front element of queue

int getFront(int queue[]) {
    if (front == -1) {
        printf("\n Underflow");
    }
    return queue[front];
}


//function enqueue element into the given queue

void enqueue(int queue[], int num) {
    if (front == 0 && rear == MAX - 1)
        printf("\n Queue OverFlow Occured");
    else if (front == -1 && rear == -1) {
        front = rear = 0;
        queue[rear] = num;
    } else if (rear == MAX - 1 && front != 0) {
        rear = 0;
        queue[rear] = num;
    } else {
        rear++;
        queue[rear] = num;
    }
}

//function dequeue element from the given queue

void dequeue(int queue[]) {
    if (front == -1) {
        printf("\n Underflow");
    }
    if (front == rear)
        front = rear = -1;
    else {
        if (front == MAX - 1)
            front = 0;
        else
            front++;
    }
}

//prints the queue

void display_queue(int queue[]) {
    int i;
    if (front == -1)
        printf("\n No elements to display");
    else {
        printf("\n The queue elements are:\n ");
        for (i = front; i <= rear; i++) {
            printf("\t %d", queue[i]);
        }
    }
}
/*..............*/

/*.......Main function.......*/
int main() {

    int i;
    int **graph;
    // The vertices are numbered from 0 to V-1
    scanf("%d %d", &V, &E);

    graph = (int **) malloc(sizeof (int *)*V);

    for (i = 0; i < V; i++)
        graph[i] = (int *) malloc(sizeof (int)*V);

    for (i = 0; i < E; i++) {
        int s, d;
        scanf("%d %d", &s, &d);
        graph[s][d] = 1;
        graph[d][s] = 1;
    }

    /*
    Use functions of queue in following manner:
    1. enqueue(queue, 0);	-- enqueue element in the queue
    2. dequeue(queue);	-- dequeue element from the queue
    3. int front = getFront(queue);	-- to get the front element in the queue
    4. isEmpty(queue) -- to check whether queue is empty or not
    */

    if(isGraphBipartite(graph)){
    	printf("yes");
    }else{
    	printf("no");
    }


    return 0;
}


int initColorMatrix(int color[], int N)
{
    int i;
    for (i = 0; i < N; ++i)
        color[i] = -1;
}

int isGraphBipartite(int **G)
    {
    int src=0;
    int colorMatrix[V], color, temp, u;

    initColorMatrix(colorMatrix, V);



    color = 1;
    colorMatrix[src] = color;
    enqueue(queue, src);

    while (!isEmpty(queue))
    {
        temp =getFront(queue);
         dequeue(queue);

        // assign alternate color to its neighbor
        color = 1 - colorMatrix[temp];

    	for (u = 0; u < V; ++u)
        {
        	// an edge exists and destination not colored
        	if (G[temp][u] && colorMatrix[u] == -1)
	        {
		        colorMatrix[u] = color;
                	enqueue(queue, u);
	        }

            else if (G[temp][u] && colorMatrix[u] == colorMatrix[temp])
                return 0;
        }
    }

    return 1;
}
