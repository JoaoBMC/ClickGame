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
    ui->lbl_Money_Value->setText(QString::number(g.getMoney(),'i',2));
    if(g.getMoney() >= ui->btt_01->text().toInt())
    {
        ui->btt_01->setEnabled(true);
    }
}




void Click_game::on_btt_01_clicked()
{
    click++;
    g.setMultiplyMoney(0.01*click);
    g.setMoney(g.getMoney()-ui->btt_01->text().toInt());
    ui->lbl_Money_Value->setText(QString::number(g.getMoney(),'i',2));
    if(g.getMoney()<ui->btt_01->text().toInt())
       {
        ui->btt_01->setEnabled(false);
        ui->btt_01->setText(QString::number(ui->btt_01->text().toInt() *2) );
    }
}

