#ifndef CLICK_GAME_H
#define CLICK_GAME_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Click_game; }
QT_END_NAMESPACE

class Click_game : public QMainWindow
{
    Q_OBJECT

public:
    Click_game(QWidget *parent = nullptr);
    ~Click_game();

private slots:

    void on_Btt_Money_clicked();

    void on_btt_galinha_clicked();

private:
    Ui::Click_game *ui;
};
#endif // CLICK_GAME_H
