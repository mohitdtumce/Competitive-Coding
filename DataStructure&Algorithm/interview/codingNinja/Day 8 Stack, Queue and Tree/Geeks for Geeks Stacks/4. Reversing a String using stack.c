// Reverse a string using Stack
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
		return INT_MIN;
	return S->array[S->top];
}

void Reverse(char str[]){
	int n = strlen(str);
	struct Stack* S = CreateStack(n+1);
	int i=0;
	for(i=0;i<n;i++){
		Push(S,str[i]);
	}
	for(i= 0; i < n; i++){
		str[i] = Pop(S);
	}
}

int main(){
	char str[]="GeeksQuiz";
	Reverse(str);
	printf("Reversed string is %s", str);
	return 0;
}
