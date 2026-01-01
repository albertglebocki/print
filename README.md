The following is a simple implementation of a print utilities for
the C programming language, inspired by other programming languages such as Rust.

To use the print utilities in your codebase just include the header:

```c
#include "print.h"

...
```

Example usage:

```c
#include "print.h"

int main() {
    println("Hello %s!", "world");

    println("Alice in wonderland %d", 123);

    return 0;
}
```

Output:

```
Hello world!
Alice in wonderland 123
```

