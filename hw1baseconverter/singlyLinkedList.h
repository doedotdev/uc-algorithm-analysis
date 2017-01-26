/*
Benjamin Horn
University of Cincinnati
Computer Science
MBA Data Science
*/

/*
Singly and Doubly Linked List Implementations
Headers File Listed below
#include "singlyLinkedList.h" // MODIFIED TO DEAL WITH STRINGS TODAY
*/




#include <iostream>
#include <stdio.h>
#include <string>

struct linked_node{ // DONE - this is the node structure, holding an integer and a pointer to the next node
	std::string node_data;
	linked_node* next;
};

class linkedList
{
public:
	linkedList(){ // DONE - starts a new, empty list
		head = NULL;
		linked_list_size = 0;
	}

	~linkedList(){ // DONE - clears out the list to prevent memory leaks]
		linked_node* temp = head;
		while (temp) {
			linked_node* to_delete = temp;
			temp = temp->next;
			delete to_delete;
		}
		head = NULL;
	}

	int getSizeQuick(){ // DONE - returns the number of nodes stored in the list
		return linked_list_size;
	}

	int getSizeWithTraversal(){ // DONE - how to traverse the list front to back and count the size
		if (head == NULL){
			return 0;
		}
		linked_node*temp = head;
		int traversal_size = 0;
		while (temp->next){ // will take us to second to last node
			temp = temp->next;
			traversal_size++;
		}
		return traversal_size + 1;
	}

	void pushFront(std::string value){ // DONE - push onto the front of the list, effectively becomes first item
		linked_list_size++;// increase size of the list
		linked_node* temp = new linked_node; // dynamic allocation of a new node
		temp->node_data = value;
		temp->next = head;
		head = temp;
	}


	void clearList(){ // might be incredibly slow, just needed something quick
		while(linked_list_size > 0){
			remove(0);
		}
	}

	void remove(int pos){ // DONE - remove the Nth item of a linked list
		if (getSizeQuick() == 0){
			return;
		}
		if (pos == 0){
			linked_node* to_delete = head;
			head = head->next;
			delete to_delete;
			linked_list_size--;
			return;
		}
		linked_node* temp;
		temp = head;
		int i = 0;
		while ((temp) && i != pos - 1)
		{
			temp = temp->next;
			i++;
		}
		linked_node* to_delete = temp->next;
		if (temp->next->next){
			temp->next = temp->next->next;
		}
		else
		{
			temp->next = NULL;
		}

		delete to_delete;
		linked_list_size--;
	}


	std::string displayList(){ // DONE - formats and displays the whole list.
		std::string s;

		if (getSizeQuick() == 0){
			return "[ empty ]";
		}
		linked_node* temp = head;
		
		s = "";
		while (temp->next){
			s.append(temp->node_data);
			temp = temp->next;
		}
		s.append(temp->node_data);
		return s;
	}

	

private: // DONE
	linked_node* head; // points to first item in my list
	int linked_list_size; // contains the size of my list

};