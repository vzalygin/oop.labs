#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using std::cin;
using std::cout;
using std::endl;

typedef struct Node {
  Node *next;
  Node *prev;
  char *value; 
} Node;

void append(Node *head, char *str) {
  while (head->next != nullptr) {
    head = head->next;
  }
  head->next = new Node{nullptr, head, str};
}

void delete_ll(Node *head) {
  if (head != nullptr) {
    delete_ll(head->next);
    delete head;
  }
}

void compute(Node *queue) {
  Node *kptr = nullptr, *tptr = nullptr;
  Node *node = queue->next;
  while (node != nullptr) {
    if (kptr != nullptr && node->value[0] == 'k') {
      kptr = node;
    }
    if (tptr != nullptr && node->value[0] == 't') {
      tptr = node;
    }
    node = node->next;
  }
  
  if (kptr != nullptr && tptr != nullptr) {
    char* tmp = kptr->value;
    kptr->value = tptr->value;
    tptr->value = tmp;
  }
}

void print_ll(Node *node) {
  if (node != nullptr) {
    cout << node->value << endl;
    print_ll(node->next);
  }
}

// var 22
// vasya est griby
int main() {
  char str[512];
  cout << "Введите строку" << endl;
  scanf("%[^\n]s", str);

  Node *queue = new Node{nullptr, nullptr, nullptr};

  char *token;
  char *rest = str;

  while ((token = strtok_r(rest, " ", &rest))) {
    append(queue, token);
  }

  cout << "Исходный список:" << endl;
  print_ll(queue->next);
  compute(queue);
  cout << "Изменённый список:" << endl;
  print_ll(queue->next);

  delete_ll(queue);
  return 0;
}