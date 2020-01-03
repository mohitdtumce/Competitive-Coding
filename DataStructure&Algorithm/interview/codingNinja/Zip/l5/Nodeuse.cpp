#include <iostream>
#include "Node.h"
using namespace std;

int* temp() {
	int i;
	return &i;
}

Node* llinput() {
	int n;
	cout << "Enter first element" << endl;
	cin >> n;
	Node* head = NULL;
	Node* tail = NULL;
	while (n != -1) {
		Node* newNode = new Node(n);
		if (head == NULL) {
			head = newNode;
			tail = head;
		} else {
			tail->next = newNode;
			tail = newNode;
		}
		cin >> n;
	}
	return head;
}

void printLL(Node* head) {
	while (head != NULL) {
		cout << head->getData() << " ";
		head = head->next;
	}
	cout << endl;
}

int main() {
	Node* head = llinput();
	printLL(head);
	printLL(head);
	delete head;
	/*
	while (head != NULL) {
		Node* temp = head;
		head = head->next;
		delete temp;
	}
	*/
}

