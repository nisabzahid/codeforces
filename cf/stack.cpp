#include <string>
#include<ios
using namespace std;



class Stack
{

private:

    int top;

    int capacity;

    int *storage;

public:

    Stack(int capacity)
    {

        if (capacity <= 0)

            throw string("Stack's capacity must be positive");

        storage = new int[capacity];

        this->capacity = capacity;

        top = -1;

    }



    void push(int value)
    {

        if (top == capacity)

            throw string("Stack's underlying storage is overflow");

        top++;

        storage[top] = value;

    }



    int peek()
    {

        if (top == -1)

            throw string("Stack is empty");

        return storage[top];

    }



    void pop()
    {

        if (top == -1)

            throw string("Stack is empty");

        top--;

    }



    bool isEmpty()
    {

        return (top == -1);

    }



    ~Stack()
    {

        delete[] storage;

    }

};
