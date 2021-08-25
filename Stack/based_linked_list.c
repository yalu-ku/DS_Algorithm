#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define INF 99999999

typedef struct {
    int data;
    struct Node *next;
} Node;

typedef struct {
    Node *top;
} Stack;

//���� ���� �Լ�
void push(Stack *stack, int data) {
    Node *node = (Node*)malloc(sizeof(Node));
    node->data = data; //�ְ����ϴ� ������
    node->next = stack->top;
    stack->top = node; //�ٲ�ġ��
}

void pop(Stack *stack) {
    if (stack->top == NULL) {
        printf("���� ����÷ο찡 �߻��߽��ϴ�.\n");
        return -INF; //������ �߻������� �˷���
    }
    Node *node = stack->top;
    int data = node->data;
    stack->top = node->next;
    free(node);
    return data;
    
}

void show(Stack *stack) {
    Node *cur = stack->top;
    printf("--- ������ �ֻ�� ---\n");
    while (cur != NULL) {
        printf("%d\n", cur->data);
        cur = cur->next;
    }
    printf("--- ������ ���ϴ� ---\n");
}

int main(void) {
    Stack s;
    s.top = NULL; //�߿�
    push(&s, 7); //�޸� ���� �޾ƾ���
    push(&s, 5); 
    push(&s, 4); 
    pop(&s); 
    push(&s, 6); 
    pop(&s);
    show(&s);
    system("pause");
    return 0;
}