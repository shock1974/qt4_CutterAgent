#-------------------------------------------------
#
# Project created by QtCreator 2011-11-23T21:38:05
#
#-------------------------------------------------

QT       += core gui network

TARGET = CutterAgent
TEMPLATE = app


INCLUDEPATH += "C:/Qt/qjsonlib"
LIBS += -LC:/Qt/qjsonlib -lqjson

SOURCES += main.cpp\
        CutterAgentSvc.cpp \
    Utility.cpp \
    Global.cpp \
    CutterSerializer.cpp \
    cutterrptparser.cpp \
    cutteroptlog.cpp \
    cuttermonthlyrpt.cpp \
    cutterdailyrpt.cpp \
    CutterAltPrc.cpp \
    cutteraltlog.cpp \
    utiities/JSonRpcSvc.cpp \
    CutterOptPrc.cpp \
    data/HYLicMT.cpp \
    data/HYLicMO.cpp \
    utiities/HttpGetFile.cpp \
    processor/CutterSyncPrc.cpp

HEADERS  += CutterAgentSvc.h \
    Utility.h \
    Global.h \
    CutterSerializer.h \
    cutterrptparser.h \
    cutteroptlog.h \
    cuttermonthlyrpt.h \
    cutterdailyrpt.h \
    CutterAltPrc.h \
    cutteraltlog.h \
    utiities/JSonRpcSvc.h \
    cutterlogprc.h \
    CutterOptPrc.h \
    data/HYLicMT.h \
    data/HYLicMO.h \
    utiities/HttpGetFile.h \
    processor/CutterSyncPrc.h

FORMS    += CutterAgentSvc.ui




























