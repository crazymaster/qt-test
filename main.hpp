#ifndef MAIN_HPP_ 
#define MAIN_HPP_ 

#include "qdialog.h"

class QLabel;
class QPushButton;
class QLineEdit;

class MainDialog:public QDialog {
    Q_OBJECT
public:
    MainDialog(QWidget* parent = 0);
private slots:
    void setLabelText();
private:
    QLabel* label;
    QPushButton* setButton;
    QLineEdit* lineEdit;
    
};

#endif
