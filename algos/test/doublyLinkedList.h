//
// Created by Benjamin D. Horn on 3/10/17.
//

#ifndef ALGOS_DOUBLYLINKEDLIST_H
#define ALGOS_DOUBLYLINKEDLIST_H

#include <ostream>
#include <stdexcept>
using namespace std;


/**
 * TEMPLATE CLASS T
 * a linked list of nodes of this type<T>
 * ex int, string, bool?, etc
*/
template <class T>
struct node_t {
    T value;
    node_t<T>* prev;
    node_t<T>* next;
};

/**
 * Inludes insert front are rear of speed o(n)
 * class doublyLinkedList
*/
template <class T>
class doublyLinkedList{

public:
    // Constructor
    doublyLinkedList(){
        head = NULL;
        tail = NULL;
        doubly_linked_list_size = 0;
    }

    // Destructor
    ~doublyLinkedList(){
        // Fill me in
        node_t<T>* temp_node = this->head;
        while(temp_node){
            node_t<T>* del = temp_node;
            temp_node = temp_node->next;
            delete del;
        }
        head = NULL;
        tail = NULL;
        doubly_linked_list_size = 0;
    }

    // Copy Constructor
    doublyLinkedList(const doublyLinkedList& other){
        // Fill me in
        this->head = NULL;
        this->tail = NULL;
        doubly_linked_list_size = 0;
        node_t<T>* temp = other.head;
        while(temp){
            T val = temp->value;
            this->push_back(val);
            temp = temp->next;
        }
    }

    // Just like copy constructor except you can asssgin and copy all the data over
    // list a = list b
    // if a == b, return this
    // else, clear and copy all the data over to the new list
    doublyLinkedList<T>& operator= (const doublyLinkedList& other){
        // Fill me in
        if (this == &other){
            return *this;
        }
        this->clear();
        node_t<T>* temp = other.head;
        while(temp){
            this->push_back(temp->value);
            temp = temp->next;
        }
        return *this;
    }

    string catRet(){ // returns string of the linked list. not comma sepertated or formatted ex: [0,1] == 01
        string ret = "";
        string temp_str;
        node_t<T> * temp = head;
        while(temp->next){
            temp_str = (string)temp->value;
            ret = ret + temp_str;
            //cout << temp->value << endl;
            temp = temp->next;
        }
        //cout << temp->value << endl;
        temp_str = (string)temp->value;
        ret = ret + temp_str;
        return ret;
    }

    // Builds index with negative numbers
    unsigned int buildIndex(int num, unsigned int size) const{
        if(num < 0){
            int sz = size;
            return (unsigned int)(sz+num);
        }
        else{
            return (unsigned int)num;
        }
    }

    // Returns value at pos of type T
    T getAt(int pos) const{
        // Fill me in
        unsigned int true_pos = buildIndex(pos, doubly_linked_list_size);
        node_t<T>* temp = NULL;
        if(true_pos >= doubly_linked_list_size){
            throw logic_error("Invalid index!\n");
        }
        if (true_pos <= (doubly_linked_list_size-1)/2){
            temp = head;
            unsigned int count = 0;
            while(count != true_pos){
                temp = temp->next;
                count++;
            }
        }
        else if (true_pos > (doubly_linked_list_size-1)/2){
            temp = tail;
            unsigned int count = doubly_linked_list_size-1;
            while (count != true_pos){
                temp = temp->prev;
                count--;
            }
        }
        return temp->value;
    }

    // Returns size of list
    unsigned int size() const{
        // Fill me in
        return doubly_linked_list_size;
    }

    // Places value on back of list
    void push_back(T value){
        // Fill me in
        node_t<T>* temp2 = this->tail;
        if(!this->head && !temp2){
            push_front(value);
            return;
        }
        node_t<T>* added = new node_t<T>;
        //temp->next = added;
        added->next = NULL;
        added->value = value;
        added->prev = this->tail;
        added->prev->next = added;
        this->tail = added;
        doubly_linked_list_size++;
    }

    // Places value at front of list
    void push_front(T value){
        // Fill me in
        node_t<T>* point = new node_t<T>;
        point->next = this->head;
        point->value = value;
        point->prev = NULL;
        this->head = point;
        doubly_linked_list_size++;
        if (doubly_linked_list_size == 1){
            this->tail = point;
        }
        else {
            point->next->prev = point;
        }
    }

