#include <iostream>
#include <string>
using namespace std;

struct Node
{
    string name;
    int price;
    Node* next;
};

Node* head = NULL;

void add(string name, int price)
{
    Node* newNode = new Node;
    newNode->name = name;
    newNode->price = price;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node* temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

int sum()
{
    int s = 0;
    Node* temp = head;
    while (temp != NULL)
    {
        s += temp->price;
        temp = temp->next;
    }
    return s;
}

void print()
{
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->name << " " << temp->price << endl;
        temp = temp->next;
    }
}

int main()
{
    add("laptop", 100);
    add("phone", 700);
    add("tablet", 400);
    add("stand", 130);

    print();
    cout << "Total price: " << sum() << endl;

    return 0;
}
