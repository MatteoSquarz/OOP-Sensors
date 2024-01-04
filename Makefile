#############################################################################
# Makefile for building: OOP-Sensors
# Generated by qmake (3.1) (Qt 6.2.4)
# Project:  OOP-Sensors.pro
# Template: app
# Command: /usr/bin/qmake -o Makefile OOP-Sensors.pro
#############################################################################

MAKEFILE      = Makefile

EQ            = =

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_NO_DEBUG -DQT_CHARTS_LIB -DQT_OPENGLWIDGETS_LIB -DQT_WIDGETS_LIB -DQT_OPENGL_LIB -DQT_GUI_LIB -DQT_CORE_LIB
CFLAGS        = -pipe -O2 -Wall -Wextra -D_REENTRANT -fPIC $(DEFINES)
CXXFLAGS      = -pipe -O2 -Wall -Wextra -D_REENTRANT -fPIC $(DEFINES)
INCPATH       = -I. -I. -I/usr/include/x86_64-linux-gnu/qt6 -I/usr/include/x86_64-linux-gnu/qt6/QtCharts -I/usr/include/x86_64-linux-gnu/qt6/QtOpenGLWidgets -I/usr/include/x86_64-linux-gnu/qt6/QtWidgets -I/usr/include/x86_64-linux-gnu/qt6/QtOpenGL -I/usr/include/x86_64-linux-gnu/qt6/QtGui -I/usr/include/x86_64-linux-gnu/qt6/QtCore -I. -I/usr/lib/x86_64-linux-gnu/qt6/mkspecs/linux-g++
QMAKE         = /usr/bin/qmake
DEL_FILE      = rm -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
COPY          = cp -f
COPY_FILE     = cp -f
COPY_DIR      = cp -f -R
INSTALL_FILE  = install -m 644 -p
INSTALL_PROGRAM = install -m 755 -p
INSTALL_DIR   = cp -f -R
QINSTALL      = /usr/bin/qmake -install qinstall
QINSTALL_PROGRAM = /usr/bin/qmake -install qinstall -exe
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
TAR           = tar -cf
COMPRESS      = gzip -9f
DISTNAME      = OOP-Sensors1.0.0
DISTDIR = /home/student/Documents/GitHub/OOP-Sensors/.tmp/OOP-Sensors1.0.0
LINK          = g++
LFLAGS        = -Wl,-O1 -Wl,-rpath-link,/usr/lib/x86_64-linux-gnu
LIBS          = $(SUBLIBS) /usr/lib/x86_64-linux-gnu/libQt6Charts.so /usr/lib/x86_64-linux-gnu/libGL.so /usr/lib/x86_64-linux-gnu/libQt6OpenGLWidgets.so /usr/lib/x86_64-linux-gnu/libQt6Widgets.so /usr/lib/x86_64-linux-gnu/libQt6OpenGL.so /usr/lib/x86_64-linux-gnu/libQt6Gui.so /usr/lib/x86_64-linux-gnu/libGLX.so /usr/lib/x86_64-linux-gnu/libOpenGL.so /usr/lib/x86_64-linux-gnu/libQt6Core.so -lpthread -lGLX -lOpenGL   
AR            = ar cqs
RANLIB        = 
SED           = sed
STRIP         = strip

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = AbstractSensor.cpp \
		LuminositySensor.cpp \
		main.cpp \
		MotionSensor.cpp \
		TemperatureSensor.cpp \
		View/ApplicationPanel.cpp \
		View/ChartPanel.cpp \
		View/Info.cpp \
		View/InfoPanel.cpp \
		View/InsertPanel.cpp \
		View/InsertWindow.cpp \
		View/MainWindow.cpp \
		View/SearchPanel.cpp \
		View/SensorChartVisitor.cpp \
		View/SensorInfoVisitor.cpp \
		View/SensorPanel.cpp moc_ApplicationPanel.cpp \
		moc_ChartPanel.cpp \
		moc_Info.cpp \
		moc_InfoPanel.cpp \
		moc_InsertPanel.cpp \
		moc_InsertWindow.cpp \
		moc_MainWindow.cpp \
		moc_SearchPanel.cpp \
		moc_SensorPanel.cpp
