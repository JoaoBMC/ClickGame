#include "click_game.h"
#include "ui_click_game.h"
#include "game.h"
using namespace std;
Game g;
int click = 0;
Click_game::Click_game(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Click_game)
{

    ui->setupUi(this);
}

Click_game::~Click_game()
{
    delete ui;
}


void Click_game::on_Btt_Money_clicked()
{
    g.addMoney();
    ui->lbl_Money_Value->setText(QString::number(g.getMoney()));
    if(g.getMoney() >= 10)
    {
        ui->btt_01->setEnabled(true);
    }
}




void Click_game::on_btt_01_clicked()
{
    click++;
    g.setMultiplyMoney(0.01*click);
    g.setMoney(g.getMoney()-10);
    ui->lbl_Money_Value->setText(QString::number(g.getMoney()));
    if(g.getMoney()<10)
       {
        ui->btt_01->setEnabled(false);
        ui->btt_01->setText(ui->btt_01->text() + " $" + QString::number(g.getMoney()));
    }
}

