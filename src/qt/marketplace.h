#include "marketplace.h"
#include<QtWebKitWidgets/QWebView>
#include<QUrl>
marketplace::marketplace(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
  
{

    ui->setupUi(this);
    ui->webView->load(QUrl("https://unifymarketplace.com/"));
    
}

MainWindow::~MainWindow()
{
  delete ui;
}