OBJECTS       = AbstractSensor.o \
		LuminositySensor.o \
		main.o \
		MotionSensor.o \
		TemperatureSensor.o \
		ApplicationPanel.o \
		ChartPanel.o \
		Info.o \
		InfoPanel.o \
		InsertPanel.o \
		InsertWindow.o \
		MainWindow.o \
		SearchPanel.o \
		SensorChartVisitor.o \
		SensorInfoVisitor.o \
		SensorPanel.o \
		moc_ApplicationPanel.o \
		moc_ChartPanel.o \
		moc_Info.o \
		moc_InfoPanel.o \
		moc_InsertPanel.o \
		moc_InsertWindow.o \
		moc_MainWindow.o \
		moc_SearchPanel.o \
		moc_SensorPanel.o
DIST          = /usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/spec_pre.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/common/unix.conf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/common/linux.conf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/common/sanitize.conf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/common/gcc-base.conf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/common/gcc-base-unix.conf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/common/g++-base.conf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/common/g++-unix.conf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/qconfig.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_charts.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_chartsqml.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_concurrent.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_concurrent_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_core.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_core_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_dbus.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_dbus_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_devicediscovery_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_eglfs_kms_gbm_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_eglfs_kms_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_eglfsdeviceintegration_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_fb_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_gui.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_gui_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_input_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_kms_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_network.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_network_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_opengl.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_opengl_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_openglwidgets.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_openglwidgets_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_printsupport.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_printsupport_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_sql.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_sql_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_svg.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_svgwidgets.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_testlib.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_testlib_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_widgets.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_widgets_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_xml.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_xml_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/qt_functions.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/qt_config.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/linux-g++/qmake.conf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/spec_post.prf \
		.qmake.stash \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/exclusive_builds.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/toolchain.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/default_pre.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/resolve_config.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/default_post.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/warn_on.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/qt.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/resources_functions.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/resources.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/moc.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/unix/opengl.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/uic.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/unix/thread.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/qmake_use.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/file_copies.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/testcase_targets.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/exceptions.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/yacc.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/lex.prf \
		OOP-Sensors.pro AbstractSensor.h \
		LuminositySensor.h \
		MotionSensor.h \
		SensorObserverInterface.h \
		SensorVisitorInterface.h \
		TemperatureSensor.h \
		View/ApplicationPanel.h \
		View/ChartPanel.h \
		View/Info.h \
		View/InfoPanel.h \
		View/InsertPanel.h \
		View/InsertWindow.h \
		View/MainWindow.h \
		View/SearchPanel.h \
		View/SensorChartVisitor.h \
		View/SensorInfoVisitor.h \
		View/SensorPanel.h AbstractSensor.cpp \
		LuminositySensor.cpp \
		main.cpp \
		MotionSensor.cpp \
		TemperatureSensor.cpp \
		View/ApplicationPanel.cpp \
		View/ChartPanel.cpp \
		View/Info.cpp \
		View/InfoPanel.cpp \
		View/InsertPanel.cpp \
		View/InsertWindow.cpp \
		View/MainWindow.cpp \
		View/SearchPanel.cpp \
		View/SensorChartVisitor.cpp \
		View/SensorInfoVisitor.cpp \
		View/SensorPanel.cpp
QMAKE_TARGET  = OOP-Sensors
DESTDIR       = 
TARGET        = OOP-Sensors


first: all
####### Build rules