    // Replaces value at pos
    void setAt(T value, int pos){
        // Fill me in
        unsigned int true_pos = buildIndex(pos, doubly_linked_list_size);
        if(true_pos >= doubly_linked_list_size){
            throw logic_error("Invalid index!\n");
        }
        if (true_pos <= (doubly_linked_list_size-1)/2){
            node_t<T>* temp = head;
            unsigned int count = 0;
            while(count != true_pos){
                temp = temp->next;
                count++;
            }
            temp->value = value;
        }
        else if (true_pos > (doubly_linked_list_size-1)/2){
            node_t<T>* temp = tail;
            unsigned int count = doubly_linked_list_size-1;
            while (count != true_pos){
                temp = temp->prev;
                count--;
            }
            temp->value = value;
        }
    }

    // Removes node at pos
    void remove(int pos){
        // Fill me in
        unsigned int true_pos = buildIndex(pos, doubly_linked_list_size);
        if(true_pos >= doubly_linked_list_size){
            throw logic_error("Invalid index!\n");
        }
        if (true_pos <= (doubly_linked_list_size-1)/2){
            firstHalfDelete(true_pos);
        }
        else if (true_pos > (doubly_linked_list_size-1)/2){
            secondHalfDelete(true_pos);
        }
    }

    // Deletes if in first half of list
    void firstHalfDelete(unsigned int true_pos){
        node_t<T>* temp = head;
        unsigned int count = 0;
        while(count != true_pos){
            temp = temp->next;
            count++;
        }
        if (temp->prev != NULL){
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            delete temp;
            doubly_linked_list_size--;
            return;
        }
        else if (doubly_linked_list_size == 1){
            delete temp;
            head = NULL;
            tail = NULL;
            doubly_linked_list_size--;
            return;
        }
        else{
            temp->next->prev = NULL;
            head = temp->next;
            delete temp;
            doubly_linked_list_size--;
            return;
        }
    }

    // Deletes if in second half of list
    void secondHalfDelete(unsigned int true_pos){
        node_t<T>* temp = tail;
        unsigned int count = doubly_linked_list_size-1;
        while (count != true_pos){
            temp = temp->prev;
            count--;
        }
        temp->prev->next = temp->next;
        if (temp->next != NULL){
            temp->next->prev = temp->prev;
        }
        else{
            tail = temp->prev;
        }
        delete temp;
        doubly_linked_list_size--;
        return;
    }

    // Makes a new list in reverse order
    doublyLinkedList<T> reverse() const{
        // Fill me in
        doublyLinkedList<T> rev;
        node_t<T>* temp = tail;
        while(temp){
            rev.push_back(temp->value);
            temp = temp->prev;
            /*
            node_t<T>* pre = temp->next;
            temp->next = temp->prev;
            temp->prev = pre;
            temp = temp->next;
            */
        }
        return rev;
    }

    // Concatenates lists and returns a new list
    doublyLinkedList<T> operator+(const doublyLinkedList<T>& other) const{
        // Fill me in
        doublyLinkedList<T> sum;
        node_t<T>* temp = this->head;
        while(temp){
            sum.push_back(temp->value);
            temp = temp->next;
        }
        temp = other.head;
        while(temp){
            sum.push_back(temp->value);
            temp = temp->next;
        }
        return sum;
    }

    // Checks if lists are the same
    bool operator==(const doublyLinkedList<T>& other) const{
        // Fill me in
        if(this->doubly_linked_list_size != other.doubly_linked_list_size){
            return false;
        }
        if(this->doubly_linked_list_size == 0 && other.doubly_linked_list_size == 0){
            return true;
        }
        node_t<T>* one = this->head;
        node_t<T>* two = other.head;
        while(one){
            if(one->value != two->value){
                return false;
            }
            one = one->next;
            two = two->next;
        }

        return true;
    }

    // Checks if lists are not the same
    bool operator!=(const doublyLinkedList<T>& other) const{
        // Fill me in
        if(this->doubly_linked_list_size != other.doubly_linked_list_size){
            return true;
        }
        if(this->doubly_linked_list_size == 0 && other.doubly_linked_list_size == 0){
            return false;
        }
        node_t<T>* one = this->head;
        node_t<T>* two = other.head;
        while(one){
            if(one->value != two->value){
                return true;
            }
            one = one->next;
            two = two->next;
        }

        return false;
    }

