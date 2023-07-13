/**
 * @file example_class.h
 *
 * @brief Public API example of a "Class" implementation in C.
 *
 * @note Features class functions through the use of function pointers.
 * @author Nathanael Gandhi
 * @link https://github.com/NathanaelGandhi
 */

#ifndef EXAMPLE_CLASS_H
#define EXAMPLE_CLASS_H

#include <stdint.h>

/* class ExampleClass */
typedef struct ExampleClass ExampleClass;
struct ExampleClass {
    int32_t value;
    int32_t (*add)(int32_t, int32_t);
    int32_t (*sub)(int32_t, int32_t);
    int32_t (*get_value)(const ExampleClass* const self);
    void (*set_value)(ExampleClass* const self, int32_t id);
};

/* Public Functions */

/**
 * @brief Initialisation of class defaults and function pointers.
 *
 * @note If this class was intended to allocate itself in memory (malloc) an
 * ExampleClass_create() function that also calls this init and then returns the
 * class pointer should be created.
 * @param self Class pointer
 */
void ExampleClass_init(ExampleClass* const self);

/**
 * @brief Deintialisation of the class.
 *
 * @note If this class had allocated itself in memory (malloc) then an
 * ExampleClass_destroy() function that calls this deinit and then frees the
 * class pointer should be created.
 * @param self
 */
void ExampleClass_deinit(ExampleClass* const self);

#endif