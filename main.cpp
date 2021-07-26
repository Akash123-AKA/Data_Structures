//Declaring head node globally

#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};
 Node *head = NULL;
class linked_list
{
public:
    void insert_node (int x)
    {
      Node *temp = new Node();
      temp->data=x;
      temp->next=head;
      head=temp;
    }
public:
    void printit()
    {
      Node *temp=head;
      while (temp!= NULL)
      {
          cout<<temp->data << endl;
          temp = temp->next;
      }

    }
};

int main()
{
    linked_list a;
    a.insert_node(2);

    a.insert_node(3);

    a.insert_node(4);

    a.insert_node(5);
    a.printit();

    return 0;
}

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Declaring head node Locally 
  
#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

class linked_list
{
public:
    Node * insert_node (Node *head, int x)
    {
      Node *temp = new Node();
      temp->data=x;
      temp->next=head;
      head=temp;
      return head;
    }
public:
    void printit(Node *head)
    {
      Node *temp=head;
      while (temp!= NULL)
      {
          cout<<temp->data << endl;
          temp = temp->next;
      }

    }
};

int main()
{
    Node *head = NULL;
    linked_list a;
    head = a.insert_node(head,2);

    head= a.insert_node(head,3);

    head = a.insert_node(head,4);

    head = a.insert_node(head,5);
    a.printit(head);

    return 0;
}
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Passing the argument by Reference
#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

class linked_list
{
public:
    void insert_node (Node **head, int x)
    {
      Node *temp = new Node();
      temp->data=x;
      temp->next=*head;
      *head=temp;

    }
public:
    void printit(Node **head)
    {
      Node *temp= *head;
      while (temp!= NULL)
      {
          cout<<temp->data << endl;
          temp = temp->next;
      }

    }
};

int main()
{
    Node *head = NULL;
    linked_list a;
     a.insert_node(&head,2);

     a.insert_node(&head,3);

     a.insert_node(&head,4);

     a.insert_node(&head,5);
    a.printit(&head);

    return 0;
}

