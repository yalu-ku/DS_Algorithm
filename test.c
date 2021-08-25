#include <stdio.h>
void test(int type);


int main() {
    test(0);
    return 0;
}

const int RETURN = 0;
const int NOT_RETURN = 1;

void test(int type) {
    printf("안녕하세요\n");
    printf("리턴할거야?\n");
    if (type == RETURN) {
        return ;
    }
    printf("리턴안했습니다.");
}