OOP-Sensors:  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: OOP-Sensors.pro /usr/lib/x86_64-linux-gnu/qt6/mkspecs/linux-g++/qmake.conf /usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/spec_pre.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/common/unix.conf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/common/linux.conf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/common/sanitize.conf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/common/gcc-base.conf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/common/gcc-base-unix.conf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/common/g++-base.conf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/common/g++-unix.conf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/qconfig.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_charts.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_chartsqml.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_concurrent.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_concurrent_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_core.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_core_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_dbus.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_dbus_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_devicediscovery_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_eglfs_kms_gbm_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_eglfs_kms_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_eglfsdeviceintegration_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_fb_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_gui.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_gui_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_input_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_kms_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_network.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_network_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_opengl.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_opengl_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_openglwidgets.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_openglwidgets_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_printsupport.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_printsupport_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_sql.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_sql_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_svg.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_svgwidgets.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_testlib.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_testlib_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_widgets.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_widgets_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_xml.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_xml_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/qt_functions.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/qt_config.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/linux-g++/qmake.conf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/spec_post.prf \
		.qmake.stash \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/exclusive_builds.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/toolchain.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/default_pre.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/resolve_config.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/default_post.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/warn_on.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/qt.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/resources_functions.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/resources.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/moc.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/unix/opengl.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/uic.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/unix/thread.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/qmake_use.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/file_copies.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/testcase_targets.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/exceptions.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/yacc.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/lex.prf \
		OOP-Sensors.pro \
		/usr/lib/x86_64-linux-gnu/libQt6Charts.prl \
		/usr/lib/x86_64-linux-gnu/libQt6OpenGLWidgets.prl \
		/usr/lib/x86_64-linux-gnu/libQt6Widgets.prl \
		/usr/lib/x86_64-linux-gnu/libQt6OpenGL.prl \
		/usr/lib/x86_64-linux-gnu/libQt6Gui.prl \
		/usr/lib/x86_64-linux-gnu/libQt6Core.prl
	$(QMAKE) -o Makefile OOP-Sensors.pro
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/spec_pre.prf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/common/unix.conf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/common/linux.conf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/common/sanitize.conf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/common/gcc-base.conf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/common/gcc-base-unix.conf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/common/g++-base.conf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/common/g++-unix.conf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/qconfig.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_charts.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_chartsqml.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_concurrent.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_concurrent_private.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_core.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_core_private.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_dbus.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_dbus_private.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_devicediscovery_support_private.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_eglfs_kms_gbm_support_private.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_eglfs_kms_support_private.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_eglfsdeviceintegration_private.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_fb_support_private.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_gui.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_gui_private.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_input_support_private.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_kms_support_private.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_network.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_network_private.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_opengl.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_opengl_private.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_openglwidgets.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_openglwidgets_private.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_printsupport.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_printsupport_private.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_sql.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_sql_private.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_svg.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_svgwidgets.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_testlib.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_testlib_private.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_widgets.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_widgets_private.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_xml.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_xml_private.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/qt_functions.prf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/qt_config.prf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/linux-g++/qmake.conf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/spec_post.prf:
.qmake.stash:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/exclusive_builds.prf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/toolchain.prf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/default_pre.prf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/resolve_config.prf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/default_post.prf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/warn_on.prf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/qt.prf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/resources_functions.prf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/resources.prf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/moc.prf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/unix/opengl.prf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/uic.prf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/unix/thread.prf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/qmake_use.prf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/file_copies.prf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/testcase_targets.prf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/exceptions.prf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/yacc.prf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/lex.prf:
OOP-Sensors.pro:
/usr/lib/x86_64-linux-gnu/libQt6Charts.prl:
/usr/lib/x86_64-linux-gnu/libQt6OpenGLWidgets.prl:
/usr/lib/x86_64-linux-gnu/libQt6Widgets.prl:
/usr/lib/x86_64-linux-gnu/libQt6OpenGL.prl:
/usr/lib/x86_64-linux-gnu/libQt6Gui.prl:
/usr/lib/x86_64-linux-gnu/libQt6Core.prl:
qmake: FORCE
	@$(QMAKE) -o Makefile OOP-Sensors.pro

qmake_all: FORCE


all: Makefile OOP-Sensors

dist: distdir FORCE
	(cd `dirname $(DISTDIR)` && $(TAR) $(DISTNAME).tar $(DISTNAME) && $(COMPRESS) $(DISTNAME).tar) && $(MOVE) `dirname $(DISTDIR)`/$(DISTNAME).tar.gz . && $(DEL_FILE) -r $(DISTDIR)

