#ifndef LOGGER_H
#define LOGGER_H

#include <string>
#include <fstream>

class Logger {
public:
    static void logError(const std::string& message);
    static void logInfo(const std::string& message);
};

#endif // LOGGER_H
