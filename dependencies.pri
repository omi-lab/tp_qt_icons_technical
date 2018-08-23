QT += core gui

#External libs

#Tdp libs
include(../tdp_qt_utils/dependencies.pri)

!equals(TARGET, "tdp_icons_technical"){
LIBS += -ltdp_icons_technical
}
else{

}

INCLUDEPATH  += $$PWD/../tdp_icons_technical/inc/