distdir: FORCE
	@test -d $(DISTDIR) || mkdir -p $(DISTDIR)
	$(COPY_FILE) --parents $(DIST) $(DISTDIR)/
	$(COPY_FILE) --parents /usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/data/dummy.cpp $(DISTDIR)/
	$(COPY_FILE) --parents AbstractSensor.h LuminositySensor.h MotionSensor.h SensorObserverInterface.h SensorVisitorInterface.h TemperatureSensor.h View/ApplicationPanel.h View/ChartPanel.h View/Info.h View/InfoPanel.h View/InsertPanel.h View/InsertWindow.h View/MainWindow.h View/SearchPanel.h View/SensorChartVisitor.h View/SensorInfoVisitor.h View/SensorPanel.h $(DISTDIR)/
	$(COPY_FILE) --parents AbstractSensor.cpp LuminositySensor.cpp main.cpp MotionSensor.cpp TemperatureSensor.cpp View/ApplicationPanel.cpp View/ChartPanel.cpp View/Info.cpp View/InfoPanel.cpp View/InsertPanel.cpp View/InsertWindow.cpp View/MainWindow.cpp View/SearchPanel.cpp View/SensorChartVisitor.cpp View/SensorInfoVisitor.cpp View/SensorPanel.cpp $(DISTDIR)/


clean: compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


distclean: clean 
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) .qmake.stash
	-$(DEL_FILE) Makefile


####### Sub-libraries

mocclean: compiler_moc_header_clean compiler_moc_objc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_objc_header_make_all compiler_moc_source_make_all

check: first

benchmark: first

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_moc_predefs_make_all: moc_predefs.h
compiler_moc_predefs_clean:
	-$(DEL_FILE) moc_predefs.h
moc_predefs.h: /usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/data/dummy.cpp
	g++ -pipe -O2 -Wall -Wextra -dM -E -o moc_predefs.h /usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/data/dummy.cpp

compiler_moc_header_make_all: moc_ApplicationPanel.cpp moc_ChartPanel.cpp moc_Info.cpp moc_InfoPanel.cpp moc_InsertPanel.cpp moc_InsertWindow.cpp moc_MainWindow.cpp moc_SearchPanel.cpp moc_SensorPanel.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_ApplicationPanel.cpp moc_ChartPanel.cpp moc_Info.cpp moc_InfoPanel.cpp moc_InsertPanel.cpp moc_InsertWindow.cpp moc_MainWindow.cpp moc_SearchPanel.cpp moc_SensorPanel.cpp
moc_ApplicationPanel.cpp: View/ApplicationPanel.h \
		AbstractSensor.h \
		SensorVisitorInterface.h \
		SensorObserverInterface.h \
		View/SensorPanel.h \
		View/InfoPanel.h \
		View/Info.h \
		View/ChartPanel.h \
		View/SearchPanel.h \
		View/InsertWindow.h \
		moc_predefs.h \
		/usr/lib/qt6/libexec/moc
	/usr/lib/qt6/libexec/moc $(DEFINES) --include /home/student/Documents/GitHub/OOP-Sensors/moc_predefs.h -I/usr/lib/x86_64-linux-gnu/qt6/mkspecs/linux-g++ -I/home/student/Documents/GitHub/OOP-Sensors -I/home/student/Documents/GitHub/OOP-Sensors -I/usr/include/x86_64-linux-gnu/qt6 -I/usr/include/x86_64-linux-gnu/qt6/QtCharts -I/usr/include/x86_64-linux-gnu/qt6/QtOpenGLWidgets -I/usr/include/x86_64-linux-gnu/qt6/QtWidgets -I/usr/include/x86_64-linux-gnu/qt6/QtOpenGL -I/usr/include/x86_64-linux-gnu/qt6/QtGui -I/usr/include/x86_64-linux-gnu/qt6/QtCore -I/usr/include/c++/11 -I/usr/include/x86_64-linux-gnu/c++/11 -I/usr/include/c++/11/backward -I/usr/lib/gcc/x86_64-linux-gnu/11/include -I/usr/local/include -I/usr/include/x86_64-linux-gnu -I/usr/include View/ApplicationPanel.h -o moc_ApplicationPanel.cpp

