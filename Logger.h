#ifndef _LOGGER_H
#define _LOGGER_H

#define LOG4CPLUS_TRACE(...)    _log(LOG_LEVEL_TRACE, __FILE__, __LINE__, __VA_ARGS__)
#define LOG4CPLUS_DEBUG(...)    _log(LOG_LEVEL_DEBUG, __FILE__, __LINE__, __VA_ARGS__)
#define LOG4CPLUS_INFO(...)     _log(LOG_LEVEL_INFO, __FILE__, __LINE__, __VA_ARGS__)
#define LOG4CPLUS_WARNING(...)  _log(LOG_LEVEL_WARNING, __FILE__, __LINE__, __VA_ARGS__)
#define LOG4CPLUS_ERROR(...)    _log(LOG_LEVEL_ERROR, __FILE__, __LINE__, __VA_ARGS__)
#define LOG4CPLUS_FATAL(...)    _log(LOG_LEVEL_FATAL, __FILE__, __LINE__, __VA_ARGS__)

enum {
    LOG_LEVEL_TRACE,
    LOG_LEVEL_DEBUG,
    LOG_LEVEL_INFO,
    LOG_LEVEL_WARNING,
    LOG_LEVEL_ERROR,
    LOG_LEVEL_FATAL
} LOG_LEVEL;

void _log(int logLevel, char const *fileName, int loggedLine, char const *message, ...);

#endif // _LOGGER_H
