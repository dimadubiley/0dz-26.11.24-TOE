/*
//LIFO
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
*/



/*
//FIFO
#include <iostream>
using namespace std;

template <typename T>
struct Node
{
    T data;
    Node* next;
    Node* prev;
    Node(T data) : data(data), next(nullptr), prev(nullptr) {}
};

template <typename T>
class Queue
{
    Node<T>* front;
    Node<T>* rear;

public:
    Queue() : front(nullptr), rear(nullptr) {}

    void enqueue(const T& value)
    {
        Node<T>* newNode = new Node<T>(value);
        if (rear != nullptr)
        {
            rear->next = newNode;
            newNode->prev = rear;
            rear = newNode;
        }
        else
        {
            front = rear = newNode;
        }
    }

    void dequeue()
    {
        if (front != nullptr)
        {
            Node<T>* temp = front;
            front = front->next;
            if (front != nullptr)
            {
                front->prev = nullptr;
            }
            else
            {
                rear = nullptr;
            }
            delete temp;
        }
        else
        {
            cout << "Queue is empty!" << endl;
        }
    }

    T frontElement() const
    {
        if (front != nullptr)
        {
            return front->data;
        }
        else
        {
            throw runtime_error("Queue is empty!");
        }
    }

    bool isEmpty() const
    {
        return front == nullptr;
    }

    ~Queue()
    {
        while (front != nullptr)
        {
            dequeue();
        }
    }
};

int main()
{
    Queue<int> queue;
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);

    cout << "Front element: " << queue.frontElement() << endl;

    queue.dequeue();
    cout << "Front element after dequeue: " << queue.frontElement() << endl;

}
*/
