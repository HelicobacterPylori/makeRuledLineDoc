#include "PdfGraphicsView.h"

#include <poppler-qt5.h>
#include <QDebug>


PdfGraphicsView::PdfGraphicsView(QWidget *parent) : QGraphicsView(parent)
{
//    setScene(&m_scene);

}
void PdfGraphicsView::ViewPdfForm(Config &config) {
    qDebug() << config.formFile();

    m_document = Poppler::Document::load(config.formFile());
//    Poppler::Document *doc = Poppler::Document::load("z:/build-makeRuledLineDoc-Desktop_Qt_5_15_2_MinGW_64_bit-Profile/form.pdf");
    if (!m_document || m_document->isLocked()) {
      // ... error message ....
      delete m_document;
      return;
    }

    m_document->setRenderHint(Poppler::Document::TextAntialiasing);
    int n_pages = m_document->numPages();
    qDebug() << n_pages;
};
