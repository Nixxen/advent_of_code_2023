// assert_with_print.h

#ifndef ASSERT_WITH_PRINT_H
#define ASSERT_WITH_PRINT_H

#include <iostream>
#include <cassert>

// Macro to create a custom assertion with variable name, actual, and expected values
#define ASSERT_WITH_PRINT(actual, expected)                                           \
    do                                                                                \
    {                                                                                 \
        if (!((actual) == (expected)))                                                \
        {                                                                             \
            std::cerr << "Assertion failed: " << #actual << " == " << (expected)      \
                      << ", actual value: " << (actual)                               \
                      << ", file " << __FILE__ << ", line " << __LINE__ << std::endl; \
            assert(false);                                                            \
        }                                                                             \
    } while (false)

#endif // ASSERT_WITH_PRINT_H
