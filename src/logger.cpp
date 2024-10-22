#include "logger.h"
#include <iostream>

void Logger::logError(const std::string& message) {
    std::ofstream errorLog("error.log", std::ios_base::app);
    errorLog << "[ERROR] " << message << std::endl;
}

void Logger::logInfo(const std::string& message) {
    std::ofstream infoLog("info.log", std::ios_base::app);
    infoLog << "[INFO] " << message << std::endl;
}
