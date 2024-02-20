#pragma once
#include "View.h"

class ConsoleView : public View {
public:
    void showData(const std::string& data) override;
};
