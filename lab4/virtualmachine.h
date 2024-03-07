#pragma once
#include <QCoreApplication>
#include <QDebug>

enum Bytecode {
    LOAD,
    ADD,
    STORE
};

class VirtualMachine : public QObject {
    Q_OBJECT
public:
    explicit VirtualMachine(QObject *parent = nullptr) : QObject(parent), accumulator(0), memory(0) {}

    void execute(Bytecode bytecode) {
        switch (bytecode) {
            case LOAD:
                qDebug() << "LOAD operation executed.";
                accumulator = 0;
                break;
            case ADD:
                qDebug() << "ADD operation executed.";
                accumulator += 1;
                break;
            case STORE:
                qDebug() << "STORE operation executed.";
                memory = accumulator;
                break;
            default:
                qCritical() << "Unknown bytecode encountered.";
                break;
        }
    }

    int getMemoryValue() const {
        return memory;
    }

private:
    int accumulator;
    int memory;
};
