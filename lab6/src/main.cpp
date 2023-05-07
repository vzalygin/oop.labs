#include <cstring>
#include <iostream>

using namespace std;

typedef struct Node {
  Node *next;
  Node *prev;
  double value;
} Node;

Node *empty() { return nullptr; }

Node *from(double value) { return new Node{nullptr, nullptr, value}; }

Node *append(Node *head, Node *new_node) {
  if (head == nullptr) {
    return new_node;
  } else {
    head->next = append(head->next, new_node);
    head->next->prev = head;
    return head;
  }
}

Node *get_tail(Node *head) {
  if (head->next != nullptr) {
    return get_tail(head->next);
  } else {
    return head;
  }
}

void free(Node *head) {
  if (head != nullptr) {
    free(head->next);
    delete head;
  }
}

int main() {
  int number = 0;
  Node *head = empty();

  cout << "input the number of the numbers" << endl;
  cin >> number;
  cout << "input the numbers" << endl;
  for (int i = 0; i < number; ++i) {
    double n;
    cin >> n;
    head = append(head, from(n));
  }

  Node *tail = get_tail(head), *head_copy = head;
  Node *res = empty();
  for (int i = 0; i < number; ++i) {
    res = append(res, from(head_copy->value * tail->value));
    head_copy = head_copy->next;
    tail = tail->prev;
  }

  cout << "data list" << endl;
  for (int i = 0; i < number; ++i) {
    cout << head->value << " ";
    head = head->next;
  }
  cout << endl;
  
  cout << "result list" << endl;
  for (int i = 0; i < number; ++i) {
    cout << res->value << " ";
    res = res->next;
  }
  cout << endl;

  free(head);
  free(res);
  return 0;
}