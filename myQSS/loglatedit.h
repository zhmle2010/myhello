#ifndef LOGLATEDIT_H
#define LOGLATEDIT_H

#include <QWidget>
#include <QLabel>

namespace Ui {
class LogLatEdit;
}

class LogLatEdit : public QWidget
{
    Q_OBJECT

public:
    explicit LogLatEdit(QWidget *parent = 0);
    ~LogLatEdit();

    void setText(QString text);

private:
    Ui::LogLatEdit *ui;
};

#endif // LOGLATEDIT_H
