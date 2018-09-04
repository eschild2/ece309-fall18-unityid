#include <stdio.h>

// class for a list node
class ListNode{
  private:
    char* str;
    ListNode *next;
  public:
     ListNode(char* a){
      str = a;
      next = 0;
    }
    ListNode* getNext() {
      return next;
    }
    void setNext(ListNode *n){
      next = n;
    }
   char* getStr() {
    return str;
   }
};


// class for the list of strings
class listOfStrings{
  private:
    ListNode *head;
    ListNode *tail;
  public: 
    listOfStrings();
    void push_back(char* a);
    char* get(int n);
    int length();
    char* remove_front();
    ~listOfStrings();
 };

//initializes blank list of strings
listOfStrings::listOfStrings(){
  head = 0;
  tail = 0;
}

// allows you to add another string to the list
void listOfStrings::push_back(char* p){
  ListNode *node = new ListNode(p);
  if(head == 0){
    head = node;
    tail = node;
  }
  else{
    tail->setNext(node);
    tail = node;
  }
}

// returns the string at the nth term on the list
char* listOfStrings::get(int n){
  int x = 0;
  ListNode* temp1;
  ListNode* temp2;
  while(x != n){
    if(x == 0){
      temp1 = head;
      temp2 = head->getNext();
      x++;
    }
    else{
      temp1 = temp2;
      temp2 = temp1->getNext();
      x++;
    }
  }
  return temp2->getStr();
}
    


int listOfStrings::length(){
  ListNode* temp = head;
  int n = 0;
  while(head != 0){
    n++;
  }
  return n;
}
  

// removes the head and returns string that was removed
char* listOfStrings::remove_front(){
  ListNode* temp;
  ListNode* temp2;
  if(head == 0){
    return 0;
  }
  temp = head;
  temp2 = head->getNext();
  head = temp2;
  return temp->getStr();
}

//destructor
listOfStrings::~listOfStrings(){
  char* t;
  while(!empty()){
    remove(t);
  }
  
