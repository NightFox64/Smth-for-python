#include <iostream>

using namespace std;

struct Node {
  int val;
  Node* next;
};

bool isEmptyList(Node* head)
{
  return head == NULL;
}

void printNode(Node* ptn) {
  if (ptn == NULL) throw - 1;
  cout << "------" << endl;
  cout << ptn << ' ';
  cout << ptn->val << ' ';
  cout << ptn->next << endl;
}

void printList(Node* head) {
  while (!isEmptyList(head)) {
    printNode(head);
    head = head->next;
  }
}

void deleteList(Node*& head) {
  Node* ptn;
  while (!isEmptyList(head)) {
    ptn = head->next;
    delete head;
    head = ptn;
  }
}

void addNode(Node*& head, int val) {
  Node* newN = new Node;
  newN->next = NULL;
  newN->val = val;
  if (isEmptyList(head)) {
    head = newN;
    return;
  }
  Node* ptn = head;
  while (ptn->next != NULL) {
    ptn = ptn->next;
  }
  ptn->next = newN;
}

int main() {

  setlocale(LC_ALL, "rus");

  Node* head = NULL;

  int n, a;
  cout << "Enter action\n";
  cin >> n;

  while (n != 4) {

    if (n == 1) {
      cout << "Write a number\n";
      cin >> a;
      addNode(head, a);
    }

    if (n == 2) {
      printList(head);
      cout << '\n';
    }

    if (n == 3) {
      deleteList(head);
    }

    if (n != 1 && n != 2 && n != 3 && n != 4) {
      cout << "ИДИ НАХУЙ\n";
    }

    cout << "Enter action\n";
    cin >> n;

  }

}