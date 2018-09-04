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

listOfStrings::listOfStrings(){
  head = NULL;
  tail = NULL;
}

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
 
 listOfStrings::listOfStrings(){
  head = NULL;
  tail = NULL;
}
    
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
