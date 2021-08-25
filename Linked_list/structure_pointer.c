#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 실제로 상용화할때에는 예외처리

typedef struct Node{
    int data;
    struct Node *next;
} Node;

Node *head;

void addFront(Node *root, int data) {
    Node *node = (Node*)malloc(sizeof(Node));
    node->data = data; //node의 data값 초기화
    node->next = root->next; //root==head
    root->next = node;
}

void removeFront(Node *root) {
    Node *front = root->next;
    root->next = front->next;
    free(front);
}

void freeAll(Node *root) {
    Node *cur = head->next;
    while (cur != NULL) {
        Node *next = cur->next;
        free(cur);
        cur = next;
    }
}

void showAll(Node *root) {
    Node *cur = head->next;
    while (cur != NULL) {
        printf("%d ", cur->data);
        cur = cur->next;
    }
}

int main(void) {
    head = (Node*)malloc(sizeof(Node));
    // Node *node1 = (Node*)malloc(sizeof(Node));
    // node1->data = 1;
    // Node *node2 = (Node*)malloc(sizeof(Node));
    // node2->data = 2;
    // head->next = node1;
    // node1->next = node2;
    // node2->next = NULL;
    // Node *cur = head->next;
    // while (cur != NULL){
    //     printf("%d", cur->data);
    //     cur = cur->next;
    // }
    head->next = NULL;
    addFront(head, 2);
    addFront(head, 1);
    addFront(head, 7);
    addFront(head, 9);
    addFront(head, 8);
    removeFront(head);
    showAll(head);
    freeAll(head);
    system("pause");
    return 0;
}
