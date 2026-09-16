#include <iostream>
#include <string>
using namespace std;

struct Node
{
    string name;
    int salary;
    Node* next;
};

Node* head = NULL;

void add_employee(string name, int salary)
{
    Node* newNode = new Node;
    newNode->name = name;
    newNode->salary = salary;
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
        s += temp->salary;
        temp = temp->next;
    }
    return s;
}

void print()
{
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->name << " " << temp->salary << endl;
        temp = temp->next;
    }
}

int main()
{
    string name;
    int price;
    int i, n;

    cout << "enter the number of employee:";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << "enter employee name:";
        cin >> name;
        cout << "enter employee salary:";
        cin >> price;
        add_employee(name, price);
    }

    print();
    cout << "Total salary: " << sum() << endl;

    return 0;
}
