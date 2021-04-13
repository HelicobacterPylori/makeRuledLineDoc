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

void Config::setLandScape(const QString landScape)
{
    m_landScape = landScape;
}
QString Config::landScape() const
{
    return m_landScape;
}
