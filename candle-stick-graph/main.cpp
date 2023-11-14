//#include "mainwindow.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QCandlestickSeries>
#include <QtCharts/QCandlestickSet>

QT_CHARTS_USE_NAMESPACE

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    /*QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "candle-stick-graph_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }*/
   // MainWindow w;
   // w.show();
   // return a.exec();



    QMainWindow window;
    QChartView *chartView = new QChartView(&window);
    window.setCentralWidget(chartView);

    QCandlestickSeries *series = new QCandlestickSeries();
    series->setName("Price Data");

    // Add candlestick sets to the series
    series->append(new QCandlestickSet(10, 15, 5, 12)); // Example data, replace with your own
    series->append(new QCandlestickSet(12, 18, 10, 14)); // Example data, replace with your own
    series->append(new QCandlestickSet(14, 17, 11, 15)); // Example data, replace with your own

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Candlestick Graph");

    chartView->setChart(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    window.resize(800, 600);
    window.show();

    return a.exec();
}
