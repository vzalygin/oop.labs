QT       += core gui charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addstudentdialog.cpp \
    diagrammsdialog.cpp \
    main.cpp \
    mainwindow.cpp \
    numberfilterdialog.cpp \
    repository.cpp \
    student.cpp

HEADERS += \
    addstudentdialog.hpp \
    diagrammsdialog.hpp \
    mainwindow.hpp \
    numberfilterdialog.hpp \
    repository.hpp \
    student.hpp

FORMS += \
    addstudentdialog.ui \
    diagrammsdialog.ui \
    mainwindow.ui \
    numberfilterdialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
