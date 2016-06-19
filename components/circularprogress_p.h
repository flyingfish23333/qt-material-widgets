#ifndef CIRCULARPROGRESS_P_H
#define CIRCULARPROGRESS_P_H

#include <QObject>
#include "lib/theme.h"

class CircularProgress;
class CircularProgressDelegate;

class CircularProgressPrivate
{
    Q_DISABLE_COPY(CircularProgressPrivate)
    Q_DECLARE_PUBLIC(CircularProgress)

public:
    CircularProgressPrivate(CircularProgress *q);
    ~CircularProgressPrivate();

    void init();

    CircularProgress *const q_ptr;
    CircularProgressDelegate *delegate;
    Material::ProgressType progressType;
    int    size;
    int    angle;
    qreal  penWidth;
    QColor color;
    bool   useThemeColors;
};

#endif // CIRCULARPROGRESS_P_H