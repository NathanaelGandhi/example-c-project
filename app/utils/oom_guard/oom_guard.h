#ifndef OOM_GUARD_H
#define OOM_GUARD_H

/**
 * @brief OutOfMemory(OOM) Guard to protect against malloc() NULL returns.
 *
 * @param p
 * @return void*
 */
void *oom_guard(void *p);

#endif