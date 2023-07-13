/**
 * @file example_class.c
 *
 * @brief Source implementation example of a "Class" in C.
 *
 * @note Features private "class" functions.
 * @author Nathanael Gandhi
 * @link https://github.com/NathanaelGandhi
 */

#include "example_class.h"

/* Private Functions */

/**
 * @brief Private getter for the class variable "value".
 *
 * @param self
 * @return int32_t
 */
static int32_t _ExampleClass_get_value(const ExampleClass* const self) {
    return self->value;
}

/**
 * @brief Private setter for the the class variable "value".
 *
 * @param self
 * @param value
 */
static void _ExampleClass_set_value(ExampleClass* const self, int32_t value) {
    self->value = value;
    return;
}

/**
 * @brief Private addition of two int32_t numbers.
 *
 * @param a
 * @param b
 * @return int32_t
 */
static int32_t _ExampleClass_add(int32_t a, int32_t b) { return a + b; }

/**
 * @brief Private subtraction of two int32_t numbers.
 *
 * @param a
 * @param b
 * @return int32_t
 */
static int32_t _ExampleClass_sub(int32_t a, int32_t b) { return a - b; }

/* Public Functions */

void ExampleClass_init(ExampleClass* const self) {
    // assign class variable defaults
    self->value = 0;
    // assign class function pointers
    self->add = _ExampleClass_add;
    self->sub = _ExampleClass_sub;
    self->get_value = _ExampleClass_get_value;
    self->set_value = _ExampleClass_set_value;
    return;
}

void ExampleClass_deinit(ExampleClass* const self) { return; }
