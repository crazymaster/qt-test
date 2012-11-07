#include <QApplication>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QPushButton>

int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    QWidget* window = new QWidget;
    QLabel* label = new QLabel("<h1>Hello Qt!</h1>");
    QPushButton* buttonA = new QPushButton("buttonA");
    QPushButton* buttonB = new QPushButton("buttonB");

    QVBoxLayout* mainLayout = new QVBoxLayout;
    QHBoxLayout* layout = new QHBoxLayout;

    layout->addWidget(buttonA);
    layout->addWidget(buttonB);

    mainLayout->addWidget(label);
    mainLayout->addLayout(layout);
    
    window->setLayout(mainLayout);
    //window->resize(200, 50);
    window->move(100, 50);
    window->show();
    return app.exec();
}
