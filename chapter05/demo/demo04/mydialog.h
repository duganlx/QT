#ifndef MYDIALOG_H
#define MYDIALOG_H

#include <QDialog>

namespace Ui {
class myDialog;
}

class myDialog : public QDialog
{
    Q_OBJECT

public:
    explicit myDialog(QWidget *parent = nullptr);
    ~myDialog();
    QString getProjectPath();   //获取工程目录
    QString getCompiler();      //获取编译器信息
    QString getColorPlan();     //获取颜色方案
    bool getIndent();           //是否缩进
    bool getAutoComplete();     //是否代码自动补全

private:
    Ui::myDialog *ui;
};

#endif // MYDIALOG_H
