//3. Evaluating Postfix Expressions
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<string.h>

struct Stack{
	int top;
	unsigned capacity;
	int* array;
};

struct Stack* CreateStack(unsigned capacity){
	struct Stack* S= (struct Stack*)malloc(sizeof(struct Stack));
	S->top=-1;
	S->capacity=capacity;
	S->array=(int*)malloc(S->capacity*sizeof(int));
	return S;
}

int IsEmpty(struct Stack* S){
	return(S->top==-1);
}

int IsFull(struct Stack* S){
	return(S->top==(S->capacity-1));
}

void Push(struct Stack* S,int data){
	if(IsFull(S)){
		return ;
	}
	S->array[++S->top]=data;
}

int Pop(struct Stack* S){
	if(IsEmpty(S)){
		return INT_MIN;
	}
	return(S->array[S->top--]);
}

int PostFixEval(char str[]){
	int n=strlen(str);
	struct Stack* S= CreateStack(n);
	int i,val1,val2;
	for(i=0;i<n;i++){
		if(str[i] >= 48 && str[i] <= 57){
			Push(S,str[i]-'0');
		}else{
			val1=Pop(S);
			val2=Pop(S);
			switch(str[i]){
				case '+': Push(S,(val2+val1)); break;
				case '-': Push(S,(val2-val1)); break;
				case '*': Push(S,(val2*val1)); break;
				case '/': Push(S,(val2/val1)); break;
			}
		}
	}
	return(Pop(S));
}
int main(){
	char str[]="231*+9-";
	printf ("Value of %s is %d", str, PostFixEval(str));
	return 0;
}

