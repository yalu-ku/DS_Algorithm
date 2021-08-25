#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define INF 10000 //메모리공간 무한대

int arr[INF];
int count = 0;

void addBack(int data) {
    arr[count] = data;
    count++;
}

void addFirst(int data) {
    for (int i = count; i >= 1; i--) {
        arr[i] = arr[i - 1]; //한칸씩 당겨주기
    }
    arr[0] = data; //첫번째 원소에 데이터 넣기
    count++;
}

void show() {
    for (int i=0; i<count; i++){
        printf("%d ", arr[i]);
    }
}

int main(void) {
    addFirst(4);
    addFirst(5);
    addFirst(1);
    addBack(7);
    addBack(6);
    addBack(8);
    show();
    return 0;
} //공백넣어봤음