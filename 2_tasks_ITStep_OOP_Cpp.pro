TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

INCLUDEPATH += \
                GoogleTest\gmock\include \
                GoogleTest\gtest\include \

SOURCES += counter.cpp \
    point.cpp \
    fraction.cpp \
    student.cpp \
    group.cpp \
    mystring.cpp \
    date.cpp \
    soulstime.cpp \
    myvector.cpp \
    singlylinkedlist.cpp \
    doublylinkedlist.cpp \
    mystack.cpp \
    mypriorityinarrayqueue.cpp \
    myprioritylinkedlistqueue.cpp \
    mydeque.cpp \
    main.cpp \
    CounterStrikeSimulator/weapon.cpp \
    CounterStrikeSimulator/knife.cpp \
    CounterStrikeSimulator/pistol.cpp \
    CounterStrikeSimulator/shootgun.cpp \
    CounterStrikeSimulator/machinegun.cpp \
    CounterStrikeSimulator/sniperriffle.cpp \
    CounterStrikeSimulator/granade.cpp \
    CounterStrikeSimulator/smokegranade.cpp \
    CounterStrikeSimulator/counterstrike.cpp \
    DataDeviceEditor/idevice.cpp \
    DataDeviceEditor/cusbdrive.cpp \
    DataDeviceEditor/cportablehdddrive.cpp \
    DataDeviceEditor/cdvddrive.cpp \
    DataDeviceEditor/datadeviceeditor.cpp \
    GoogleTest/gmock/src/gmock.cc \
    GoogleTest/gmock/src/gmock-main.cc \
    GoogleTest/gmock/src/gmock-all.cc \
    GoogleTest/gmock/src/gmock-cardinalities.cc \
    GoogleTest/gmock/src/gmock-internal-utils.cc \
    GoogleTest/gmock/src/gmock-matchers.cc \
    GoogleTest/gmock/src/gmock-spec-builders.cc \
    GoogleTest/gtest/src/gtest.cc \
    GoogleTest/gtest/src/gtest-main.cc \
    GoogleTest/gtest/src/gtest-all.cc \
    GoogleTest/gtest/src/gtest-death-test.cc \
    GoogleTest/gtest/src/gtest-filepatch.cc \
    GoogleTest/gtest/src/gtest-port.cc \
    GoogleTest/gtest/src/gtest-printers.cc \
    GoogleTest/gtest/src/gtest-test-part.cc \
    GoogleTest/gtest/src/gtest-typed-test.cc


HEADERS += \
    counter.h \
    point.h \
    fraction.h \
    student.h \
    group.h \
    mystring.h \
    date.h \
    soulstime.h \
    myvector.h \
    singlylinkedlist.h \
    doublylinkedlist.h \
    mystack.h \
    mypriorityinarrayqueue.h \
    myprioritylinkedlistqueue.h \
    mydeque.h \
    CounterStrikeSimulator/weapon.h \
    CounterStrikeSimulator/knife.h \
    CounterStrikeSimulator/pistol.h \
    CounterStrikeSimulator/shootgun.h \
    CounterStrikeSimulator/machinegun.h \
    CounterStrikeSimulator/sniperriffle.h \
    CounterStrikeSimulator/granade.h \
    CounterStrikeSimulator/smokegranade.h \
    CounterStrikeSimulator/counterstrike.h \
    DataDeviceEditor/idevice.h \
    DataDeviceEditor/cusbdrive.h \
    DataDeviceEditor/cportablehdddrive.h \
    DataDeviceEditor/cdvddrive.h \
    DataDeviceEditor/datadeviceeditor.h \
    Tests/test_configs/classmystringgtest.h



LIBS += -L$$PWD/GoogleTest/gtest/lib/ -lgtestd
LIBS += -L$$PWD/GoogleTest/gmock/lib/ -lgmock