moc_ChartPanel.cpp: View/ChartPanel.h \
		SensorObserverInterface.h \
		moc_predefs.h \
		/usr/lib/qt6/libexec/moc
	/usr/lib/qt6/libexec/moc $(DEFINES) --include /home/student/Documents/GitHub/OOP-Sensors/moc_predefs.h -I/usr/lib/x86_64-linux-gnu/qt6/mkspecs/linux-g++ -I/home/student/Documents/GitHub/OOP-Sensors -I/home/student/Documents/GitHub/OOP-Sensors -I/usr/include/x86_64-linux-gnu/qt6 -I/usr/include/x86_64-linux-gnu/qt6/QtCharts -I/usr/include/x86_64-linux-gnu/qt6/QtOpenGLWidgets -I/usr/include/x86_64-linux-gnu/qt6/QtWidgets -I/usr/include/x86_64-linux-gnu/qt6/QtOpenGL -I/usr/include/x86_64-linux-gnu/qt6/QtGui -I/usr/include/x86_64-linux-gnu/qt6/QtCore -I/usr/include/c++/11 -I/usr/include/x86_64-linux-gnu/c++/11 -I/usr/include/c++/11/backward -I/usr/lib/gcc/x86_64-linux-gnu/11/include -I/usr/local/include -I/usr/include/x86_64-linux-gnu -I/usr/include View/ChartPanel.h -o moc_ChartPanel.cpp

moc_Info.cpp: View/Info.h \
		AbstractSensor.h \
		SensorVisitorInterface.h \
		SensorObserverInterface.h \
		moc_predefs.h \
		/usr/lib/qt6/libexec/moc
	/usr/lib/qt6/libexec/moc $(DEFINES) --include /home/student/Documents/GitHub/OOP-Sensors/moc_predefs.h -I/usr/lib/x86_64-linux-gnu/qt6/mkspecs/linux-g++ -I/home/student/Documents/GitHub/OOP-Sensors -I/home/student/Documents/GitHub/OOP-Sensors -I/usr/include/x86_64-linux-gnu/qt6 -I/usr/include/x86_64-linux-gnu/qt6/QtCharts -I/usr/include/x86_64-linux-gnu/qt6/QtOpenGLWidgets -I/usr/include/x86_64-linux-gnu/qt6/QtWidgets -I/usr/include/x86_64-linux-gnu/qt6/QtOpenGL -I/usr/include/x86_64-linux-gnu/qt6/QtGui -I/usr/include/x86_64-linux-gnu/qt6/QtCore -I/usr/include/c++/11 -I/usr/include/x86_64-linux-gnu/c++/11 -I/usr/include/c++/11/backward -I/usr/lib/gcc/x86_64-linux-gnu/11/include -I/usr/local/include -I/usr/include/x86_64-linux-gnu -I/usr/include View/Info.h -o moc_Info.cpp

moc_InfoPanel.cpp: View/InfoPanel.h \
		View/Info.h \
		AbstractSensor.h \
		SensorVisitorInterface.h \
		SensorObserverInterface.h \
		moc_predefs.h \
		/usr/lib/qt6/libexec/moc
	/usr/lib/qt6/libexec/moc $(DEFINES) --include /home/student/Documents/GitHub/OOP-Sensors/moc_predefs.h -I/usr/lib/x86_64-linux-gnu/qt6/mkspecs/linux-g++ -I/home/student/Documents/GitHub/OOP-Sensors -I/home/student/Documents/GitHub/OOP-Sensors -I/usr/include/x86_64-linux-gnu/qt6 -I/usr/include/x86_64-linux-gnu/qt6/QtCharts -I/usr/include/x86_64-linux-gnu/qt6/QtOpenGLWidgets -I/usr/include/x86_64-linux-gnu/qt6/QtWidgets -I/usr/include/x86_64-linux-gnu/qt6/QtOpenGL -I/usr/include/x86_64-linux-gnu/qt6/QtGui -I/usr/include/x86_64-linux-gnu/qt6/QtCore -I/usr/include/c++/11 -I/usr/include/x86_64-linux-gnu/c++/11 -I/usr/include/c++/11/backward -I/usr/lib/gcc/x86_64-linux-gnu/11/include -I/usr/local/include -I/usr/include/x86_64-linux-gnu -I/usr/include View/InfoPanel.h -o moc_InfoPanel.cpp

