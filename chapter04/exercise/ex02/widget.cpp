#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    QTreeWidget *root = ui->list;
    root->setColumnCount(1);
    root->setHeaderHidden(true);

    /*
     * 磁盘节点
     */
    QTreeWidgetItem *diskD = new QTreeWidgetItem(root, QStringList(QString("本地磁盘（D:）")));
    QTreeWidgetItem *diskE = new QTreeWidgetItem(root, QStringList(QString("本地磁盘（E:）")));
    QTreeWidgetItem *diskF = new QTreeWidgetItem(root, QStringList(QString("本地磁盘（F:）")));
    QTreeWidgetItem *diskG = new QTreeWidgetItem(root, QStringList(QString("本地磁盘（G:）")));
    QTreeWidgetItem *diskH = new QTreeWidgetItem(root, QStringList(QString("English（H:）")));
    QTreeWidgetItem *diskI = new QTreeWidgetItem(root, QStringList(QString("learn（I:）")));
    diskD->setIcon(0, QIcon(":/Hard_disk.png"));
    diskE->setIcon(0, QIcon(":/Hard_disk.png"));
    diskF->setIcon(0, QIcon(":/Hard_disk.png"));
    diskG->setIcon(0, QIcon(":/Hard_disk.png"));
    diskH->setIcon(0, QIcon(":/Hard_disk.png"));
    diskI->setIcon(0, QIcon(":/Hard_disk.png"));

    /*
     * 文件夹节点
     */
    //d盘
    QTreeWidgetItem *diskD_folder1 = new QTreeWidgetItem(diskD);
    diskD_folder1->setText(0, "java");
    diskD_folder1->setIcon(0, QIcon(tr(":/folder.png")));
    QTreeWidgetItem *diskD_folder2 = new QTreeWidgetItem(diskD);
    diskD_folder2->setText(0, "c");
    diskD_folder2->setIcon(0, QIcon(tr(":/folder.png")));
    QTreeWidgetItem *diskD_folder3 = new QTreeWidgetItem(diskD);
    diskD_folder3->setText(0, "py");
    diskD_folder3->setIcon(0, QIcon(tr(":/folder.png")));
    QTreeWidgetItem *diskD_folder4 = new QTreeWidgetItem(diskD);
    diskD_folder4->setText(0, "qt");
    diskD_folder4->setIcon(0, QIcon(tr(":/folder.png")));
    QTreeWidgetItem *diskD_folder5 = new QTreeWidgetItem(diskD);
    diskD_folder5->setText(0, "vc");
    diskD_folder5->setIcon(0, QIcon(tr(":/folder.png")));
    //e盘
    QTreeWidgetItem *diskE_folder1 = new QTreeWidgetItem(diskE);
    diskE_folder1->setText(0, "linux");
    diskE_folder1->setIcon(0, QIcon(tr(":/folder.png")));
    QTreeWidgetItem *diskE_folder2 = new QTreeWidgetItem(diskE);
    diskE_folder2->setText(0, "html");
    diskE_folder2->setIcon(0, QIcon(tr(":/folder.png")));
    //f盘
    QTreeWidgetItem *diskF_folder1 = new QTreeWidgetItem(diskF);
    diskF_folder1->setText(0, "css");
    diskF_folder1->setIcon(0, QIcon(tr(":/folder.png")));
    //g盘
    QTreeWidgetItem *diskG_folder1 = new QTreeWidgetItem(diskG);
    diskG_folder1->setText(0, "js");
    diskG_folder1->setIcon(0, QIcon(tr(":/folder.png")));
    //h盘
    QTreeWidgetItem *diskH_folder1 = new QTreeWidgetItem(diskH);
    diskH_folder1->setText(0, "vue");
    diskH_folder1->setIcon(0, QIcon(tr(":/folder.png")));
    //i盘
    QTreeWidgetItem *diskI_folder1 = new QTreeWidgetItem(diskI);
    diskI_folder1->setText(0, "c++");
    diskI_folder1->setIcon(0, QIcon(tr(":/folder.png")));

    /*
     * 设置详情页头部信息
     */
    QTableWidget *details = ui->details;
    details->setColumnCount(4);
    QStringList header;
    header<<"名称"<<"修改日期"<<"类型"<<"大小";
    details->setHorizontalHeaderLabels(header);
    details->setEditTriggers(QAbstractItemView::NoEditTriggers);

    /*
     * 默认显示D盘内容
     */
    details->setRowCount(8);
    wrapTableWidgetItem(details, 0, "java", "2015/10/3 13:59", "folder", "200MB");
    wrapTableWidgetItem(details, 1, "c", "2016/2/4 16:29", "folder", "0KB");
    wrapTableWidgetItem(details, 2, "py", "2016/2/4 16:29", "folder", "30KB");
    wrapTableWidgetItem(details, 3, "qt", "2015/10/3 13:59", "folder", "200MB");
    wrapTableWidgetItem(details, 4, "vc", "2016/3/4 16:29", "folder", "0KB");
    wrapTableWidgetItem(details, 5, "day.py", "2018/2/4 16:29", "file", "30KB");
    wrapTableWidgetItem(details, 6, "dict.py", "2011/10/3 13:56", "file", "20KB");
    wrapTableWidgetItem(details, 7, "str1.py", "2016/8/4 12:29", "file", "0KB");
    wrapTableWidgetItem(details, 8, "tt.py", "2016/2/4 16:29", "file", "30KB");

    connect(root, SIGNAL(itemDoubleClicked(QTreeWidgetItem*, int)),
            this, SLOT(disk_change(QTreeWidgetItem*, int)));
}

