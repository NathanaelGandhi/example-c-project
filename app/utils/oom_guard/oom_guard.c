#include "oom_guard.h"

#include <stddef.h>
#include <stdlib.h>

void *oom_guard(void *p) {
    if (p == NULL) {
        // out of memory
        exit(EXIT_FAILURE);
    }
    return p;
}