moc_InsertPanel.cpp: View/InsertPanel.h \
		moc_predefs.h \
		/usr/lib/qt6/libexec/moc
	/usr/lib/qt6/libexec/moc $(DEFINES) --include /home/student/Documents/GitHub/OOP-Sensors/moc_predefs.h -I/usr/lib/x86_64-linux-gnu/qt6/mkspecs/linux-g++ -I/home/student/Documents/GitHub/OOP-Sensors -I/home/student/Documents/GitHub/OOP-Sensors -I/usr/include/x86_64-linux-gnu/qt6 -I/usr/include/x86_64-linux-gnu/qt6/QtCharts -I/usr/include/x86_64-linux-gnu/qt6/QtOpenGLWidgets -I/usr/include/x86_64-linux-gnu/qt6/QtWidgets -I/usr/include/x86_64-linux-gnu/qt6/QtOpenGL -I/usr/include/x86_64-linux-gnu/qt6/QtGui -I/usr/include/x86_64-linux-gnu/qt6/QtCore -I/usr/include/c++/11 -I/usr/include/x86_64-linux-gnu/c++/11 -I/usr/include/c++/11/backward -I/usr/lib/gcc/x86_64-linux-gnu/11/include -I/usr/local/include -I/usr/include/x86_64-linux-gnu -I/usr/include View/InsertPanel.h -o moc_InsertPanel.cpp

moc_InsertWindow.cpp: View/InsertWindow.h \
		AbstractSensor.h \
		SensorVisitorInterface.h \
		SensorObserverInterface.h \
		moc_predefs.h \
		/usr/lib/qt6/libexec/moc
	/usr/lib/qt6/libexec/moc $(DEFINES) --include /home/student/Documents/GitHub/OOP-Sensors/moc_predefs.h -I/usr/lib/x86_64-linux-gnu/qt6/mkspecs/linux-g++ -I/home/student/Documents/GitHub/OOP-Sensors -I/home/student/Documents/GitHub/OOP-Sensors -I/usr/include/x86_64-linux-gnu/qt6 -I/usr/include/x86_64-linux-gnu/qt6/QtCharts -I/usr/include/x86_64-linux-gnu/qt6/QtOpenGLWidgets -I/usr/include/x86_64-linux-gnu/qt6/QtWidgets -I/usr/include/x86_64-linux-gnu/qt6/QtOpenGL -I/usr/include/x86_64-linux-gnu/qt6/QtGui -I/usr/include/x86_64-linux-gnu/qt6/QtCore -I/usr/include/c++/11 -I/usr/include/x86_64-linux-gnu/c++/11 -I/usr/include/c++/11/backward -I/usr/lib/gcc/x86_64-linux-gnu/11/include -I/usr/local/include -I/usr/include/x86_64-linux-gnu -I/usr/include View/InsertWindow.h -o moc_InsertWindow.cpp

moc_MainWindow.cpp: View/MainWindow.h \
		AbstractSensor.h \
		SensorVisitorInterface.h \
		SensorObserverInterface.h \
		moc_predefs.h \
		/usr/lib/qt6/libexec/moc
	/usr/lib/qt6/libexec/moc $(DEFINES) --include /home/student/Documents/GitHub/OOP-Sensors/moc_predefs.h -I/usr/lib/x86_64-linux-gnu/qt6/mkspecs/linux-g++ -I/home/student/Documents/GitHub/OOP-Sensors -I/home/student/Documents/GitHub/OOP-Sensors -I/usr/include/x86_64-linux-gnu/qt6 -I/usr/include/x86_64-linux-gnu/qt6/QtCharts -I/usr/include/x86_64-linux-gnu/qt6/QtOpenGLWidgets -I/usr/include/x86_64-linux-gnu/qt6/QtWidgets -I/usr/include/x86_64-linux-gnu/qt6/QtOpenGL -I/usr/include/x86_64-linux-gnu/qt6/QtGui -I/usr/include/x86_64-linux-gnu/qt6/QtCore -I/usr/include/c++/11 -I/usr/include/x86_64-linux-gnu/c++/11 -I/usr/include/c++/11/backward -I/usr/lib/gcc/x86_64-linux-gnu/11/include -I/usr/local/include -I/usr/include/x86_64-linux-gnu -I/usr/include View/MainWindow.h -o moc_MainWindow.cpp

