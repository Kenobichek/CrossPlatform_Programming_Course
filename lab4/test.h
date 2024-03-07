#include <QtTest/QtTest>
#include "virtualmachine.h"

class TestVirtualMachine : public QObject
{
    Q_OBJECT

private slots:
    void testLoadOperation()
    {
        VirtualMachine vm;
        vm.execute(LOAD);
        QCOMPARE(vm.getMemoryValue(), 0);
    }

    void testAddOperation()
    {
        VirtualMachine vm;
        vm.execute(LOAD);
        vm.execute(ADD);
        QCOMPARE(vm.getMemoryValue(), 0);
        vm.execute(STORE);
        QCOMPARE(vm.getMemoryValue(), 1);
    }

    void testStoreOperation()
    {
        VirtualMachine vm;
        vm.execute(LOAD);
        vm.execute(ADD);
        vm.execute(STORE);
        QCOMPARE(vm.getMemoryValue(), 1);
    }
};
