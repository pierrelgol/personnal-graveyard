#ifndef LOG_H
#define LOG_H

#include <stdio.h>
#include <stdarg.h>

typedef enum {
    LOG_INFO,
    LOG_WARNING,
    LOG_ERROR
} LogLevel;

void log_message(LogLevel level, const char *format, ...);
void debug_assert(int condition, const char *message);
void debug_print(const char *format, ...);

#endif
