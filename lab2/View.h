#pragma once
#include <string>

class View {
public:
    virtual void showData(const std::string& data) = 0;
};
