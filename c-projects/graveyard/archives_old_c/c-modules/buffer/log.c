#include "log.h"

void log_message(LogLevel level, const char *format, ...)
{
    const char *level_str;

    switch (level) {
        case LOG_INFO:
            level_str = "INFO";
            break;
        case LOG_WARNING:
            level_str = "WARNING";
            break;
        case LOG_ERROR:
            level_str = "ERROR";
            break;
    }

    va_list args;
    va_start(args, format);    
    fprintf(stderr, "[%s] ", level_str);
    vfprintf(stderr, format, args);
    fprintf(stderr, "\n");

    va_end(args);
}

void debug_assert(int condition, const char *message)
{
    if (!condition)
	{
        log_message(LOG_ERROR, "Assertion failed: %s", message);
    }
}

#ifdef DEBUG_MODE
    #define debug_print(format, ...) log_message(LOG_INFO, format, ##__VA_ARGS__)
#else
    #define debug_print(format, ...) ((void)0)
#endif
