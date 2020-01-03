//1-> Stack Introduction
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct Stack{
	int top;
	int capacity;
	int* array;
};

struct Stack* CreateStack(int capacity){
	struct Stack* S= (struct Stack*)malloc(sizeof(struct Stack));
	S->top=-1;
	S->capacity=capacity;
	S->array=(int *)malloc(S->capacity*sizeof(int));
	return S;
}

int Is_Full(struct Stack* S){
	if(S->top==(S->capacity-1))
		return 1;
	return 0;
}

int Is_Empty(struct Stack *S){
	if(S->top==-1){
		return 1;
	}
	return 0;
}

void Push(struct Stack* S,int data){
	if(Is_Full(S)){
		printf("Stack OverFlow\n");
		return;
	}
	S->array[++S->top] = data;
	//printf("|	%d	|\n",S->array[S->top]);
}

int Pop(struct Stack* S){
	if(Is_Empty(S)){
		printf("Stack UnderFlow\n");
		return INT_MIN;
	}
	return (S->array[S->top--]);
}

int Peek(struct Stack* S){
	if (Is_Empty(S))
		return INT_MIN;
	return S->array[S->top];
}

// Driver program
int main(){
	struct Stack* S = CreateStack(100);
	Push(S, 10);
	Push(S, 20);
	Push(S, 30);
	printf("%d popped from stack\n", Pop(S));
	printf("Top item is %d\n", Peek(S));
	return 0;
}
