#include <stdio.h>

typedef struct list{
	int data;
	struct list* next;
}list_t;


int main(void)
{
	list_t node = {10, NULL};
	list_t node1 = {20, NULL};

	list_t head = {0};
	list_t tail = {0};

	head.next = &node;
	node.next = &node1;
	node1.next = &tail;
	
	list_t* p_node = NULL;
	for(p_node = &head; p_node != &tail; p_node = p_node -> next){
		list_t* p_first = p_node;
		list_t* p_mid = p_first -> next;
		list_t* p_last = p_mid -> next;
		if(p_mid != &tail)
		printf("%d ",p_mid -> data);
	}
	printf("\n");

	list_t node2 = {30,NULL};
	for(p_node = &head; p_node != &tail; p_node = p_node -> next){
		list_t* p_first = p_node;
		list_t* p_mid = p_first -> next;
		list_t* p_last = p_mid -> next;
		if(p_mid -> data > node2.data || p_mid == &tail){
			p_first -> next = &node2;
			node2.next = p_mid;
			break;
		}
	}

	for(p_node = &head; p_node != &tail; p_node = p_node -> next){
		list_t* p_first = p_node;
		list_t* p_mid = p_first -> next;
		list_t* p_last = p_mid -> next;
		if(p_mid != &tail)
		printf("%d ",p_mid -> data);
	}
	printf("\n");

	list_t node3 = {40,NULL};
	for(p_node = &head; p_node != &tail; p_node = p_node -> next){
		list_t* p_first = p_node;
		list_t* p_mid = p_first -> next;
		list_t* p_last = p_mid -> next;
		if(p_mid -> data > node3.data || p_mid == &tail){
			p_first -> next = &node3;
			node3.next = p_mid;
			break;
		}
	}

	for(p_node = &head; p_node != &tail; p_node = p_node -> next){
		list_t* p_first = p_node;
		list_t* p_mid = p_first -> next;
		list_t* p_last = p_mid -> next;
		if(p_mid != &tail)
			printf("%d ",p_mid -> data);
	}
	printf("\n");

	for(p_node = &head; p_node != &tail; p_node = p_node -> next){
		list_t* p_first = p_node;
		list_t* p_mid = p_first -> next;
		list_t* p_last = p_mid -> next;
		if(30 == p_mid -> data){
			p_first -> next = p_last;
			break;
		}
	}

	for(p_node = &head; p_node != &tail; p_node = p_node -> next){
		list_t* p_first = p_node;
		list_t* p_mid = p_first -> next;
		list_t* p_last = p_mid -> next;
		if(p_mid != &tail)
			printf("%d ",p_mid -> data);
	}
	printf("\n");
	return 0;
}
