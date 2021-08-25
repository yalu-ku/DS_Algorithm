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

//스택 삽입 함수
void push(Stack *stack, int data) {
    Node *node = (Node*)malloc(sizeof(Node));
    node->data = data; //넣고자하는 데이터
    node->next = stack->top;
    stack->top = node; //바꿔치기
}

void pop(Stack *stack) {
    if (stack->top == NULL) {
        printf("스택 언더플로우가 발생했습니다.\n");
        return -INF; //문제가 발생했음을 알려줌
    }
    Node *node = stack->top;
    int data = node->data;
    stack->top = node->next;
    free(node);
    return data;
    
}

void show(Stack *stack) {
    Node *cur = stack->top;
    printf("--- 스택의 최상단 ---\n");
    while (cur != NULL) {
        printf("%d\n", cur->data);
        cur = cur->next;
    }
    printf("--- 스택의 최하단 ---\n");
}

int main(void) {
    Stack s;
    s.top = NULL; //중요
    push(&s, 7); //메모리 정보 받아야함
    push(&s, 5); 
    push(&s, 4); 
    pop(&s); 
    push(&s, 6); 
    pop(&s);
    show(&s);
    system("pause");
    return 0;
}