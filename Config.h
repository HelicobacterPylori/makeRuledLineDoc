#ifndef CONFIG_H
#define CONFIG_H

#include <QObject>
#include <QPrinter>

class Config : public QObject
{
    Q_OBJECT
public:
    explicit Config(QObject *parent = 0);

    void setFormFile(QString formFile);
    QString formFile() const;

    void setPageSize(QString pageSize);
    QString pageSize() const;

    void setOrientation(QString orientation);
    QString orientation() const;

    void setMarginsF(QMarginsF marginsF);
    QMarginsF marginsF();

private:
    QString m_formFile;
    QString m_pageSize;
    QString m_orientation;

    /// @TODO List化
    QString m_areaName;
    QString m_docFile;
    QMarginsF m_marginsF;

};

#endif // CONFIG_H