void Widget::disk_change(QTreeWidgetItem* item, int column)
{
    QTableWidget *details = ui->details;
    QString str = item->text(column);
    details->clearContents(); //clear previous content
    //qDebug()<<"clicked -> "<<str;
    if(str == "本地磁盘（D:）")
    {
        //qDebug()<<"judge ->"<<str;
        details->setRowCount(8);
        wrapTableWidgetItem(details, 0, "java", "2015/10/3 13:59", "folder", "200MB");
        wrapTableWidgetItem(details, 1, "c", "2016/2/4 16:29", "folder", "0KB");
        wrapTableWidgetItem(details, 2, "py", "2016/2/4 16:29", "folder", "30KB");
        wrapTableWidgetItem(details, 3, "qt", "2015/10/3 13:59", "folder", "200MB");
        wrapTableWidgetItem(details, 4, "vc", "2016/3/4 16:29", "folder", "0KB");
        wrapTableWidgetItem(details, 5, "day.py", "2018/2/4 16:29", "file", "30KB");
        wrapTableWidgetItem(details, 6, "dict.py", "2011/10/3 13:56", "file", "20KB");
        wrapTableWidgetItem(details, 7, "str1.py", "2016/8/4 12:29", "file", "0KB");
        wrapTableWidgetItem(details, 8, "tt.py", "2016/2/4 16:29", "file", "30KB");
    }
    else if(str == "本地磁盘（E:）")
    {
        //qDebug()<<"judge ->"<<str;
        details->setRowCount(3);
        wrapTableWidgetItem(details, 0, "linux", "2015/10/3 13:59", "folder", "18KB");
        wrapTableWidgetItem(details, 1, "html", "2016/2/4 16:29", "folder", "90KB");
        wrapTableWidgetItem(details, 2, "helloworld.java", "2016/2/4 16:29", "file", "2KB");
    }
    else if(str == "本地磁盘（F:）")
    {
        //qDebug()<<"judge ->"<<str;
        details->setRowCount(2);
        wrapTableWidgetItem(details, 0, "css", "2015/10/3 13:59", "folder", "18KB");
        wrapTableWidgetItem(details, 1, "file.png", "2016/2/4 16:29", "file", "60KB");
    }
    else if(str == "本地磁盘（G:）")
    {
        //qDebug()<<"judge ->"<<str;
        details->setRowCount(2);
        wrapTableWidgetItem(details, 0, "js", "2015/10/3 13:59", "folder", "18KB");
        wrapTableWidgetItem(details, 1, "beauty.png", "2016/2/4 16:29", "file", "60KB");
    }
    else if(str == "English（H:）")
    {
        //qDebug()<<"judge ->"<<str;
        details->setRowCount(2);
        wrapTableWidgetItem(details, 0, "vue", "2015/10/3 13:59", "folder", "18KB");
        wrapTableWidgetItem(details, 1, "beauty.png", "2016/2/4 16:29", "file", "60KB");
    }
    else if(str == "learn（I:）")
    {
        //qDebug()<<"judge ->"<<str;
        details->setRowCount(2);
        wrapTableWidgetItem(details, 0, "c++", "2015/10/3 13:59", "folder", "18KB");
        wrapTableWidgetItem(details, 1, "beauty.png", "2016/2/4 16:29", "file", "60KB");
    }


}

void Widget::wrapTableWidgetItem(QTableWidget *tableWidge, int row, QString name, QString updateDate, QString type, QString size)
{
    tableWidge->setItem(row, 1, new QTableWidgetItem(updateDate));
    if(type == "folder")
    {
        tableWidge->setItem(row, 2, new QTableWidgetItem("文件夹"));
        tableWidge->setItem(row, 0, new QTableWidgetItem(QIcon(":/folder.png"),name));
    }
    else
    {
        tableWidge->setItem(row, 2, new QTableWidgetItem("文件"));
        tableWidge->setItem(row, 0, new QTableWidgetItem(QIcon(":/file.png"),name));
    }
    tableWidge->setItem(row, 3, new QTableWidgetItem(size));
}

Widget::~Widget()
{
    delete ui;
}

