#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QMediaPlayer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:

    void slotPb()
    {

        if(pressBtn)
        {
            button->setStyleSheet("border-radius: 50px;"
                                  "color: green;"
                                  "background-color: red;"
                                  "selection-color: yellow;"
                                  "selection-background-color: blue;");
            pressBtn=false;

            player->setMedia(QUrl("qrc:/resources/ring.mp3"));
            //player->setMedia(QUrl(QUrl::fromLocalFile(":/resources/ring.mp3"));
            player->setVolume(50);

        } else {
            button->setStyleSheet("border-radius: 50px;"
                                  "color: green;"
                                  "background-color: white;"
                                  "selection-color: yellow;"
                                  "selection-background-color: blue;");
            pressBtn=true;

            player->setMedia(QUrl("qrc:/resources/zvong.mp3"));
            player->setVolume(75);

        };

        button->update();

        player->play();
    };

private:
    Ui::MainWindow *ui;

    QPushButton* button = new QPushButton;
    bool pressBtn=false;

    QMediaPlayer *player = new QMediaPlayer(this, QFlags(QMediaPlayer::LowLatency));
};
#endif // MAINWINDOW_H
