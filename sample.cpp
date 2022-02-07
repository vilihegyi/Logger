#include "Logger.h"

int main() {
    LOG4CPLUS_INFO("Hello, the test has started");
    LOG4CPLUS_DEBUG("Debugging this application seems to work as well");
    LOG4CPLUS_TRACE("Theres nothing to trace in this sample!");
    LOG4CPLUS_WARNING("Program is about to end");
    LOG4CPLUS_ERROR("We're running out of examples");
    LOG4CPLUS_FATAL("There are no more logs to test. Program will now exit");

    return 0;
}
