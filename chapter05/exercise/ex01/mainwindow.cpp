#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>
#include <QColorDialog>
#include <QFontDialog>

static QString aimStr;  //选中的字符串

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->textEdit->setHidden(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_newFile_triggered()
{
    ui->textEdit->clear();
    ui->textEdit->setHidden(false);
}

void MainWindow::on_openFile_triggered()
{
    QMessageBox::information(this, tr("Information"), tr("打开一个文件"));
}

void MainWindow::on_saveFile_triggered()
{
    QMessageBox::information(this, tr("Information"), tr("保存一个文件"));
}

void MainWindow::on_cut_triggered()
{
    aimStr = ui->textEdit->textCursor().selectedText();
    ui->textEdit->textCursor().removeSelectedText();
    qDebug()<<aimStr;
}

void MainWindow::on_copy_triggered()
{
    aimStr = ui->textEdit->textCursor().selectedText();
    qDebug()<<aimStr;
}

void MainWindow::on_paste_triggered()
{
    ui->textEdit->textCursor().insertText(aimStr);
    qDebug()<<"paste successful";
    aimStr = "";
}

void MainWindow::on_color_triggered()
{
    QColorDialog *colorDialog = new QColorDialog(this);
    if(QDialog::Accepted == colorDialog->exec())
        ui->textEdit->setTextColor(colorDialog->currentColor());
    qDebug()<<"update color";
}

void MainWindow::on_font_triggered()
{
    QFontDialog *fontDialog = new QFontDialog(this);
    if(QDialog::Accepted == fontDialog->exec())
        ui->textEdit->setCurrentFont(fontDialog->currentFont());
    qDebug()<<"update font";
}
