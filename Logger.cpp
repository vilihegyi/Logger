#include "Logger.h"

#include <stdio.h>
#include <time.h>
#include <stdarg.h>

static const char *level_names[] = {
    "TRACE",
    "DEBUG",
    "INFO",
    "WARNING",
    "ERROR",
    "FATAL"
};

void _log(int logLevel, char const *fileName, int loggedLine, char const *message, ...)
{
    time_t currentTime = time(nullptr);
    struct tm *localTime = localtime(&currentTime);

    char buffer[16];
    buffer[strftime(buffer, sizeof(buffer), "%H:%M:%S", localTime)] = '\0';
    fprintf(stderr, "%s %s %s:%d ", buffer, level_names[logLevel], fileName, loggedLine);

    va_list args;

    va_start(args, message);
    vprintf(message, args);
    va_end(args);
    printf("\n");
    fflush(stderr);
}
