#pragma once
#include <iostream>
#include <string>
#include <exception>


class MyException : public std::exception {
    std::string errorMessage;

public:
    MyException(const std::string& message) : errorMessage(message) {}

    virtual const char* what() const throw() { return errorMessage.c_str(); };
};