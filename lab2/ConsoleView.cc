#include <iostream>
#include "ConsoleView.h"

void ConsoleView::showData(const std::string& data) {
    std::cout << "Data from model: " << data << std::endl;
}