#ifndef FILESEARCHER_H
#define FILESEARCHER_H

#include <stdbool.h>

#ifdef __unix__
    #define ROOT_DIRECTORY "/"
#elif defined(_WIN32) || defined(WIN32)/
    #define ROOT_DIRECTORY "C:/"
#endif

void find(const char* fileName);

void searchInFolder(char* currentDirectoryPath, const char* fileName);

bool isInFolder(char* directoryPath, const char* fileName);

#endif //FILESEARCHER_H