moc_SearchPanel.cpp: View/SearchPanel.h \
		AbstractSensor.h \
		SensorVisitorInterface.h \
		SensorObserverInterface.h \
		moc_predefs.h \
		/usr/lib/qt6/libexec/moc
	/usr/lib/qt6/libexec/moc $(DEFINES) --include /home/student/Documents/GitHub/OOP-Sensors/moc_predefs.h -I/usr/lib/x86_64-linux-gnu/qt6/mkspecs/linux-g++ -I/home/student/Documents/GitHub/OOP-Sensors -I/home/student/Documents/GitHub/OOP-Sensors -I/usr/include/x86_64-linux-gnu/qt6 -I/usr/include/x86_64-linux-gnu/qt6/QtCharts -I/usr/include/x86_64-linux-gnu/qt6/QtOpenGLWidgets -I/usr/include/x86_64-linux-gnu/qt6/QtWidgets -I/usr/include/x86_64-linux-gnu/qt6/QtOpenGL -I/usr/include/x86_64-linux-gnu/qt6/QtGui -I/usr/include/x86_64-linux-gnu/qt6/QtCore -I/usr/include/c++/11 -I/usr/include/x86_64-linux-gnu/c++/11 -I/usr/include/c++/11/backward -I/usr/lib/gcc/x86_64-linux-gnu/11/include -I/usr/local/include -I/usr/include/x86_64-linux-gnu -I/usr/include View/SearchPanel.h -o moc_SearchPanel.cpp

moc_SensorPanel.cpp: View/SensorPanel.h \
		AbstractSensor.h \
		SensorVisitorInterface.h \
		SensorObserverInterface.h \
		View/InfoPanel.h \
		View/Info.h \
		View/ChartPanel.h \
		moc_predefs.h \
		/usr/lib/qt6/libexec/moc
	/usr/lib/qt6/libexec/moc $(DEFINES) --include /home/student/Documents/GitHub/OOP-Sensors/moc_predefs.h -I/usr/lib/x86_64-linux-gnu/qt6/mkspecs/linux-g++ -I/home/student/Documents/GitHub/OOP-Sensors -I/home/student/Documents/GitHub/OOP-Sensors -I/usr/include/x86_64-linux-gnu/qt6 -I/usr/include/x86_64-linux-gnu/qt6/QtCharts -I/usr/include/x86_64-linux-gnu/qt6/QtOpenGLWidgets -I/usr/include/x86_64-linux-gnu/qt6/QtWidgets -I/usr/include/x86_64-linux-gnu/qt6/QtOpenGL -I/usr/include/x86_64-linux-gnu/qt6/QtGui -I/usr/include/x86_64-linux-gnu/qt6/QtCore -I/usr/include/c++/11 -I/usr/include/x86_64-linux-gnu/c++/11 -I/usr/include/c++/11/backward -I/usr/lib/gcc/x86_64-linux-gnu/11/include -I/usr/local/include -I/usr/include/x86_64-linux-gnu -I/usr/include View/SensorPanel.h -o moc_SensorPanel.cpp

compiler_moc_objc_header_make_all:
compiler_moc_objc_header_clean:
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_predefs_clean compiler_moc_header_clean 

####### Compile

AbstractSensor.o: AbstractSensor.cpp AbstractSensor.h \
		SensorVisitorInterface.h \
		SensorObserverInterface.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o AbstractSensor.o AbstractSensor.cpp

LuminositySensor.o: LuminositySensor.cpp LuminositySensor.h \
		AbstractSensor.h \
		SensorVisitorInterface.h \
		SensorObserverInterface.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o LuminositySensor.o LuminositySensor.cpp

main.o: main.cpp LuminositySensor.h \
		AbstractSensor.h \
		SensorVisitorInterface.h \
		SensorObserverInterface.h \
		MotionSensor.h \
		TemperatureSensor.h \
		View/MainWindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

MotionSensor.o: MotionSensor.cpp MotionSensor.h \
		AbstractSensor.h \
		SensorVisitorInterface.h \
		SensorObserverInterface.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o MotionSensor.o MotionSensor.cpp

TemperatureSensor.o: TemperatureSensor.cpp TemperatureSensor.h \
		AbstractSensor.h \
		SensorVisitorInterface.h \
		SensorObserverInterface.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o TemperatureSensor.o TemperatureSensor.cpp

ApplicationPanel.o: View/ApplicationPanel.cpp AbstractSensor.h \
		SensorVisitorInterface.h \
		SensorObserverInterface.h \
		TemperatureSensor.h \
		LuminositySensor.h \
		MotionSensor.h \
		View/InsertWindow.h \
		View/ApplicationPanel.h \
		View/SensorPanel.h \
		View/InfoPanel.h \
		View/Info.h \
		View/ChartPanel.h \
		View/SearchPanel.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o ApplicationPanel.o View/ApplicationPanel.cpp

