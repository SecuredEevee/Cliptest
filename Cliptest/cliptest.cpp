#include "cliptest.h"

Cliptest::Cliptest(QWidget *parent)
	: QMainWindow(parent) ,ui(new Ui::CliptestClass)
{
	ui->setupUi(this);
	setAcceptDrops(true);
	ui->imagelabel2->setAcceptDrops(true);
}

Cliptest::~Cliptest()
{
	delete ui;
}
void Cliptest::on_pushButton1_clicked() {
	QString a;
	
	//ui->TestText->selectAll();
	//ui->TestText->copy();

	const QMimeData *mimeData = clipboard->mimeData(); //Ŭ������ mimedata �������� 
	if (mimeData->hasImage()) { // �̹����� 
		//setPixmap(qvariant_cast<QPixmap>(mimeData->imageData()));
		//QSize qsize;
		//qsize.setHeight( ui->imagelabel->height());
		//qsize.setWidth  (ui->imagelabel->width());
		ui->imagelabel->setAlignment(Qt::AlignCenter); //������� 
		QPixmap qpix ,qpix1;
		qpix = qvariant_cast<QPixmap>(mimeData->imageData());
		if(qpix.size().height()>= ui->imagelabel->height() // qpix ����� ���� ������ ���� ũ�� �������� 
			||qpix.size().width()>=ui->imagelabel->width()){ 
		qpix1 = qvariant_cast<QPixmap>(mimeData->imageData()).scaled(ui->imagelabel->width(),ui->imagelabel->height(), Qt::IgnoreAspectRatio ); //resize ������
		ui->imagelabel->setPixmap(qpix1);
		}
		else ui->imagelabel->setPixmap(qpix); //�ƴϸ� �׳� 

	
	}
	else if (mimeData->hasHtml()) { //html�̸� 
		ui->TestText->setText(mimeData->html());
		//ui->TestText->setTextFormat(Qt::RichText);
	}
	else if (mimeData->hasText()) { //�ؽ�Ʈ�̸� 
		ui->TestText->setText(mimeData->text());
		//ui->TestText->setTextFormat(Qt::PlainText);
	}
	else {
		
	}
	//a = clipboard->text();
	//ui->TestText->setText(clipboard->text());
	//QCoreApplication::exit();
	
}
void Cliptest::mousePressEvent(QMouseEvent *event){
	
	if (event->button() == Qt::LeftButton //��Ŭ�� ��
		//&& ui->imagelabel->geometry().contains(event->pos())
		&& ui->widget->geometry().contains(event->pos())
		) { //���� ���ȿ� ���ԵǾ������� �巡�� Ȱ��ȭ 

		QDrag *drag = new QDrag(this);
		QMimeData *mimeData = new QMimeData;
		QPixmap qpix = *ui->imagelabel->pixmap();  //qpix �������� 
	
		QByteArray bytes;							//byte �� qpix �ִ� �ڵ� 
		QBuffer buffer(&bytes);
		buffer.open(QIODevice::WriteOnly);
		qpix.save(&buffer, "PNG");
		mimeData->setData("PNG",bytes);					//mimedata �� 
	//	mimeData->setText(commentEdit->toPlainText());
		drag->setMimeData(mimeData);				//mimedata �����κ��� �巡�� mimedata �ֱ� 
		drag->setPixmap(qvariant_cast<QPixmap>(mimeData->imageData()));

		Qt::DropAction dropAction = drag->exec(Qt::CopyAction | Qt::MoveAction);
		
	}

}
void Cliptest::dragEnterEvent(QDragEnterEvent *event){
	if (event->answerRect().intersects(ui->widget->geometry())) {
		event->setDropAction(Qt::MoveAction);
		event->accept();
	}
	else 	event->acceptProposedAction();

}
void Cliptest::dropEvent(QDropEvent *event) {
	if (event->proposedAction() == Qt::MoveAction) {
		event->acceptProposedAction();
		// Process the data from the event.
	
		
		const QMimeData *mimeData = event->mimeData();
		ui->imagelabel2->setPixmap(qvariant_cast<QPixmap>(mimeData->imageData()));
		if (mimeData->hasImage()) {
			//setPixmap(qvariant_cast<QPixmap>(mimeData->imageData()));
			
			ui->imagelabel2->setPixmap(qvariant_cast<QPixmap>(mimeData->imageData()));
		}
		else if (mimeData->hasHtml()) {
			ui->TestText->setText(mimeData->html());
			//setTextFormat(Qt::RichText);
		}
		else if (mimeData->hasText()) {
			ui->TestText->setText(mimeData->text());
			//ui->TestText->setTextFormat(Qt::PlainText);
		}
		else {

		}

	}
	else if (event->proposedAction() == Qt::CopyAction) {
		event->acceptProposedAction();
		// Process the data from the event.
		const QMimeData *mimeData = event->mimeData();
		if (mimeData->hasImage()) {
			//setPixmap(qvariant_cast<QPixmap>(mimeData->imageData()));
			ui->imagelabel2->setPixmap(qvariant_cast<QPixmap>(mimeData->imageData()));
		}
		else if (mimeData->hasHtml()) {
			ui->TestText->setText(mimeData->html());
			//setTextFormat(Qt::RichText);
		}
		else if (mimeData->hasText()) {
			ui->TestText->setText(mimeData->text());
			//ui->TestText->setTextFormat(Qt::PlainText);
		}
		else {

		}
	}
	else {
		// Ignore the drop.
		return;
	}
}
void Cliptest::on_pushButton2_clicked() {
	ui->TestText->clear();
	ui->label1->clear();
	ui->imagelabel->clear();
	ui->imagelabel2->clear();


}