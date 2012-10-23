#include "controlgroup.h"

ControlGroup::ControlGroup()
// QObject::tr() handles translations. Now it is sufficient to provide translations file
// and this string can be automagically tranlated. Kewl!
    : QGroupBox(tr("Application control"))
{
}
