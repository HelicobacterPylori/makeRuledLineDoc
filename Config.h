#ifndef CONFIG_H
#define CONFIG_H

#include <QObject>

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

private:
    QString m_formFile;
    QString m_pageSize;
    QString m_orientation;

};

#endif // CONFIG_H
