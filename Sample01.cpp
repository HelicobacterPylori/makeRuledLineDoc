#include "Sample01.h"


#include "QDebug"

#include <QPrinter>


Sample01::Sample01()
{
    /// @brief 【試行】HTMLからPDFファイル作成 (QPrinter版)
    /// @see https://wiki.qt.io/Exporting_a_document_to_PDF
    /// @see https://stackoverflow.com/questions/10697228/converting-html-to-pdf-with-qt

qDebug() << "Sample01";

    // 出力PDFファイル名指定
    QString expFile = QFileDialog::getSaveFileName((QWidget* )0, "Export PDF", QString(), "*.pdf");
    if (QFileInfo(expFile).suffix().isEmpty()) {
        expFile.append(".pdf");
    }

    // pdf出力準備
    QPrinter printer(QPrinter::PrinterResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setPageSize(QPageSize(QPageSize::A4));
    printer.setOutputFileName(expFile);

    // 入力HTMLファイル指定
    QString impFile = QFileDialog::getOpenFileName((QWidget* )0, "Import HTML", QString(), "*.html");

    // html取り込み
    QFile  *htmlFile = new QFile(impFile);
    if (!htmlFile->open(QIODevice::ReadOnly | QIODevice::Text)){
        return;
    }
    QString htmlContent;
    QTextStream in(htmlFile);
    htmlContent=in.readAll();

    // html設定
    QTextDocument doc;
    doc.setHtml(htmlContent);

    // pdf出力」
    doc.print(&printer);

    return;
}