ChartPanel.o: View/ChartPanel.cpp AbstractSensor.h \
		SensorVisitorInterface.h \
		SensorObserverInterface.h \
		View/ChartPanel.h \
		View/SensorChartVisitor.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o ChartPanel.o View/ChartPanel.cpp

Info.o: View/Info.cpp View/Info.h \
		AbstractSensor.h \
		SensorVisitorInterface.h \
		SensorObserverInterface.h \
		View/SensorInfoVisitor.h \
		TemperatureSensor.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Info.o View/Info.cpp

InfoPanel.o: View/InfoPanel.cpp AbstractSensor.h \
		SensorVisitorInterface.h \
		SensorObserverInterface.h \
		View/InfoPanel.h \
		View/Info.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o InfoPanel.o View/InfoPanel.cpp

InsertPanel.o: View/InsertPanel.cpp View/InsertPanel.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o InsertPanel.o View/InsertPanel.cpp

InsertWindow.o: View/InsertWindow.cpp View/InsertWindow.h \
		AbstractSensor.h \
		SensorVisitorInterface.h \
		SensorObserverInterface.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o InsertWindow.o View/InsertWindow.cpp

MainWindow.o: View/MainWindow.cpp View/MainWindow.h \
		AbstractSensor.h \
		SensorVisitorInterface.h \
		SensorObserverInterface.h \
		View/ApplicationPanel.h \
		View/SensorPanel.h \
		View/InfoPanel.h \
		View/Info.h \
		View/ChartPanel.h \
		View/SearchPanel.h \
		View/InsertWindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o MainWindow.o View/MainWindow.cpp

SearchPanel.o: View/SearchPanel.cpp View/SearchPanel.h \
		AbstractSensor.h \
		SensorVisitorInterface.h \
		SensorObserverInterface.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o SearchPanel.o View/SearchPanel.cpp

SensorChartVisitor.o: View/SensorChartVisitor.cpp View/SensorChartVisitor.h \
		SensorVisitorInterface.h \
		TemperatureSensor.h \
		AbstractSensor.h \
		SensorObserverInterface.h \
		MotionSensor.h \
		LuminositySensor.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o SensorChartVisitor.o View/SensorChartVisitor.cpp

SensorInfoVisitor.o: View/SensorInfoVisitor.cpp View/SensorInfoVisitor.h \
		SensorVisitorInterface.h \
		TemperatureSensor.h \
		AbstractSensor.h \
		SensorObserverInterface.h \
		MotionSensor.h \
		LuminositySensor.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o SensorInfoVisitor.o View/SensorInfoVisitor.cpp

SensorPanel.o: View/SensorPanel.cpp AbstractSensor.h \
		SensorVisitorInterface.h \
		SensorObserverInterface.h \
		LuminositySensor.h \
		MotionSensor.h \
		TemperatureSensor.h \
		View/InfoPanel.h \
		View/Info.h \
		View/SearchPanel.h \
		View/SensorPanel.h \
		View/ChartPanel.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o SensorPanel.o View/SensorPanel.cpp

moc_ApplicationPanel.o: moc_ApplicationPanel.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_ApplicationPanel.o moc_ApplicationPanel.cpp

moc_ChartPanel.o: moc_ChartPanel.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_ChartPanel.o moc_ChartPanel.cpp

moc_Info.o: moc_Info.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_Info.o moc_Info.cpp

moc_InfoPanel.o: moc_InfoPanel.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_InfoPanel.o moc_InfoPanel.cpp

moc_InsertPanel.o: moc_InsertPanel.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_InsertPanel.o moc_InsertPanel.cpp

moc_InsertWindow.o: moc_InsertWindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_InsertWindow.o moc_InsertWindow.cpp

moc_MainWindow.o: moc_MainWindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_MainWindow.o moc_MainWindow.cpp

moc_SearchPanel.o: moc_SearchPanel.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_SearchPanel.o moc_SearchPanel.cpp

moc_SensorPanel.o: moc_SensorPanel.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_SensorPanel.o moc_SensorPanel.cpp

####### Install

install:  FORCE

uninstall:  FORCE

FORCE:

