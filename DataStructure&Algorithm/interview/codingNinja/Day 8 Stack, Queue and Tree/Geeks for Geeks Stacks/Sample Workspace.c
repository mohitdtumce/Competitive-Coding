#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct Stack{
	int top;
	int capacity;
	char* array;
};

struct Stack* CreateStack(int capacity){
	struct Stack* S= (struct Stack*)malloc(sizeof(struct Stack));
	S->top=-1;
	S->capacity=capacity;
	S->array=(char *)malloc(S->capacity*sizeof(char));
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

void Push(struct Stack* S,char data){
	if(Is_Full(S)){
		printf("Stack OverFlow\n");
		return;
	}
	S->array[++S->top] = data;
	//printf("|	%d	|\n",S->array[S->top]);
}

char Pop(struct Stack* S){
	if(Is_Empty(S)){
		printf("Stack UnderFlow\n");
		return CHAR_MIN;
	}
	return (S->array[S->top--]);
}

char Peek(struct Stack* S){
	if (Is_Empty(S))
		return CHAR_MIN;
	return S->array[S->top];
}

int main(){

	return 0;
}
