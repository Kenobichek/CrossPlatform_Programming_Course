#include <QtTest/QtTest>
#include "virtualmachine.h"

class TestVirtualMachine : public QObject {
    Q_OBJECT
private slots:
    void testLoad() {
        VirtualMachine vm;
        vm.execute({0x00}); // LOAD
        QCOMPARE(vm.getMemoryValue(), -1);
    }

    void testLoadStore() {
        VirtualMachine vm;
        vm.execute({0x00, 0x02}); // LOAD, STORE
        QCOMPARE(vm.getMemoryValue(), 0);
    }

    void testAdd() {
        VirtualMachine vm;
        vm.execute({0x00, 0x01}); // LOAD, ADD
        QCOMPARE(vm.getMemoryValue(), -1);
    }

    void testStore() {
        VirtualMachine vm;
        vm.execute({0x00, 0x01, 0x02}); // LOAD, ADD, STORE
        QCOMPARE(vm.getMemoryValue(), 1);
    }

    void testUnknownBytecode() {
        VirtualMachine vm;
        vm.execute({0x10}); // Unknown bytecode
        QCOMPARE(vm.getMemoryValue(), -1);
    }
};
