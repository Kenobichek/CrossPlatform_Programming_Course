#pragma once

#include <QObject>
#include <QDebug>
#include <vector>

class VirtualMachine : public QObject {
    Q_OBJECT
public:
    explicit VirtualMachine(QObject *parent = nullptr) : QObject(parent) {}

    void execute(const std::vector<int>& bytecode) {
        for (const int& instruction : bytecode) {
            switch (instruction) {
                case 0x00:
                    qDebug() << "0x00 operation executed: LOAD.";
                    accumulator = 0;
                    break;
                case 0x01:
                    qDebug() << "0x01 operation executed: ADD.";
                    accumulator += 1;
                    break;
                case 0x02:
                    qDebug() << "0x02 operation executed: STORE.";
                    memory = accumulator;
                    break;
                default:
                    qCritical() << "Unknown bytecode encountered: " << instruction;
                    break;
            }
        }
    }

    int getMemoryValue() const {
        return memory;
    }

private:
    int accumulator = -1;
    int memory = -1;
};
