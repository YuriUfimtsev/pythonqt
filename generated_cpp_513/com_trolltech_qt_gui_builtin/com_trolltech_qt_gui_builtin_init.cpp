#include <PythonQt.h>
#include <PythonQtConversion.h>
#include "com_trolltech_qt_gui_builtin0.h"


void PythonQt_init_QtGuiBuiltin(PyObject* module) {
PythonQt::priv()->registerCPPClass("QBitmap", "QPixmap", "QtGui", PythonQtCreateObject<PythonQtWrapper_QBitmap>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QBitmap>, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerCPPClass("QBrush", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QBrush>, nullptr, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QColor", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QColor>, nullptr, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QCursor", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QCursor>, nullptr, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QFont", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QFont>, nullptr, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QIcon", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QIcon>, nullptr, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerCPPClass("QImage", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QImage>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QImage>, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::self()->addParentClass("QImage", "QPaintDevice",PythonQtUpcastingOffset<QImage,QPaintDevice>());
PythonQt::priv()->registerCPPClass("QKeySequence", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QKeySequence>, nullptr, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QMatrix", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QMatrix>, nullptr, module, PythonQt::Type_InplaceMultiply|PythonQt::Type_Multiply|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QMatrix4x4", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QMatrix4x4>, nullptr, module, PythonQt::Type_Add|PythonQt::Type_Divide|PythonQt::Type_InplaceAdd|PythonQt::Type_InplaceDivide|PythonQt::Type_InplaceMultiply|PythonQt::Type_InplaceSubtract|PythonQt::Type_Multiply|PythonQt::Type_RichCompare|PythonQt::Type_Subtract);
PythonQt::priv()->registerCPPClass("QPalette", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPalette>, nullptr, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QPen", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPen>, nullptr, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QPixmap", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPixmap>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPixmap>, module, PythonQt::Type_NonZero);
PythonQt::self()->addParentClass("QPixmap", "QPaintDevice",PythonQtUpcastingOffset<QPixmap,QPaintDevice>());
PythonQt::priv()->registerCPPClass("QPolygon", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPolygon>, nullptr, module, PythonQt::Type_Add|PythonQt::Type_Multiply|PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QRegion", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QRegion>, nullptr, module, PythonQt::Type_Add|PythonQt::Type_And|PythonQt::Type_InplaceAdd|PythonQt::Type_InplaceAnd|PythonQt::Type_InplaceOr|PythonQt::Type_InplaceSubtract|PythonQt::Type_InplaceXor|PythonQt::Type_Multiply|PythonQt::Type_NonZero|PythonQt::Type_Or|PythonQt::Type_RichCompare|PythonQt::Type_Subtract|PythonQt::Type_Xor);
PythonQt::priv()->registerCPPClass("QSizePolicy", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QSizePolicy>, nullptr, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QTextFormat", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextFormat>, nullptr, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QTextLength", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextLength>, nullptr, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QTransform", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTransform>, nullptr, module, PythonQt::Type_Add|PythonQt::Type_Divide|PythonQt::Type_InplaceAdd|PythonQt::Type_InplaceDivide|PythonQt::Type_InplaceMultiply|PythonQt::Type_InplaceSubtract|PythonQt::Type_Multiply|PythonQt::Type_RichCompare|PythonQt::Type_Subtract);


}
