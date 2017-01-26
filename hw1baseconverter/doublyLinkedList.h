/*
Benjamin Horn
University of Cincinnati
Computer Science
MBA Data Science
*/

/*
Singly and Doubly Linked List Implementations
Headers File Listed below
#include "singlyLinkedList.h"
#include "doublyLinkedList.h"
*/




#include <iostream>
#include <stdio.h>
#include <string>

struct doubly_linked_node{ // DONE2 - this is the node structure, holding an integer and a pointer to the next node
	int node_data;
	doubly_linked_node* next;
	doubly_linked_node* prev;
};


class doublyLinkedList
{
public:
	doublyLinkedList(){ // DONE2 - starts a new, empty list
		head = NULL;
		tail = NULL;
		doubly_linked_list_size = 0;
	}

	~doublyLinkedList(){ // DONE2 - clears out the list to prevent memory leaks]
		doubly_linked_node* temp = head;
		while (temp) {
			doubly_linked_node* to_delete = temp;
			temp = temp->next;
			delete to_delete;
		}
		head = NULL;
		tail = NULL;
	}

	int getSizeQuick2(){ // DONE2 - returns the number of nodes stored in the list
		return doubly_linked_list_size;
	}

	int getSizeWithFwdTraversal(){ // DONE2 - traverse the list front to back and count the size
		if (!head){
			return 0;
		}
		doubly_linked_node*temp = head;
		int traversal_size = 0;
		while (temp->next){ // will take us to second to last node
			temp = temp->next;
			traversal_size++;
		}
		return traversal_size + 1;
	}

	int getSizeWithBwdTraversal(){ // DONE2 - traverse the list backwards to get the size
		if (!head){
			return 0;
		}
		doubly_linked_node*temp = tail;
		int traversal_size = 0;
		while (temp->prev){ // will take us to second to last node
			temp = temp->prev;
			traversal_size++;
		}
		return traversal_size + 1;
	}

	void pushFront2(int value){ // DONE2 - push onto the front of the list, effectively becomes first item
		doubly_linked_list_size++;// increase size of the list
		if (!head){
			doubly_linked_node* temp = new doubly_linked_node;
			temp->node_data = value;
			temp->next = head; // which would be NULL in this case
			temp->prev = NULL;
			head = temp;
			tail = temp;
		}
		else{
			doubly_linked_node* temp = new doubly_linked_node;
			temp->node_data = value;
			temp->next = head;
			temp->prev = NULL;
			head = temp;
			doubly_linked_node* second_node = temp->next;
			second_node->prev = temp;
			return;
		}
	}

	void pushBack2(int value){ // DONE - Push onto the end of the list, effectively becomes last item
		if (head == NULL){ // list is empty... (you could also do if getSizeQuick2() == 0))
			pushFront2(value); // sp just push it onto the front
			return; // done with push onto the list
		}
		// else, there are already items in the list
		doubly_linked_list_size++; // increase size of the list
		doubly_linked_node* temp = tail;

		doubly_linked_node* new_node = new doubly_linked_node;
		new_node->node_data = value;
		new_node->next = NULL; // effectively becomes last node in the list. Therefore points to null
		new_node->prev = tail;
		temp->next = new_node;
		tail = new_node;
	}

	/*
	void sortList(){
	if (!head || head->next == NULL){
	return;
	}
	doubly_linked_node* prev = head;
	doubly_linked_node* temp = head->next;

	while (temp->next){
	doubly_linked_node* temp_next = temp->next;
	if (temp->node_data > temp_next->node_data){
	// swap
	prev->next = temp_next;
	temp->next = temp_next->next;
	temp_next->next = temp;
	}
	}
	}


	*/
	// get order increasing 
	// get order decreasing
	// COPY CONStructor
	// LIST COPY
	//SPLIT into N lists
	// get position

	void remove2(int pos){
		if (getSizeQuick2() == 0 || pos > getSizeQuick2() - 1){
			return;
		}
		if (getSizeQuick2() == 1 && pos == 0){
			doubly_linked_node* to_delete = head;
			head = NULL;
			tail = NULL;
			delete to_delete;
			doubly_linked_list_size--;
			return;
		}
		if (pos == 0){  // first element
			doubly_linked_node* to_delete = head;
			head = head->next;
			head->prev = NULL;
			delete to_delete;
			doubly_linked_list_size--;
			return;
		}

		if (pos == getSizeQuick2() - 1){  // last element
			doubly_linked_node* to_delete = tail;
			tail = tail->prev;
			tail->next = NULL;
			delete to_delete;
			doubly_linked_list_size--;
			return;
		}

		doubly_linked_node* temp = head;
		int i = 0;
		while ((temp) && i != pos - 1)
		{
			temp = temp->next; // traverse to the node before the one to delete
			i++;
		}

		doubly_linked_node* to_delete = temp->next; // delete the next node

		if (temp->next->next){
			doubly_linked_node* right_of_delete = temp->next->next;
			temp->next = right_of_delete;
			right_of_delete->prev = temp;
		}
		else{
			temp->next = NULL;
		}
		doubly_linked_list_size--;
		delete to_delete;
	}

	std::string displayListFwd(){ // DONE - formats and displays the whole list.
		std::string s;

		if (getSizeQuick2() == 0){
			return "[ empty ]";
		}
		doubly_linked_node* temp = head;

		s = "[";
		while (temp->next){
			s.append(std::to_string(temp->node_data));
			s.append(", ");
			temp = temp->next;
		}
		s.append(std::to_string(temp->node_data));
		s.append("]");
		return s;
	}

	std::string displayListBwd(){ // DONE - formats and displays the whole list.
		std::string s;

		if (getSizeQuick2() == 0){
			return "[ empty ]";
		}
		doubly_linked_node* temp = tail;

		s = "[";
		while (temp->prev){
			s.append(std::to_string(temp->node_data));
			s.append(", ");
			temp = temp->prev;
		}
		s.append(std::to_string(temp->node_data));
		s.append("]");
		return s;
	}


private: // DONE
	doubly_linked_node* head; // points to first item in my list
	int doubly_linked_list_size; // contains the size of my list
	doubly_linked_node* tail;
};