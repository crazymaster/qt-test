#include <QtGui>
#include "main.hpp"

MainDialog::MainDialog(QWidget* parent):QDialog(parent)
{
    label = new QLabel(tr("<h1>Hello Qt!</h1>") );
    setButton = new QPushButton(tr("set") );
    lineEdit = new QLineEdit;

    connect(setButton, SIGNAL(clicked()), this, SLOT(setLabelText()) );

    QHBoxLayout* layout = new QHBoxLayout;
    QVBoxLayout* mainLayout = new QVBoxLayout;
    layout->addWidget(lineEdit);
    layout->addWidget(setButton);
    mainLayout->addWidget(label);
    mainLayout->addLayout(layout);
    setLayout(mainLayout);
}

void MainDialog::setLabelText()
{
    QString text = lineEdit->text();
    label->setText(text);
}
    
int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    MainDialog* dialog = new MainDialog;
    //dialog->resize(200, 50);
    dialog->move(100, 50);
    dialog->show();
    return app.exec();
}
