#ifndef GUIPRAKTIKUM_H
#define GUIPRAKTIKUM_H

#include <QMainWindow>
#include <formkaryawan.h>

namespace Ui {
class guiPraktikum;
}

class guiPraktikum : public QMainWindow
{
    Q_OBJECT

public:
    explicit guiPraktikum(QWidget *parent = nullptr);
    ~guiPraktikum();

private slots:
    void on_pushButton_clicked();

private:
    Ui::guiPraktikum *ui;
    Formkaryawan *myForm;
};

#endif // GUIPRAKTIKUM_H
