#include "GUIView.h"

GUIView::GUIView(QWidget *parent) : QWidget(parent) {
    label = new QLabel(this);
    label->move(50, 50);
}

void GUIView::showData(const std::string& data) {
    label->setText(QString::fromStdString("Data from model: " + data));
    show();
}