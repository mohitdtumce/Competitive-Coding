//6. Evaluation of Postfix Expression
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<string.h>

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

int IsMatchingPair(char a,char b){
	if(a=='(' && b==')')
		return 1;
	if(a=='[' && b==']')
		return 1;
	if(a=='{' && b=='}')
		return 1;
	return 0;
}

int ParenthesisMatching(char str[]){
	int n=strlen(str);
	struct Stack* S= CreateStack(n+1);
	int i;
	for(i=0;i<n;i++){
		if(str[i] == '[' || str[i] == '{' || str[i] == '('){
			Push(S,str[i]);
		}
		if(str[i] == ']' || str[i] == '}' || str[i] == ')'){
			if(Is_Empty(S)){
				return 0;
			}
			else if(!IsMatchingPair(Pop(S),str[i])){
				return 0;
			}
		}
	}
	if(Is_Empty(S)){
		return 1;
	}else{
		return 0;	
	}
}

int main(){
	char str[] = "{()}[]";
	if(ParenthesisMatching(str)){
		printf("1");
	}else{
		printf("0");
	}
	return 0;
}
