// class for a list node
class ListNode{
  private:
    char* str;
    ListNode *next;
  public:
     ListNode(char* a){
      str = a;
      next = NULL;
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

//initializes blank list of strings
listOfStrings::listOfStrings(){
  head = NULL;
  tail = NULL;
}

// class for the list of strings
class listOfStrings{
  private:
    ListNode *head;
    ListNode *tail;
  public: 
    listOfStrings();
    void push_back(string);
    int get(n);
    int length();
    str* remove_front();
 }

// allows you to add another string to the list
void listOfStrings::push_back(str* a){
  ListNode *node = new ListNode(a);
  if(head == NULL){
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
  char* temp1;
  char* temp2;
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
  return temp2;
}
    
}

int listOfStrings::length(){
  char* temp = head;
  int n = 0;
  while(head != NULL){
    n++;
  }
  return n;
}
  

// removes the head and returns string that was removed
char* listOfStrings::removefront(){
  char* temp;
  char* temp2;
  if(head == NULL){
    return 0;
  }
  temp = head;
  temp2 = head->getNext();
  head = temp2;
  return temp;
}

//destructor
listOfStrings::~listOfStrings(){
  char* str;
  while(!empty())
    remove(str);
}
  
