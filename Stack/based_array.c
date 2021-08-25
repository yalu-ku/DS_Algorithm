#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10000
#define INF 99999999

int stack[SIZE];
int top = -1; //������ �ֻ��

void push(int data) {
    if (top == SIZE -1) {
        printf("���� �����÷ο찡 �߻��߽��ϴ�. \n");
        return;
    }
    // �׷��� ������
    stack[++top] = data;
}

//�����͸� �̾Ƴ��� �Լ�
int pop() {
    // ���Ұ� �ϳ��� ���� ����
    if (top == -1) {
        printf("���� ����÷ο찡 �߻��߽��ϴ�. \n");
        return;
    }
    return stack[top--];
}

void show() {
    printf("--- ������ �ֻ�� ---\n");
    for (int i = top; i>=0; i--) {
        printf("%d\n", stack[i]);
    }
    printf("--- ������ ���ϴ� ---\n");
}

int main(void) {
    push(7);
    push(5);
    push(4);
    pop();
    push(6);
    pop();
    show();
    system("pause");
    return 0;
}