    // Clears list
    void clear(){
        // Fill me in
        node_t<T>* temp = this->head;
        while(temp){
            node_t<T>* del = temp;
            temp = temp->next;
            delete del;
        }
        head = NULL;
        tail = NULL;
        doubly_linked_list_size = 0;
    }

    // HW additions.

    unsigned int count(T thing){
        // Fill me in
        unsigned int ct = 0;
        node_t<T>* temp = head;
        while(temp){
            if(temp->value == thing){
                ct++;
            }
            temp = temp->next;
        }
        return ct;
    }

    /*
    class LListIterator{
    friend doublyLinkedList<T>;  // Allows doublyLinkedList to access privates
    public:
    // No default constructor, we'll just reach in and change it
    LListIterator<T> next(){
      if(current){  // If the pointer is valid, walk one.
        current = current->next;
      }
      return *this;
    }

    // Overload the ++ postfix operator.
    LListIterator<T> operator++(int steps){
       return next();
    }

    // Returns the element this iterator is at.
    T get(){
      if(!current){
        throw logic_error("Iterator not valid");
      }
      return current->value;
    }

    // Overload the * operator to look like dereferencing
    T operator*(){
      return get();
    }

    // != is used to know when to stop iterating down the linked list.
    bool operator!=(const LListIterator<T>& other){
      //Verify the iterator is working on the same LList
      if( parent != other.parent){
        return true;
      }
      return current != other.current;
    }

    private:
    node_t<T>* current;
    const doublyLinkedList<T>* parent; // Who does this Iterator belong to?

  };

  LListIterator<T> begin() const{
    LListIterator<T> ret;
    ret.current = this->head;
    ret.parent =this;
    return ret;
  }

  LListIterator<T> end() const{
    LListIterator<T> ret;
    ret.current =NULL;
    ret.parent=this;
    return ret;
  }

    unsigned int count(T thing){
    unsigned int Count=0;
    cout<<"In function:"<< *this;
    cout << this->begin();
    for (LListIterator<T> i = this->begin(); i != this->end(); i++){
      cout <<"value at i: "<< *i;
      if(*i == thing){
        Count++;
      }
    }
    return Count;
  }
  */

    // Splits doublyLinkedList into two
    void splitHalf(doublyLinkedList<T>& a, doublyLinkedList<T>& b){
        // Fill me in
        a.clear();
        b.clear();
        if(this->doubly_linked_list_size == 0){
            return;
        }
        a.head = this->head;
        b.tail = this->tail;
        if (doubly_linked_list_size % 2 == 0){
            a.doubly_linked_list_size = this->doubly_linked_list_size/2;
            b.doubly_linked_list_size = a.doubly_linked_list_size;
        }
        else if (doubly_linked_list_size == 1){
            a.doubly_linked_list_size = 0;
            b.doubly_linked_list_size = 1;
            a.head = NULL;
            a.tail = NULL;
            b.head = this->head;
            b.tail = this->tail;
            this->head = NULL;
            this->tail = NULL;
            this->doubly_linked_list_size = 0;
            return;
        }
        else{
            a.doubly_linked_list_size = (this->doubly_linked_list_size-1)/2;
            b.doubly_linked_list_size = this->doubly_linked_list_size - a.doubly_linked_list_size;
        }
        node_t<T>* temp = this->head;
        unsigned int count = 0;
        while(count != a.doubly_linked_list_size-1){
            temp = temp->next;
            count++;
        }
        a.tail = temp;
        b.head = temp->next;
        temp->next->prev = NULL;
        temp->next = NULL;
        this->head = NULL;
        this->tail = NULL;
        this->doubly_linked_list_size = 0;
    }

