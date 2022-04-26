#include "hello.h"

int main(int argc, char* argv[]) {
    if (argc > 1) {
        hello_printf(argv[1]);
    } else {
        hello_printf("stranger");
    }
}
