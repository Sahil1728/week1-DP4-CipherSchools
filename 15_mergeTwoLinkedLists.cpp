// Leetcode link of the problem:
// https://leetcode.com/problems/merge-two-sorted-lists/

#include<bits/stdc++.h>
using namespace std;

// class list node
class ListNode {
public:
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// class linked list
class LinkedList {
public:
    ListNode *head;
    LinkedList() {
        head = NULL;
    }
    void insert(int x) {
        ListNode *temp = new ListNode(x);
        if (head == NULL) {
            head = temp;
            return;
        }
        ListNode *curr = head;
        while (curr->next != NULL) {
            curr = curr->next;
        }
        curr->next = temp;
    }
    void print() {
        ListNode *curr = head;
        while (curr != NULL) {
            cout << curr->val << " ";
            curr = curr->next;
        }
        cout << endl;
    }
};

// function to merge two sorted linked lists
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    if (l1 == NULL) {
        return l2;
    }
    if (l2 == NULL) {
        return l1;
    }
    ListNode *head = NULL;
    if (l1->val < l2->val) {
        head = l1;
        l1 = l1->next;
    } else {
        head = l2;
        l2 = l2->next;
    }
    ListNode *curr = head;
    while (l1 != NULL && l2 != NULL) {
        if (l1->val < l2->val) {
            curr->next = l1;
            l1 = l1->next;
        } else {
            curr->next = l2;
            l2 = l2->next;
        }
        curr = curr->next;
    }
    if (l1 != NULL) {
        curr->next = l1;
    }
    if (l2 != NULL) {
        curr->next = l2;
    }
    return head;
}

// main function
int main() {
    LinkedList l1, l2;
    int n1, n2;
    cout<<"Enter the number of elements in the first linked list:";
    cin >> n1;
    cout<<"Enter the elements of the first linked list:";
    for (int i = 0; i < n1; i++) {
        int x;
        cin >> x;
        l1.insert(x);
    }
    cout<<"Enter the number of elements in the second linked list:";
    cin >> n2;
    cout<<"Enter the elements of the second linked list:";
    for (int i = 0; i < n2; i++) {
        int x;
        cin >> x;
        l2.insert(x);
    }
    ListNode *head = mergeTwoLists(l1.head, l2.head);
    ListNode *curr = head;
    cout << "The merged linked list is: ";
    while (curr != NULL) {
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << endl;
    return 0;
}