#ifndef CLIPTEST_H
#define CLIPTEST_H

#include <QtWidgets/QMainWindow>
#include "ui_cliptest.h"
#include <QString>
#include<QClipboard>
#include <QMimeData>
#include <QPixmap>
#include <QDrag>
#include <QMouseEvent>
#include <QDragEnterEvent>
#include <QBuffer>
#include <QDebug>
#include <iostream>
namespace Ui {
	class Cliptest;
}
class Cliptest : public QMainWindow
{
	Q_OBJECT

public:
	Cliptest(QWidget *parent = 0);
	~Cliptest();
	
	public slots: 	
	void on_pushButton1_clicked();
	void on_pushButton2_clicked();
	void mousePressEvent(QMouseEvent *event);
	void dragEnterEvent(QDragEnterEvent *event);
	void dropEvent(QDropEvent *event);
	
private:
	Ui::CliptestClass* ui;
	QClipboard *clipboard = QApplication::clipboard();
};

#endif // CLIPTEST_H
