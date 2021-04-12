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

private:
    QString m_formFile;

};

#endif // CONFIG_H
