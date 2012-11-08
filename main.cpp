#include <QApplication>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    QWidget* window = new QWidget;
    QLabel* label = new QLabel("<h1>Hello Qt!</h1>");
    QPushButton* buttonA = new QPushButton("Quit");
    QLineEdit* edit = new QLineEdit;

    QObject::connect(buttonA, SIGNAL(clicked()), &app, SLOT(quit()) );
    QObject::connect(edit, SIGNAL(textChanged(QString)), label, SLOT(setText(QString)) );
    QObject::connect(edit, SIGNAL(textChanged(QString)), window, SLOT(setWindowTitle(QString)) );

            
    QVBoxLayout* mainLayout = new QVBoxLayout;
    QHBoxLayout* layout = new QHBoxLayout;

    layout->addWidget(edit);
    layout->addWidget(buttonA);

    mainLayout->addWidget(label);
    mainLayout->addLayout(layout);
    
    window->setLayout(mainLayout);
    //window->resize(200, 50);
    window->move(100, 50);
    window->show();
    return app.exec();
}
