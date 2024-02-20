#pragma once
#include "Model.h"
#include "View.h"

class Controller {
public:
    Controller(Model& model, View& view);
    void updateView() const;

private:
    Model& model;
    View& view;
};