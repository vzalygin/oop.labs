#include <QCoreApplication>
#include <string>
#include <iostream>

using std::string;

class Node {
private:
    Node * next;
    Node * prev;
public:
    Node(Node * prev = nullptr, Node * next = nullptr)
        : next(next), prev(prev) {};

    void setNext(Node * next) { this->next = next; }
    void setPrev(Node * prev) { this->prev = prev; }

    Node * getNext() { return next; }
    Node * getPrev() { return prev; }

    virtual string toString() const =0;
    virtual ~Node() {};
};

class IntNode : public Node{
private:
    int value;
public:
    IntNode(int value, Node * prev = nullptr, Node * next = nullptr)
        : value(value), Node(prev, next) {};

    virtual string toString() const override {
        return std::to_string(value);
    }
    virtual ~IntNode() {};
};

class WordNode : public Node {
private:
    string value;
public:
    WordNode(string value, Node * prev = nullptr, Node * next = nullptr)
        : value(value), Node(prev, next) {};

    virtual string toString() const override {
        return value;
    }
    virtual ~WordNode() {};
};

class Stack {
protected:
    Node * head;
public:
    Stack()
        : head(nullptr) {};

    void push(Node * node) {
        node->setNext(head);
        if (head != nullptr) {
            head->setPrev(node);
        }
        head = node;
    }

    Node * pop() {
        if (head != nullptr) {
            Node * res = head;
            head = res->getNext();
            res->setNext(nullptr);
            if (head != nullptr)
                head->setPrev(nullptr);
            return res;
        }
        return nullptr;
    }

    string toString() {
        string res = "stack:\n";
        Node * head = this->head;
        while (head != nullptr) {
            res += head->toString() + "\n";
            head = head->getNext();
        }
        return res;
    }

    ~Stack() {
        while (head != nullptr) {
            Node * next = head->getNext();
            delete head;
            head = next;
        }
    }
};

class StackExtended : public Stack {
public:
    StackExtended() : Stack() {};

    Node * getLongestElement() {
        Node * longest = nullptr, * head = this->head;
        unsigned int len = 0;

        while (head != nullptr) {
           if (len < head->toString().size()) {
               len = head->toString().size();
               longest = head;
           }
           head = head->getNext();
        }
        return longest;
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    StackExtended stack;

    std::cout << "avaliable actions:\n\t1. push new value to stack\n\t2. pop value from stack\n\t3. print stack\n\t4. exit\n\t5. see the longest\n";
    while (true) {
        std::cout << "choose action:? ";
        int a = 0;
        std::cin >> a;

        int num;
        string word;
        Node * popped;

        switch (a) {
        case 1:
            std::cout << "a number (1) or a word (2):? ";
            std::cin >> a;
            switch (a) {
            case 1:
                std::cin >> num;
                stack.push(new IntNode(num));
                break;
            case 2:
                std::cin >> word;
                stack.push(new WordNode(word));
                break;
            default:
                std::cout << "unknown action. try again\n";
                break;
            }
            break;
        case 2:
            popped = stack.pop();
            if (popped != nullptr) {
                std::cout << "popped element: " << popped->toString() << "\n";
                delete popped;
            }
            break;
        case 3:
            std::cout << stack.toString();
            break;
        case 4:
            return 0;
        case 5:
            popped = stack.getLongestElement();
            std::cout << "len: " << popped->toString().size() << "\n";
            std::cout << popped->toString() << "\n";
        default:
            std::cout << "unknown action. try again\n";
            break;
        }
    }

    return a.exec();
}
