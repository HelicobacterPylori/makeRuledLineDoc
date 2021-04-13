#include "Config.h"

Config::Config(QObject *parent) :
    QObject(parent)
{

}

void Config::setFormFile(const QString formFile)
{
    m_formFile = formFile;
}

QString Config::formFile() const
{
    return m_formFile;
}
