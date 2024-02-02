######################################################################
# Automatically generated by qmake (3.1) Fri Feb 2 12:51:02 2024
######################################################################

TEMPLATE = app
TARGET = OOP-Sensors
INCLUDEPATH += .
QT += widgets
QT += charts
# You can make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# Please consult the documentation of the deprecated API in order to know
# how to port your code away from it.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

# Input
HEADERS += AbstractSensor.h \
           LuminositySensor.h \
           MotionSensor.h \
           SensorContainer.h \
           SensorObserverInterface.h \
           SensorVisitorInterface.h \
           TemperatureSensor.h \
           Json/JsonFile.h \
           Json/Reader.h \
           Json/SensorJsonVisitor.h \
           View/ApplicationPanel.h \
           View/ChartPanel.h \
           View/Info.h \
           View/InfoPanel.h \
           View/InsertWindow.h \
           View/MainWindow.h \
           View/ModifyWindow.h \
           View/ModifyWindowVisitor.h \
           View/SearchPanel.h \
           View/SensorChartVisitor.h \
           View/SensorInfoVisitor.h \
           View/SensorPanel.h
SOURCES += AbstractSensor.cpp \
           LuminositySensor.cpp \
           main.cpp \
           MotionSensor.cpp \
           SensorContainer.cpp \
           TemperatureSensor.cpp \
           Json/JsonFile.cpp \
           Json/Reader.cpp \
           Json/SensorJsonVisitor.cpp \
           View/ApplicationPanel.cpp \
           View/ChartPanel.cpp \
           View/Info.cpp \
           View/InfoPanel.cpp \
           View/InsertWindow.cpp \
           View/MainWindow.cpp \
           View/ModifyWindow.cpp \
           View/ModifyWindowVisitor.cpp \
           View/SearchPanel.cpp \
           View/SensorChartVisitor.cpp \
           View/SensorInfoVisitor.cpp \
           View/SensorPanel.cpp
