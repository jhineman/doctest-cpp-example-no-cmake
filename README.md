# doctest-cpp-example-no-cmake
Bare bones example of using doctest without cmake

## How to compile

Make sure you have `doctest.h` available in the same directory or in your compiler's include path.

To compile `factorial.cpp` using g++:

```sh
/opt/homebrew/Cellar/gcc/15.1.0/bin/g++-15 -std=c++11 factorial.cpp -o factorial.out -I./doctest/doctest
```

**Pardon the homebrew nonsense resulting from g++/gcc being aliased to clang.**

Then run the tests:

```sh
./factorial
```