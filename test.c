#include <stdio.h>
void test(int type);


int main() {
    test(0);
    return 0;
}

const int RETURN = 0;
const int NOT_RETURN = 1;

void test(int type) {
    printf("�ȳ��ϼ���\n");
    printf("�����Ұž�?\n");
    if (type == RETURN) {
        return ;
    }
    printf("���Ͼ��߽��ϴ�.");
}