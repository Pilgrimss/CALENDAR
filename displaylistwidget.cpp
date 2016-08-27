#include "displaylistwidget.h"

DisplayListWidget::DisplayListWidget(QWidget *parent)
    :QListWidget(parent)
{

}

DisplayListWidget::~DisplayListWidget()
{

}

void DisplayListWidget::mousePressEvent( QMouseEvent *event )
{
   if (event->button() == Qt::LeftButton)
   {
        startPos = event->pos();
    }
    QListWidget::mousePressEvent(event);
}

void DisplayListWidget::mouseMoveEvent(QMouseEvent *event)
{
    if (event->buttons() & Qt::LeftButton) {
        int distance = (event->pos() - startPos).manhattanLength();
       if (distance >= QApplication::startDragDistance())
            PerformDrag();
    }
    QListWidget::mouseMoveEvent(event);
}

void DisplayListWidget::PerformDrag()
{
    QListWidgetItem *item = currentItem();
        if (item) {
            QMimeData *mimeData = new QMimeData;
            mimeData->setText(item->text());
            QList<QUrl> fileList;
            fileList.append(QUrl::fromLocalFile(item->text() ));
            mimeData->setUrls(fileList);
            QDrag *drag = new QDrag(this);
            drag->setMimeData(mimeData);
            Qt::DropAction dropAction = drag->exec(Qt::CopyAction | Qt::MoveAction);
            //drag->setPixmap(QPixmap(":/images/person.png"));
            if (drag->start(Qt::MoveAction) == Qt::MoveAction)
                delete item;
    }

}
