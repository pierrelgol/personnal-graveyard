#include "bsq_log.h"
#include "bsq.h"


void log_message(LogLevel level, const char *format, ...) 
{
    usleep(50000);
    const char *level_str;
    const char *color_code;

    switch (level) {
        case LOG_INFO:
            level_str = "INFO";
            color_code = "\x1B[32m"; // Green
            break;
        case LOG_WARNING:
            level_str = "WARNING";
            color_code = "\x1B[33m"; // Orange/Yellow
            break;
        case LOG_ERROR:
            level_str = "ERROR";
            color_code = "\x1B[31m"; // Red
            break;
        default:
            level_str = "UNKNOWN";
            color_code = "\x1B[0m"; // Reset color
    }

    va_list args;
    va_start(args, format);

    fprintf(stderr, "[%s%s\x1B[0m] ", color_code, level_str);
    vfprintf(stderr, format, args);
    fprintf(stderr, "\n");

    va_end(args);
}

void debug_assert_impl(const char *condition_str, int condition, const char *format, ...)
{
    if (!condition) {
        va_list args;
        va_start(args, format);

        fprintf(stderr, "[%s%s\x1B[0m] Assertion failed: %s - ", "\x1B[31m", "ERROR", condition_str);
        vfprintf(stderr, format, args);
        fprintf(stderr, "\n");

        va_end(args);
    }
}
