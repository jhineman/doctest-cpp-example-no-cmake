# doctest-cpp-example-no-cmake
Bare bones example of using [doctest](https://github.com/doctest/doctest) without cmake.

## How to compile

Make sure you have `doctest.h` available in the same directory or in your compiler's include path. If you use
```sh
git clone --recurse-submodules https://github.com/jhineman/doctest-cpp-example-no-cmake.git
```
to clone this repository, the following compilation strategy will work straight away.

To compile `factorial.cpp` using g++:

```sh
/opt/homebrew/Cellar/gcc/15.1.0/bin/g++-15 -std=c++11 factorial.cpp -o factorial.out -I./doctest/doctest
```

**Pardon the homebrew nonsense resulting from g++/gcc being aliased to clang.**

Then run the tests:

```sh
./factorial.out
```