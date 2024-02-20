#pragma once
#include <QWidget>
#include <QLabel>

#include "View.h"

class GUIView : public QWidget, public View {
    Q_OBJECT
public:
    GUIView(QWidget *parent = nullptr);
    void showData(const std::string& data) override;

private:
    QLabel *label;
};