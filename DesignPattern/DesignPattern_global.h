#ifndef DESIGNPATTERN_GLOBAL_H
#define DESIGNPATTERN_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(DESIGNPATTERN_LIBRARY)
#  define DESIGNPATTERN_EXPORT Q_DECL_EXPORT
#else
#  define DESIGNPATTERN_EXPORT Q_DECL_IMPORT
#endif

#endif // DESIGNPATTERN_GLOBAL_H
