#ifndef QIO_H
#define QIO_H

#include <QObject>
#include <QTextStream>
#include "core.h"

class QTZ_SHARED_EXPORT QIO : public QObject {
    Q_OBJECT
public:
    explicit QIO(QObject *parent = 0);
    static QTextStream cout;
    static QTextStream cin;
    static QTextStream cerr;
signals:

public slots:


};

#endif // QIO_H
