QT += core gui widgets
TEMPLATE = app
CONFIG += c++11
SOURCES = mainwindow.cpp \
    main.cpp \
    avatarsettingseditor.cpp \
    fabsettingseditor.cpp \
    raisedbuttonsettingseditor.cpp \
    flatbuttonsettingseditor.cpp \
    iconbuttonsettingseditor.cpp \
    progresssettingseditor.cpp \
    circularprogresssettingseditor.cpp \
    slidersettingseditor.cpp \
    tabssettingseditor.cpp \
    snackbarsettingseditor.cpp \
    dialogsettingseditor.cpp \
    drawersettingseditor.cpp \
    scrollbarsettingseditor.cpp \
    autocompletesettingseditor.cpp \
    menusettingseditor.cpp
HEADERS = mainwindow.h \
    avatarsettingseditor.h \
    fabsettingseditor.h \
    raisedbuttonsettingseditor.h \
    flatbuttonsettingseditor.h \
    iconbuttonsettingseditor.h \
    progresssettingseditor.h \
    circularprogresssettingseditor.h \
    slidersettingseditor.h \
    tabssettingseditor.h \
    snackbarsettingseditor.h \
    dialogsettingseditor.h \
    drawersettingseditor.h \
    scrollbarsettingseditor.h \
    autocompletesettingseditor.h \
    menusettingseditor.h
LIBS += -L$$top_builddir/components/$(OBJECTS_DIR)/ \
        -lcomponents

INCLUDEPATH += $$top_srcdir/components/
TARGET = examples-exe

win32{
    PRE_TARGETDEPS += $$top_builddir/components/$(OBJECTS_DIR)/components.lib
} else {
    PRE_TARGETDEPS += $$top_builddir/components/$(OBJECTS_DIR)/libcomponents.a
}

RESOURCES += \
    examples.qrc

FORMS += \
    avatarsettingsform.ui \
    badgesettingsform.ui \
    fabsettingsform.ui \
    flatbuttonsettingsform.ui \
    iconbuttonsettingsform.ui \
    progresssettingsform.ui \
    circularprogresssettingsform.ui \
    slidersettingsform.ui \
    snackbarsettingsform.ui \
    tabssettingsform.ui \
    dialogsettingsform.ui \
    drawersettingsform.ui \
    scrollbarsettingsform.ui
