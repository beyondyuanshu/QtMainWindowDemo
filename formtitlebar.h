#ifndef FORMTITLEBAR_H
#define FORMTITLEBAR_H

#include <QWidget>

namespace Ui {
class FormTitleBar;
}

class FormTitleBar : public QWidget
{
    Q_OBJECT

public:
    explicit FormTitleBar(QWidget *parent = 0);
    ~FormTitleBar();

private:
    Ui::FormTitleBar *ui;
};

#endif // FORMTITLEBAR_H