    // Splits into even and odd Dlists
    void splitEveryOther(doublyLinkedList<T>& even, doublyLinkedList<T>& odd){
        // Fill me in
        even.clear();
        odd.clear();
        even.head = this->head;
        even.tail = even.head;
        if(even.head != NULL){
            even.doubly_linked_list_size++;
        }
        node_t<T>* temp = even.head;
        unsigned int num = 0;
        while(temp){
            if(num % 2 == 0){
                if(num == 0){
                    num++;
                    temp = temp->next;
                    continue;
                }
                num++;
                even.doubly_linked_list_size++;
                temp->prev = even.tail;
                even.tail->next = temp;
                even.tail = temp;
                temp = temp->next;
                even.tail->next = NULL;
            }
            else if (num % 2 == 1){
                if(num == 1){
                    num++;
                    odd.head = temp;
                    odd.tail = odd.head;
                    temp->prev->next = NULL;
                    temp->prev = NULL;
                    odd.doubly_linked_list_size++;
                    temp = temp->next;
                    odd.tail->next = NULL;
                    continue;
                }
                num++;
                odd.doubly_linked_list_size++;
                temp->prev = odd.tail;
                odd.tail->next = temp;
                odd.tail = temp;
                temp = temp->next;
                odd.tail->next = NULL;
            }
        }
        this->head = NULL;
        this->tail = NULL;
        this->doubly_linked_list_size = 0;
    }


    // Reverses list (doesn't return a new one)
    void reverseThis(){
        // Fill me in
        head = tail;
        node_t<T>* temp = tail;
        while(temp){
            node_t<T>* pre = temp->next;
            temp->next = temp->prev;
            temp->prev = pre;
            tail = temp;
            temp = temp->next;
        }
    }

    // [1, 2, 3] -> [1, 1, 2, 2, 3, 3]
    void doubleThis(){
        // Fill me in
        node_t<T>* temp = this->head;
        while(temp){
            node_t<T>* prev = temp;
            temp = temp->next;
            node_t<T>* new_node = new node_t<T>;
            new_node->prev = prev;
            prev->next = new_node;
            new_node->next = temp;
            if(temp != NULL){
                temp->prev = new_node;
            }
            new_node->value = prev->value;
            doubly_linked_list_size++;
            this->tail = new_node;

        }
    }

    // Check if every element is contained in the other doublyLinkedList
    bool setEq(const doublyLinkedList<T>& other){
        // Fill me in
        if(this->doubly_linked_list_size != other.doubly_linked_list_size){
            return false;
        }
        doublyLinkedList<T> copy = other;
        node_t<T>* temp_this = this->head;
        while(temp_this){
            node_t<T>* temp_other = copy.head;
            unsigned int counter = 0;
            while(temp_other){
                //cout << temp_this->value << " " << temp_other->value << endl;
                if(temp_this->value == temp_other->value){
                    setDelete(copy, temp_other);
                    break;
                }
                else{
                    temp_other = temp_other->next;
                    counter++;
                }
            }
            if(temp_other == NULL){
                return false;
            }
            temp_this = temp_this->next;
        }
        return true;
    }

    // Non iterative delete O(1)
    void setDelete(doublyLinkedList<T>& copy, node_t<T>* temp_other){
        if(copy.doubly_linked_list_size == 1){
            delete temp_other;
            copy.doubly_linked_list_size--;
            copy.head = NULL;
            copy.tail = NULL;
            return;
        }
        else if(temp_other == copy.head){
            temp_other->next->prev = NULL;
            copy.head = temp_other->next;
            delete temp_other;
            copy.doubly_linked_list_size--;
            return;
        }
        else if(temp_other == copy.tail){
            temp_other->prev->next = NULL;
            copy.tail = temp_other->prev;
            delete temp_other;
            copy.doubly_linked_list_size--;
            return;
        }
        else{
            temp_other->prev->next = temp_other->next;
            temp_other->next->prev = temp_other->prev;
            delete temp_other;
            copy.doubly_linked_list_size--;
            return;
        }
    }

private:
    // Fill me in
    node_t<T>* head;
    node_t<T>* tail;
    unsigned int doubly_linked_list_size;

};

// Note this function is O(n^2) because getAt is O(n) and we are
// doing it n times.
template <class T>
ostream& operator<<(ostream& out, const doublyLinkedList<T> other){
    out << "[";
    for(unsigned int i = 0; i < other.size(); i++){
        out << other.getAt(i);
        if(i != other.size()-1){
            out << "";
        }
    }
    out << "]";
    return out;
}

#endif //ALGOS_DOUBLYLINKEDLIST_H
