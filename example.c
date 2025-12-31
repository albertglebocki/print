#include "print.h"

int main(void) {
    print("Hello %s!", "world");

    println("Number: %d", 42);

    printerr("This is an error message: %d", -1);

    return 0;
}
