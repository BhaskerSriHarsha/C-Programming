# include <iostream>

using namespace std;

  class Node
  {
  public:
    int data;
    Node* next;
  };

void printLL(Node* n)
{
  while(n != NULL)
  {
    cout<<"Data: "<<n->data<<endl;
    n = n->next;
  }
}


int main()
{

  Node* head = NULL;
  Node* body = NULL;
  Node* tail = NULL;

  // Declare three nodes
  head = new Node();
  body = new Node();
  tail = new Node();

  // Add data to the first node and point to second one
  head->data = 1;
  head->next = body;

  // Add data to the second node and point to third one
  body->data = 2;
  body->next = tail;

  // Add data to the third node
  tail->data = 3;
  tail->next = NULL;

  printLL(head);
}
