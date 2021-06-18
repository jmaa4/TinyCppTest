# TinyCppTest

A small, header-only C++ unit testing library. With TinyCppTest you can set up your test environment in a couple of minutes. You only have to include one header file in your project, init the library in the main function, and start testing.

[![Build status](https://ci.appveyor.com/api/projects/status/6ih2b1i76b0u5wku?svg=true)](https://ci.appveyor.com/project/kovacsv/tinycpptest)
[![Build Status](https://travis-ci.com/kovacsv/TinyCppTest.svg?branch=main)](https://travis-ci.com/kovacsv/TinyCppTest)

# How To Use?

### Get the Library

Download the [Sources/TinyCppTest.hpp](Sources/TinyCppTest.hpp) file, and add it to your project.

### Init the Library

Just call `RunTests` in your main function. It will return true if every tests are successful, false otherwise.

```cpp
#include "TinyCppTest.hpp"

int main (int, char*[])
{
    if (!TinyCppTest::RunTests ()) {
        return 1;
    }
    return 0;
}
```

### Write Tests

You can write tests in any C++ files using the `TEST` macro. Use the `ASSERT` macro to check conditions.

```cpp
#include "TinyCppTest.hpp"

TEST (AdditionTest)
{
    ASSERT (40 + 2 == 42);
}

TEST (SubtractionTest)
{
    ASSERT (44 - 2 == 42);
}
```

### Run Tests

Run the created executable file, and check the results in the console.
