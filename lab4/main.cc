#include "virtualmachine.h"
#include "test.h"

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    TestVirtualMachine testObject;
    QTest::qExec(&testObject);

    return a.exec();
}
