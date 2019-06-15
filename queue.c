
#include <stdio.h>
#include <stdlib.h>

#define MAX 5

struct node 
{
	int queue[MAX];
	int first, last;
};

void push(int value) 
{
	struct node n;
	if (n.last == MAX - 1) 
	{
		printf("%s\n", "Queue is full...");
	} else
	{
		n.last++;
		n.queue[n.last - 1] = value;
		if (n.first == -1) {n.first = 0;}
	}
}

void print() {
	struct node n;
	if (n.first == -1)
	{
		printf("%sn", "You don't have element in queue!");
	} else
	{
		for (int i = n.first; i < n.last; i++)
		{
			printf("Push:[%d]\n", n.queue[i]);
		}
	}
}

void delete() {
	struct node n;
	int element;
	if (n.first == -1) {
		printf("%s\n", "You don't have element in queue!");
	} else
	{
		element = n.queue[n.first];
		n.first++;
		printf("%s%d] %s\n", "Element:[", element, "Status: deleted");
	}
}

int main(int argc, char const *argv[])
{
	push(5);
	push(6);
	push(7);
	print();
	delete();
	print();
	return 0;
}