#include <QApplication>
#include "Model.h"
#include "ConsoleView.h"
#include "GUIView.h"
#include "Controller.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    Model model;

    // Console Mode
    ConsoleView consoleView;
    Controller consoleController(model, consoleView);
    consoleController.updateView();

    // GUI Mode
    GUIView guiView;
    Controller guiController(model, guiView);
    guiController.updateView();

    return app.exec();
}
