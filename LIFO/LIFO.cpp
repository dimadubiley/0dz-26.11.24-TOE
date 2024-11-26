#include <iostream>
using namespace std;

template <typename T>
struct Node
{
    T data;
    Node* next;
    Node(T data) : data(data), next(nullptr) {}
};

template <typename T>
class Stack
{
private:
    Node<T>* top;

public:
    Stack() : top(nullptr) {}

    void push(const T& value)
    {
        Node<T>* newNode = new Node<T>(value);
        newNode->next = top;
        top = newNode;
    }

    void pop()
    {
        if (top != nullptr)
        {
            Node<T>* temp = top;
            top = top->next;
            delete temp;
        }
        else
        {
            cout << "Stack is empty!" << endl;
        }
    }

    T topElement() const
    {
        if (top != nullptr)
        {
            return top->data;
        }
        else
        {
            throw runtime_error("Stack is empty!");
        }
    }

    bool isEmpty() const
    {
        return top == nullptr;
    }

    ~Stack()
    {
        while (top != nullptr)
        {
            pop();
        }
    }
};

int main()
{
    Stack<int> stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Top element: " << stack.topElement() << endl;

    stack.pop();
    cout << "Top element after pop: " << stack.topElement() << endl;

}
