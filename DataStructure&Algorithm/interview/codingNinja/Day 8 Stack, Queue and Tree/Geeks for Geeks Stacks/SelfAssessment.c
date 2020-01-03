//Self Assesssment
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>

struct Stack{
	int top;
	unsigned capacity;
	char* array;
};

struct Stack* CreateStack(unsigned capacity){
	struct Stack* S = (struct Stack*)malloc(sizeof(struct Stack));
	S->top=-1;
	S->capacity=capacity;
	S->array=(char*)malloc(S->capacity*sizeof(char));
	return S;
}

int IsEmpty(struct Stack* S){
	return(S->top==-1);
}

int IsFull(struct Stack* S){
	return(S->top==(S->capacity-1));
}

void Push(struct Stack* S,char data){
	if(IsFull(S)){
		return;
	}
	S->array[++S->top]=data;
	//printf("%c Pushed\n",S->array[S->top]);
}

char Pop(struct Stack* S){
	if(IsEmpty(S)){
		return CHAR_MIN;
	}
	return(S->array[S->top--]);
}

char Peek(struct Stack* S){
	if(IsEmpty(S)){
		return CHAR_MIN;
	}
	return(S->array[S->top]);
}

int IsMatching(char a,char b){
	if(a=='[' && b ==']')
		return 1;
	if(a=='{' && b =='}')
		return 1;
	if(a=='(' && b ==')')
		return 1;
	return 0;
}

int ParenthesisBalance(char str[]){
	int n = strlen(str);
	struct Stack* S= CreateStack(n);
	int i;
	for(i=0;i<n;i++){
		if(str[i]=='{' || str[i]== '[' || str[i] == '('){
			Push(S,str[i]);
		}
		if(str[i]=='}' || str[i]== ']' || str[i] == ')'){
			if(IsEmpty(S)){
				return 0;
			}else if(!IsMatching(Pop(S),str[i])){
				return 0;
			}
		}
	}
	if(IsEmpty(S)){
		return 1;
	}else
		return 0;
}
int main(){
	char str[] = "{{{{{{{{(((())){{{{{{{}}}}})}}}}}}}}";
	if(ParenthesisBalance(str)){
		printf("1");
	}else{
		printf("0");
	}
	return 0;	
}
