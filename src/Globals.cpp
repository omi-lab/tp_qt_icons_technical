#include "tp_qt_icons_technical/Globals.h"

#include <QCoreApplication>

void tp_qt_icons_technical_staticInitImpl()
{
  Q_INIT_RESOURCE(tp_qt_icons_technical);
}

namespace tp_qt_icons_technical
{
int staticInit()
{
  tp_qt_icons_technical_staticInitImpl();
  return 0;
}
}
