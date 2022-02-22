#include <iostream>

int sub(int a, int b) {
    return a-b;
}

int add(int a, int b) {
    return a+b;
}

void test1(){
    int ans = add(5,5);
    if(ans == 10) {
        std::cout << "test1 passed !!" << std::endl;
    } else {
        std::cout << "test1 failed !!" << std::endl;
    }
}

int main() {
    std::cout << "Hello World!!" << std::endl;
    return 0;
}
