#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <cassert>
using namespace std;

struct Node{
   Node* next;
   Node* prev;
   int value;
   int key;
   Node(Node* p, Node* n, int k, int val):prev(p),next(n),key(k),value(val){};
   Node(int k, int val):prev(NULL),next(NULL),key(k),value(val){};
};

class Cache{
   
   protected: 
   map<int,Node*> mp; //map the key to the node in the linked list
   int cp;  //capacity
   Node* tail; // double linked list tail pointer
   Node* head; // double linked list head pointer
   virtual void set(int, int) = 0; //set function
   virtual int get(int) = 0; //get function

};

class LRUCache : public Cache {
 public:
  LRUCache(int cp) {
    this->cp = cp;
    this->head = this->tail = nullptr;
  }

  void set(int k, int v) {
    // Lookup iterator
    auto it = mp.find(k);

    // Check our head is empty or not
    if (head == nullptr) {
      // If it is just add our node
      Node* n = new Node(k, v);
      head = tail = n;
      mp[k] = n;
    } else if (it != mp.end()) {
      // If not we check our value is exist or not,
      // if it exist we update our node
      Node* n = it->second;
      n->value = v;

      // Is our node already the head or not
      if (n != head) {
        // Is our node the tail or not
        if (n == tail) {
          // Our node is the tail, so we remove it form the original
          // position and remove the link which point to our node (tail)
          tail = tail->next;
          tail->prev = nullptr;
        } else {
          // If our node is not the tail, we just "pull out" from the list
          n->prev->next = n->next;
          n->next->prev = n->prev;
        }

        // Move our node next to the head and than
        // update our head to become our node.
        head->next = n;
        n->prev = head;
        n->next = nullptr;
        head = n;
      }
    } else {
      // Check capacity
      if (mp.size() == cp) {
        // If our map is full, we remove the LRU item
        Node* n = tail;
        tail->next->prev = nullptr;
        tail = tail->next;
        mp.erase(n->key);
        delete n;
      }

      // Creating our node and than,
      // update our head to become our node.
      Node* n = new Node(k, v);
      head->next = n;
      n->prev = head;
      head = n;
      mp[k] = n;
    }
  }

  int get(int k) {
    // Lookup iterator
    auto it = mp.find(k);

    // Check is node exist in the list
    if (it != mp.end()) {
      Node* n = it->second;
      // Is our node already the head or not
      if (n != head) {
        // Is our node the tail or not
        if (n == tail) {
          // Our node is the tail, so we remove it form the original
          // position and remove the link which point to our node (tail)
          tail = tail->next;
          tail->prev = nullptr;
        } else {
          // If our node is not the tail, we just "pull out" from the list
          n->prev->next = n->next;
          n->next->prev = n->prev;
        }

        // Move our node next to the head and than
        // update our head to become our node.
        head->next = n;
        n->prev = head;
        n->next = nullptr;
        head = n;
      }
      // Return the value from the node
      return it->second->value;
    } else {
      // If not return -1
      return -1;
    }
  }
};


int main() {
   int n, capacity,i;
   cin >> n >> capacity;
   LRUCache l(capacity);
   for(i=0;i<n;i++) {
      string command;
      cin >> command;
      if(command == "get") {
         int key;
         cin >> key;
         cout << l.get(key) << endl;
      } 
      else if(command == "set") {
         int key, value;
         cin >> key >> value;
         l.set(key,value);
      }
   }
   return 0;
}
