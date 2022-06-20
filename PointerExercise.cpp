#include <iostream>
using namespace std;

struct node{
	int data;
	node *next;
};
int main(){

	node *oke = new node;
	node *head;
	oke->data = 12;
	head = oke;
	cout << head->data;

	return 0;
}			