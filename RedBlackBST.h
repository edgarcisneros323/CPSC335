#indef RedBlackBST_h
#define RedBlackBST_h

#include <iostream>
#include <cassert>
#include "queue.h"


template <typename Key, typenmae Value.
class RedBlackBST{
private:
static final boolean RED = true;
static final boolean BLACK = false;

Node root;

 Node{
 Key key;
 Value val;
 Node* left;
 Node* right;
 boolean color;
 int size;
 Node(Key key_, Value value, int size_):key(key_), val(value), size(_size), left(nullptr),right(nullptr){
 std::cout << "new node is : " << *this << "\n";
 }
 };
 Node* root;
 
 public:

