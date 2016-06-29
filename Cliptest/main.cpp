#include "cliptest.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Cliptest w;
	w.show();
	return a.exec();
}
