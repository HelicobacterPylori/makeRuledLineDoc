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

void Config::setPageSize(const QString pageSize)
{
    m_pageSize = pageSize;
}
QString Config::pageSize() const
{
    return m_pageSize;
}

void Config::setOrientation(const QString orientation)
{
    m_orientation = orientation;
}
QString Config::orientation() const
{
    return m_orientation;
}

void Config::setMarginsF(QMarginsF marginsF)
{
    m_marginsF = marginsF;
}
QMarginsF Config::marginsF()
{
    return m_marginsF;
}
