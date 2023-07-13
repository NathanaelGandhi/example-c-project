// # C Style Naming Convention
// ## Key: [ ] used for optional parameters. < > used for placeholders.
// | Element          | Naming Convention                        | Example(s)                                       |
// | :--------------: | :--------------------------------------: | :----------------------------------------------: |
// | filenames        | snake_case                               | header_file.h, source.c                          |
// | classes          | TitleCase                                | MyClass                                          |
// | structs          | [TitleCasePrefix_]TitleCase              | ExampleStruct, MyClass_ExampleStruct             |
// | enumerations     | [TitleCasePrefix_]TitleCase              | AnEnum, OtherClass_AnotherEnum                   |
// | functions        | [TitleCasePrefix_]snake_case             | fun_function, CoolClass_cool_function            |
// | constants        | [TitleCasePrefix_]UPPER_CASE             | SOME_LIMIT, MyClass_LOW_VALUE                    |
// | macros           | TitleCasePrefix_UPPER_CASE               | MyMacro_ADD_1(x)                                 |
// | local variables  | snake_case                               | hold_my_data                                     |
// | global variables | g_snake_case                             | g_is_global                                      |
// | booleans         | is_< element >_< condition >             | is_led_on, MyClass_is_value_true                 |
// | pointers         | p_< element >                            | p_my_data, g_p_global_data, p_MyClass_serialise  |
// | units            | < element >_< SI_base_or_derived_units > | rotation_rad, current_mA, TEMPERATURE_LIMIT_degC |

#include <stdio.h>

#include "example_class.h"

int main() {
    printf("Hello, World!\n");

    return 0;
}