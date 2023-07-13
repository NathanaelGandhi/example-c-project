/**
 * @file app.c
 *
 * @brief Main application entry point
 *
 * @author Nathanael Gandhi
 * @link https://github.com/NathanaelGandhi
 */

/*##############################################################################
// # C Style Naming Convention                                                 |
// ## Key: [ ] used for optional parameters. < > used for placeholders.        |
// | Element     | Naming Convention            | Example(s)                   |
// | :---------: | :--------------------------: | :--------------------------: |
// | filenames   | snake_case                   | header_file.h, source.c      |
// | classes     | TitleCase                    | MyClass                      |
// | structs     | [TitleCasePrefix_]TitleCase  | MyStruct, MyClass_MyStruct   |
// | enums       | [TitleCasePrefix_]TitleCase  | AnEnum, MyClass_AnotherEnum  |
// | functions   | [TitleCasePrefix_]lower_case | my_func, CoolClass_my_func   |
// | constants   | [TitleCasePrefix_]UPPER_CASE | SOME_LIMIT, MyClass_LOW_VAL  |
// | macros      | TitleCasePrefix_UPPER_CASE   | MyMacro_ADD_1(x)             |
// | local vars  | snake_case                   | hold_my_data                 |
// | global vars | g_snake_case                 | g_is_global                  |
// | booleans    | is_< element >_< condition > | is_led_on, MyClass_is_led_on |
// | units       | < element >_< SI_units >     | rotation_rad, current_mA     |
//############################################################################*/

#include <stdio.h>

#include "example_class.h"

/* Function Prototypes */
void App_run_example_class(void);

/**
 * @brief Application entry function
 *
 * @return int
 */
int main() {
    printf("Hello, World!\n");

    App_run_example_class();

    return 0;
}

/**
 * @brief Demonstrate the functionality available in the ExampleClass.
 *
 */
void App_run_example_class(void) {
    /* ExampleClass */
    int32_t num_a = 1, num_b = 2;
    // create class object
    ExampleClass class_object;

    // call default class setup
    ExampleClass_init(&class_object);

    // use class functions to add two numbers and store the result in a class
    // var. Then print this value to standard output
    class_object.set_value(&class_object, class_object.add(num_a, num_b));
    printf("[ExampleClass] Add %d & %d = %d\n", num_a, num_b,
           class_object.get_value(&class_object));

    // use class functions to subtract numbers and store the result in a
    // class var. Then print this value to standard output
    class_object.set_value(&class_object, class_object.sub(num_a, num_b));
    printf("[ExampleClass] Sub %d & %d = %d\n", num_a, num_b,
           class_object.get_value(&class_object));

    // call default class teardown
    ExampleClass_deinit(&class_object);
}