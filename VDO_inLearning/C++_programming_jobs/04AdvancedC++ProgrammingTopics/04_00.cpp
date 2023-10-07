#include <iostream>
#include <cstdlib>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void insert(struct Node** head, int newData);
void printList(struct Node *head);
void deleteNode(struct Node **head, int key);

int main()
{
    Node* head = NULL;
    insert(&head, 7);
    insert(&head, 1);
    insert(&head, 3);
    insert(&head, 8);
    insert(&head, 2);
    insert(&head, 6);

    cout << "Created "<< endl;
    printList(head);
    deleteNode(&head, 4);
    cout << "\nAfter Deletion of position 4"<< endl;
    printList(head);
    return 0;
}

void insert(struct Node** head, int newData)
{
    Node* newNode = new Node;
    newNode->data = newData;
    newNode->next = (*head);
    (*head) = newNode;
}   

void printList(struct Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    } 
}

void deleteNode(struct Node **head, int key)
{
    //if the list is empty, return
    if (*head == NULL)
        return;
    // creat new pointer to head
    Node* temp = *head;
    //if they want to delete the head, move head
    // to next item, delete and return
    if (key == 0)
    {
        *head = temp->next;
        delete temp;
        return;
    }
    //cycle through the list until end or node b4 position
    for (int i = 0; temp != NULL && i < key - 1; i++)
        temp = temp->next;
    //if end of list, return
    if (temp == NULL || temp->next == NULL)
        return;
    //create new pointer to node after position
    Node *next = temp->next->next;
    //delete position
    delete temp->next;
    //unlink node
    temp->next = next;
}