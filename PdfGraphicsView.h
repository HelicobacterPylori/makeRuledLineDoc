#ifndef PDFGRAPHICSVIEW_H
#define PDFGRAPHICSVIEW_H

#include <QtWidgets>

#include <poppler-qt5.h>

#include "Config.h"

//namespace Poppler{
//        class Document;
//};

class PdfGraphicsView :
        public QGraphicsView
{
    Q_OBJECT

public:
    explicit PdfGraphicsView(QWidget *parent = nullptr);

    void ViewPdfForm(Config &config);

private:
    QGraphicsScene m_scene;
    Poppler::Document *m_document;

};

#endif // PDFGRAPHICSVIEW_H
