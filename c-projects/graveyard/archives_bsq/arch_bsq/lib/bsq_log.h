#ifndef BSQ_LOG_H
#define BSQ_LOG_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

typedef enum {
    LOG_INFO,
    LOG_WARNING,
    LOG_ERROR
} LogLevel;

#define STRINGIFY(x) #x
#define EXPDD(v) "Expected value for " STRINGIFY(v) " is: %d Got %d"
#define EXPCC(v) "Expected value for " STRINGIFY(v) " is: %c Got %c"


#define debug_assert(condition, ...) \
    do { \
        if (!(condition)) { \
            debug_assert_impl(#condition, condition, __VA_ARGS__); \
        } \
    } while (0)

void log_message(LogLevel level, const char *format, ...);
void debug_assert_impl(const char *condition_str, int condition, const char *format, ...);

#endif
