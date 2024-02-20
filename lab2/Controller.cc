#include "Controller.h"

Controller::Controller(Model& model, View& view) : model(model), view(view) {}

void Controller::updateView() const {
    std::string data = model.getData();
    view.showData(data);
}
