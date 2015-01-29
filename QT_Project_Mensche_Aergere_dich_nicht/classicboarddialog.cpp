#include "classicboarddialog.h"
#include "ui_classicboarddialog.h"

ClassicBoardDialog::ClassicBoardDialog(QWidget *parent ) :
    QDialog(parent),
    ui(new Ui::ClassicBoardDialog)
{
    ui->setupUi(this);


/* board-----------------------------------------------------
    QButtonGroup *board_node_group = new  QButtonGroup(this);

    board_node_group->addButton(ui->node_0,0);
    board_node_group->addButton(ui->node_1,1);
    board_node_group->addButton(ui->node_2,2);
    board_node_group->addButton(ui->node_3,3);
    board_node_group->addButton(ui->node_4,4);
    board_node_group->addButton(ui->node_5,5);
    board_node_group->addButton(ui->node_6,6);
    board_node_group->addButton(ui->node_7,7);
    board_node_group->addButton(ui->node_8,8);
    board_node_group->addButton(ui->node_9,9);
    board_node_group->addButton(ui->node_10,10);
    board_node_group->addButton(ui->node_11,11);
    board_node_group->addButton(ui->node_12,12);
    board_node_group->addButton(ui->node_13,13);
    board_node_group->addButton(ui->node_14,14);
    board_node_group->addButton(ui->node_15,15);
    board_node_group->addButton(ui->node_16,16);
    board_node_group->addButton(ui->node_17,17);
    board_node_group->addButton(ui->node_18,18);
    board_node_group->addButton(ui->node_19,19);
    board_node_group->addButton(ui->node_20,20);
    board_node_group->addButton(ui->node_21,21);
    board_node_group->addButton(ui->node_22,22);
    board_node_group->addButton(ui->node_23,23);
    board_node_group->addButton(ui->node_24,24);
    board_node_group->addButton(ui->node_25,25);
    board_node_group->addButton(ui->node_26,26);
    board_node_group->addButton(ui->node_27,27);
    board_node_group->addButton(ui->node_28,28);
    board_node_group->addButton(ui->node_29,29);
    board_node_group->addButton(ui->node_30,30);
    board_node_group->addButton(ui->node_31,31);
    board_node_group->addButton(ui->node_32,32);
    board_node_group->addButton(ui->node_33,33);
    board_node_group->addButton(ui->node_34,34);
    board_node_group->addButton(ui->node_35,35);
    board_node_group->addButton(ui->node_36,36);
    board_node_group->addButton(ui->node_37,37);
    board_node_group->addButton(ui->node_38,38);
    board_node_group->addButton(ui->node_39,39);
// board-----------------------------------------------------
// limbo green-----------------------------------------------
    QButtonGroup *limbo_green_group = new  QButtonGroup(this);

    limbo_green_group->addButton(ui->GBase1,1);
    limbo_green_group->addButton(ui->GBase2,2);
    limbo_green_group->addButton(ui->GBase3,3);
    limbo_green_group->addButton(ui->GBase4,4);
// limbo green-----------------------------------------------
// limbo blue-----------------------------------------------
    QButtonGroup *limbo_blue_group = new  QButtonGroup(this);

    limbo_blue_group->addButton(ui->BBase1,1);
    limbo_blue_group->addButton(ui->BBase2,2);
    limbo_blue_group->addButton(ui->BBase3,3);
    limbo_blue_group->addButton(ui->BBase4,4);
// limbo blue-----------------------------------------------
// limbo red------------------------------------------------
    QButtonGroup *limbo_red_group = new  QButtonGroup(this);

    limbo_red_group->addButton(ui->RBase1,1);
    limbo_red_group->addButton(ui->RBase2,2);
    limbo_red_group->addButton(ui->RBase3,3);
    limbo_red_group->addButton(ui->RBase4,4);
// limbo red------------------------------------------------
// limbo yellow------------------------------------------------
    QButtonGroup *limbo_yellow_group = new  QButtonGroup(this);

    limbo_yellow_group->addButton(ui->YBase1,1);
    limbo_yellow_group->addButton(ui->YBase2,2);
    limbo_yellow_group->addButton(ui->YBase3,3);
    limbo_yellow_group->addButton(ui->YBase4,4);
// limbo yellow------------------------------------------------
// finish green------------------------------------------------
    QButtonGroup *finish_green_group = new  QButtonGroup(this);

    finish_green_group->addButton(ui->GH1,1);
    finish_green_group->addButton(ui->GH2,2);
    finish_green_group->addButton(ui->GH3,3);
    finish_green_group->addButton(ui->GH4,4);
// finish green------------------------------------------------
// finish blue------------------------------------------------
    QButtonGroup *finish_blue_group = new  QButtonGroup(this);

    finish_blue_group->addButton(ui->BH1,1);
    finish_blue_group->addButton(ui->BH2,2);
    finish_blue_group->addButton(ui->BH3,3);
    finish_blue_group->addButton(ui->BH4,4);
// finish blue------------------------------------------------
// finish red------------------------------------------------
    QButtonGroup *finish_red_group = new  QButtonGroup(this);

    finish_red_group->addButton(ui->RH1,1);
    finish_red_group->addButton(ui->RH2,2);
    finish_red_group->addButton(ui->RH3,3);
    finish_red_group->addButton(ui->RH4,4);
// finish red------------------------------------------------
// finish yellow------------------------------------------------
    QButtonGroup *finish_yellow_group = new  QButtonGroup(this);

    finish_yellow_group->addButton(ui->YH1,1);
    finish_yellow_group->addButton(ui->YH2,2);
    finish_yellow_group->addButton(ui->YH3,3);
    finish_yellow_group->addButton(ui->YH4,4);
// finish yellow------------------------------------------------
*/
}

ClassicBoardDialog::~ClassicBoardDialog()
{
    delete ui;
}


//DICE
bool ClassicBoardDialog::on_Dice_Button_clicked()
{
    ui->Dice_Button->setEnabled(false);
    return true;
}

//------------------------------------------------------------------------
// GREEN LIMBO
//------------------------------------------------------------------------
void ClassicBoardDialog::on_GBase1_toggled(bool checked)
{
    if(!checked)
    {
        ui->GBase1->setStyleSheet("background-color: green");ui->GBase1->setEnabled(true);
    }
    else
        ui->GBase1->setStyleSheet("background-color: white");ui->GBase1->setEnabled(false);
}
void ClassicBoardDialog::on_GBase2_toggled(bool checked)
{
    if(!checked)
        ui->GBase2->setStyleSheet("background-color: green");
    else
        ui->GBase2->setStyleSheet("background-color: white");ui->GBase2->setEnabled(false);
}

void ClassicBoardDialog::on_GBase3_toggled(bool checked)
{
    if(!checked)
        ui->GBase3->setStyleSheet("background-color: green");
    else
        ui->GBase3->setStyleSheet("background-color: white");ui->GBase3->setEnabled(false);
}

void ClassicBoardDialog::on_GBase4_toggled(bool checked)
{
    if(!checked)
        ui->GBase4->setStyleSheet("background-color: green");
    else
        ui->GBase4->setStyleSheet("background-color: white");ui->GBase4->setEnabled(false);
}

//------------------------------------------------------------------------
// BLUE LIMBO
//------------------------------------------------------------------------

void ClassicBoardDialog::on_BBase1_toggled(bool checked)
{
    if(!checked)
        ui->BBase1->setStyleSheet("background-color: blue");
    else
        ui->BBase1->setStyleSheet("background-color: white");ui->BBase1->setEnabled(false);
}

void ClassicBoardDialog::on_BBase2_toggled(bool checked)
{
    if(!checked)
        ui->BBase2->setStyleSheet("background-color: blue");
    else
        ui->BBase2->setStyleSheet("background-color: white");ui->BBase2->setEnabled(false);
}

void ClassicBoardDialog::on_BBase3_toggled(bool checked)
{
    if(!checked)
        ui->BBase3->setStyleSheet("background-color: blue");
    else
        ui->BBase3->setStyleSheet("background-color: white");ui->BBase3->setEnabled(false);
}

void ClassicBoardDialog::on_BBase4_toggled(bool checked)
{
    if(!checked)
        ui->BBase4->setStyleSheet("background-color: blue");
    else
        ui->BBase4->setStyleSheet("background-color: white");ui->BBase4->setEnabled(false);
}

//------------------------------------------------------------------------
// RED LIMBO
//------------------------------------------------------------------------
void ClassicBoardDialog::on_RBase1_toggled(bool checked)
{
    if(!checked)
        ui->RBase1->setStyleSheet("background-color: red");
    else
        ui->RBase1->setStyleSheet("background-color: white");ui->RBase1->setEnabled(false);
}

void ClassicBoardDialog::on_RBase2_toggled(bool checked)
{
    if(!checked)
        ui->RBase2->setStyleSheet("background-color: red");
    else
        ui->RBase2->setStyleSheet("background-color: white");ui->RBase2->setEnabled(false);
}

void ClassicBoardDialog::on_RBase3_toggled(bool checked)
{
    if(!checked)
        ui->RBase3->setStyleSheet("background-color: red");
    else
        ui->RBase3->setStyleSheet("background-color: white");ui->RBase3->setEnabled(false);
}

void ClassicBoardDialog::on_RBase4_toggled(bool checked)
{
    if(!checked)
        ui->RBase4->setStyleSheet("background-color: red");
    else
        ui->RBase4->setStyleSheet("background-color: white");ui->RBase4->setEnabled(false);
}

//------------------------------------------------------------------------
// YELLOW LIMBO
//------------------------------------------------------------------------

void ClassicBoardDialog::on_YBase1_toggled(bool checked)
{
    if(!checked)
        ui->YBase1->setStyleSheet("background-color: yellow");
    else
        ui->YBase1->setStyleSheet("background-color: white");ui->YBase1->setEnabled(false);
}

void ClassicBoardDialog::on_YBase2_toggled(bool checked)
{
    if(!checked)
        ui->YBase2->setStyleSheet("background-color: yellow");
    else
        ui->YBase2->setStyleSheet("background-color: white");ui->YBase2->setEnabled(false);
}

void ClassicBoardDialog::on_YBase3_toggled(bool checked)
{
    if(!checked)
        ui->YBase3->setStyleSheet("background-color: yellow");
    else
        ui->YBase3->setStyleSheet("background-color: white");ui->YBase3->setEnabled(false);
}

void ClassicBoardDialog::on_YBase4_toggled(bool checked)
{
    if(!checked)
        ui->YBase4->setStyleSheet("background-color: yellow");
    else
        ui->YBase4->setStyleSheet("background-color: white");ui->YBase4->setEnabled(false);
}


//------------------------------------------------------------------------
// BOARD
//------------------------------------------------------------------------



void ClassicBoardDialog::on_node_0_toggled(int player_id)
{
    if(ui->node_0->isChecked())
    {
        //emit node0
    }
    else
    {
        switch(player_id)
        {
        case 0:
            ui->node_0->setStyleSheet("background-color: white");
            ui->node_0->setEnabled(false);
        case 1:
            ui->node_0->setEnabled(true);
            ui->node_0->setStyleSheet("background-color: green");

        case 2:
            ui->node_0->setEnabled(true);
            ui->node_0->setStyleSheet("background-color: red");

        case 3:
            ui->node_0->setEnabled(true);
            ui->node_0->setStyleSheet("background-color: blue");

        case 4:
            ui->node_0->setEnabled(true);
            ui->node_0->setStyleSheet("background-color: yellow");
        }
    }
}

void ClassicBoardDialog::on_node_1_toggled(int player_id)
{
    if(ui->node_1->isChecked())
    {
        //emit node0
    }
    else
    {
        switch(player_id)
        {
        case 0:
            ui->node_1->setStyleSheet("background-color: white");
            ui->node_1->setEnabled(false);
        case 1:
            ui->node_1->setEnabled(true);
            ui->node_1->setStyleSheet("background-color: green");

        case 2:
            ui->node_1->setEnabled(true);
            ui->node_1->setStyleSheet("background-color: red");

        case 3:
            ui->node_1->setEnabled(true);
            ui->node_1->setStyleSheet("background-color: blue");

        case 4:
            ui->node_1->setEnabled(true);
            ui->node_1->setStyleSheet("background-color: yellow");
        }
    }
}

void ClassicBoardDialog::on_node_2_toggled(int player_id)
{
    if(ui->node_2->isChecked())
    {
        //emit node0
    }
    else
    {
        switch(player_id)
        {
        case 0:
            ui->node_2->setStyleSheet("background-color: white");
            ui->node_2->setEnabled(false);
        case 1:
            ui->node_2->setEnabled(true);
            ui->node_2->setStyleSheet("background-color: green");

        case 2:
            ui->node_2->setEnabled(true);
            ui->node_2->setStyleSheet("background-color: red");

        case 3:
            ui->node_2->setEnabled(true);
            ui->node_2->setStyleSheet("background-color: blue");

        case 4:
            ui->node_2->setEnabled(true);
            ui->node_2->setStyleSheet("background-color: yellow");
        }
    }
}

void ClassicBoardDialog::on_node_3_toggled(int player_id)
{
    if(ui->node_3->isChecked())
    {
        //emit node0
    }
    else
    {
        switch(player_id)
        {
        case 0:
            ui->node_3->setStyleSheet("background-color: white");
            ui->node_3->setEnabled(false);
        case 1:
            ui->node_3->setEnabled(true);
            ui->node_3->setStyleSheet("background-color: green");

        case 2:
            ui->node_3->setEnabled(true);
            ui->node_3->setStyleSheet("background-color: red");

        case 3:
            ui->node_3->setEnabled(true);
            ui->node_3->setStyleSheet("background-color: blue");

        case 4:
            ui->node_3->setEnabled(true);
            ui->node_3->setStyleSheet("background-color: yellow");
        }
    }
}

void ClassicBoardDialog::on_node_4_toggled(int player_id)
{
    if(ui->node_4->isChecked())
    {
        //emit node0
    }
    else
    {
        switch(player_id)
        {
        case 0:
            ui->node_4->setStyleSheet("background-color: white");
            ui->node_4->setEnabled(false);
        case 1:
            ui->node_4->setEnabled(true);
            ui->node_4->setStyleSheet("background-color: green");

        case 2:
            ui->node_4->setEnabled(true);
            ui->node_4->setStyleSheet("background-color: red");

        case 3:
            ui->node_4->setEnabled(true);
            ui->node_4->setStyleSheet("background-color: blue");

        case 4:
            ui->node_4->setEnabled(true);
            ui->node_4->setStyleSheet("background-color: yellow");
        }
    }
}

void ClassicBoardDialog::on_node_5_toggled(int player_id)
{
    if(ui->node_5->isChecked())
    {
        //emit node0
    }
    else
    {
        switch(player_id)
        {
        case 0:
            ui->node_5->setStyleSheet("background-color: white");
            ui->node_5->setEnabled(false);
        case 1:
            ui->node_5->setEnabled(true);
            ui->node_5->setStyleSheet("background-color: green");

        case 2:
            ui->node_5->setEnabled(true);
            ui->node_5->setStyleSheet("background-color: red");

        case 3:
            ui->node_5->setEnabled(true);
            ui->node_5->setStyleSheet("background-color: blue");

        case 4:
            ui->node_5->setEnabled(true);
            ui->node_5->setStyleSheet("background-color: yellow");
        }
    }
}

void ClassicBoardDialog::on_node_6_toggled(int player_id)
{
    if(ui->node_6->isChecked())
    {
        //emit node0
    }
    else
    {
        switch(player_id)
        {
        case 0:
            ui->node_6->setStyleSheet("background-color: white");
            ui->node_6->setEnabled(false);
        case 1:
            ui->node_6->setEnabled(true);
            ui->node_6->setStyleSheet("background-color: green");

        case 2:
            ui->node_6->setEnabled(true);
            ui->node_6->setStyleSheet("background-color: red");

        case 3:
            ui->node_6->setEnabled(true);
            ui->node_6->setStyleSheet("background-color: blue");

        case 4:
            ui->node_6->setEnabled(true);
            ui->node_6->setStyleSheet("background-color: yellow");
        }
    }
}

void ClassicBoardDialog::on_node_7_toggled(int player_id)
{
    if(ui->node_7->isChecked())
    {
        //emit node0
    }
    else
    {
        switch(player_id)
        {
        case 0:
            ui->node_7->setStyleSheet("background-color: white");
            ui->node_7->setEnabled(false);
        case 1:
            ui->node_7->setEnabled(true);
            ui->node_7->setStyleSheet("background-color: green");

        case 2:
            ui->node_7->setEnabled(true);
            ui->node_7->setStyleSheet("background-color: red");

        case 3:
            ui->node_7->setEnabled(true);
            ui->node_7->setStyleSheet("background-color: blue");

        case 4:
            ui->node_7->setEnabled(true);
            ui->node_7->setStyleSheet("background-color: yellow");
        }
    }
}

void ClassicBoardDialog::on_node_8_toggled(int player_id)
{
    if(ui->node_8->isChecked())
    {
        //emit node0
    }
    else
    {
        switch(player_id)
        {
        case 0:
            ui->node_8->setStyleSheet("background-color: white");
            ui->node_8->setEnabled(false);
        case 1:
            ui->node_8->setEnabled(true);
            ui->node_8->setStyleSheet("background-color: green");

        case 2:
            ui->node_8->setEnabled(true);
            ui->node_8->setStyleSheet("background-color: red");

        case 3:
            ui->node_8->setEnabled(true);
            ui->node_8->setStyleSheet("background-color: blue");

        case 4:
            ui->node_8->setEnabled(true);
            ui->node_8->setStyleSheet("background-color: yellow");
        }
    }
}

void ClassicBoardDialog::on_node_9_toggled(int player_id)
{
    if(ui->node_9->isChecked())
    {
        //emit node0
    }
    else
    {
        switch(player_id)
        {
        case 0:
            ui->node_9->setStyleSheet("background-color: white");
            ui->node_9->setEnabled(false);
        case 1:
            ui->node_9->setEnabled(true);
            ui->node_9->setStyleSheet("background-color: green");

        case 2:
            ui->node_9->setEnabled(true);
            ui->node_9->setStyleSheet("background-color: red");

        case 3:
            ui->node_9->setEnabled(true);
            ui->node_9->setStyleSheet("background-color: blue");

        case 4:
            ui->node_9->setEnabled(true);
            ui->node_9->setStyleSheet("background-color: yellow");
        }
    }
}

void ClassicBoardDialog::on_node_10_toggled(int player_id)
{
    if(ui->node_10->isChecked())
    {
        //emit node0
    }
    else
    {
        switch(player_id)
        {
        case 0:
            ui->node_10->setStyleSheet("background-color: white");
            ui->node_10->setEnabled(false);
        case 1:
            ui->node_10->setEnabled(true);
            ui->node_10->setStyleSheet("background-color: green");

        case 2:
            ui->node_10->setEnabled(true);
            ui->node_10->setStyleSheet("background-color: red");

        case 3:
            ui->node_10->setEnabled(true);
            ui->node_10->setStyleSheet("background-color: blue");

        case 4:
            ui->node_10->setEnabled(true);
            ui->node_10->setStyleSheet("background-color: yellow");
        }
    }
}

void ClassicBoardDialog::on_node_11_toggled(int player_id)
{
    if(ui->node_11->isChecked())
    {
        //emit node0
    }
    else
    {
        switch(player_id)
        {
        case 0:
            ui->node_11->setStyleSheet("background-color: white");
            ui->node_11->setEnabled(false);
        case 1:
            ui->node_11->setEnabled(true);
            ui->node_11->setStyleSheet("background-color: green");

        case 2:
            ui->node_11->setEnabled(true);
            ui->node_11->setStyleSheet("background-color: red");

        case 3:
            ui->node_11->setEnabled(true);
            ui->node_11->setStyleSheet("background-color: blue");

        case 4:
            ui->node_11->setEnabled(true);
            ui->node_11->setStyleSheet("background-color: yellow");
        }
    }
}

void ClassicBoardDialog::on_node_12_toggled(int player_id)
{
    if(ui->node_12->isChecked())
    {
        //emit node0
    }
    else
    {
        switch(player_id)
        {
        case 0:
            ui->node_12->setStyleSheet("background-color: white");
            ui->node_12->setEnabled(false);
        case 1:
            ui->node_12->setEnabled(true);
            ui->node_12->setStyleSheet("background-color: green");

        case 2:
            ui->node_12->setEnabled(true);
            ui->node_12->setStyleSheet("background-color: red");

        case 3:
            ui->node_12->setEnabled(true);
            ui->node_12->setStyleSheet("background-color: blue");

        case 4:
            ui->node_12->setEnabled(true);
            ui->node_12->setStyleSheet("background-color: yellow");
        }
    }
}

void ClassicBoardDialog::on_node_13_toggled(int player_id)
{
    if(ui->node_13->isChecked())
    {
        //emit node0
    }
    else
    {
        switch(player_id)
        {
        case 0:
            ui->node_13->setStyleSheet("background-color: white");
            ui->node_13->setEnabled(false);
        case 1:
            ui->node_13->setEnabled(true);
            ui->node_13->setStyleSheet("background-color: green");

        case 2:
            ui->node_13->setEnabled(true);
            ui->node_13->setStyleSheet("background-color: red");

        case 3:
            ui->node_13->setEnabled(true);
            ui->node_13->setStyleSheet("background-color: blue");

        case 4:
            ui->node_13->setEnabled(true);
            ui->node_13->setStyleSheet("background-color: yellow");
        }
    }
}

void ClassicBoardDialog::on_node_14_toggled(int player_id)
{
    if(ui->node_14->isChecked())
    {
        //emit node0
    }
    else
    {
        switch(player_id)
        {
        case 0:
            ui->node_14->setStyleSheet("background-color: white");
            ui->node_14->setEnabled(false);
        case 1:
            ui->node_14->setEnabled(true);
            ui->node_14->setStyleSheet("background-color: green");

        case 2:
            ui->node_14->setEnabled(true);
            ui->node_14->setStyleSheet("background-color: red");

        case 3:
            ui->node_14->setEnabled(true);
            ui->node_14->setStyleSheet("background-color: blue");

        case 4:
            ui->node_14->setEnabled(true);
            ui->node_14->setStyleSheet("background-color: yellow");
        }
    }
}

void ClassicBoardDialog::on_node_15_toggled(int player_id)
{
    if(ui->node_15->isChecked())
    {
        //emit node0
    }
    else
    {
        switch(player_id)
        {
        case 0:
            ui->node_15->setStyleSheet("background-color: white");
            ui->node_15->setEnabled(false);
        case 1:
            ui->node_15->setEnabled(true);
            ui->node_15->setStyleSheet("background-color: green");

        case 2:
            ui->node_15->setEnabled(true);
            ui->node_15->setStyleSheet("background-color: red");

        case 3:
            ui->node_15->setEnabled(true);
            ui->node_15->setStyleSheet("background-color: blue");

        case 4:
            ui->node_15->setEnabled(true);
            ui->node_15->setStyleSheet("background-color: yellow");
        }
    }
}

void ClassicBoardDialog::on_node_16_toggled(int player_id)
{
    if(ui->node_16->isChecked())
    {
        //emit node0
    }
    else
    {
        switch(player_id)
        {
        case 0:
            ui->node_16->setStyleSheet("background-color: white");
            ui->node_16->setEnabled(false);
        case 1:
            ui->node_16->setEnabled(true);
            ui->node_16->setStyleSheet("background-color: green");

        case 2:
            ui->node_16->setEnabled(true);
            ui->node_16->setStyleSheet("background-color: red");

        case 3:
            ui->node_16->setEnabled(true);
            ui->node_16->setStyleSheet("background-color: blue");

        case 4:
            ui->node_16->setEnabled(true);
            ui->node_16->setStyleSheet("background-color: yellow");
        }
    }
}

void ClassicBoardDialog::on_node_17_toggled(int player_id)
{
    if(ui->node_17->isChecked())
    {
        //emit node0
    }
    else
    {
        switch(player_id)
        {
        case 0:
            ui->node_17->setStyleSheet("background-color: white");
            ui->node_17->setEnabled(false);
        case 1:
            ui->node_17->setEnabled(true);
            ui->node_17->setStyleSheet("background-color: green");

        case 2:
            ui->node_17->setEnabled(true);
            ui->node_17->setStyleSheet("background-color: red");

        case 3:
            ui->node_17->setEnabled(true);
            ui->node_17->setStyleSheet("background-color: blue");

        case 4:
            ui->node_17->setEnabled(true);
            ui->node_17->setStyleSheet("background-color: yellow");
        }
    }
}

void ClassicBoardDialog::on_node_18_toggled(int player_id)
{
    if(ui->node_18->isChecked())
    {
        //emit node0
    }
    else
    {
        switch(player_id)
        {
        case 0:
            ui->node_18->setStyleSheet("background-color: white");
            ui->node_18->setEnabled(false);
        case 1:
            ui->node_18->setEnabled(true);
            ui->node_18->setStyleSheet("background-color: green");

        case 2:
            ui->node_18->setEnabled(true);
            ui->node_18->setStyleSheet("background-color: red");

        case 3:
            ui->node_18->setEnabled(true);
            ui->node_18->setStyleSheet("background-color: blue");

        case 4:
            ui->node_18->setEnabled(true);
            ui->node_18->setStyleSheet("background-color: yellow");
        }
    }
}

void ClassicBoardDialog::on_node_19_toggled(int player_id)
{
    if(ui->node_19->isChecked())
    {
        //emit node0
    }
    else
    {
        switch(player_id)
        {
        case 0:
            ui->node_19->setStyleSheet("background-color: white");
            ui->node_19->setEnabled(false);
        case 1:
            ui->node_19->setEnabled(true);
            ui->node_19->setStyleSheet("background-color: green");

        case 2:
            ui->node_19->setEnabled(true);
            ui->node_19->setStyleSheet("background-color: red");

        case 3:
            ui->node_19->setEnabled(true);
            ui->node_19->setStyleSheet("background-color: blue");

        case 4:
            ui->node_19->setEnabled(true);
            ui->node_19->setStyleSheet("background-color: yellow");
        }
    }
}

void ClassicBoardDialog::on_node_20_toggled(int player_id)
{
    if(ui->node_20->isChecked())
    {
        //emit node0
    }
    else
    {
        switch(player_id)
        {
        case 0:
            ui->node_20->setStyleSheet("background-color: white");
            ui->node_20->setEnabled(false);
        case 1:
            ui->node_20->setEnabled(true);
            ui->node_20->setStyleSheet("background-color: green");

        case 2:
            ui->node_20->setEnabled(true);
            ui->node_20->setStyleSheet("background-color: red");

        case 3:
            ui->node_20->setEnabled(true);
            ui->node_20->setStyleSheet("background-color: blue");

        case 4:
            ui->node_20->setEnabled(true);
            ui->node_20->setStyleSheet("background-color: yellow");
        }
    }
}

void ClassicBoardDialog::on_node_21_toggled(int player_id)
{
    if(ui->node_21->isChecked())
    {
        //emit node0
    }
    else
    {
        switch(player_id)
        {
        case 0:
            ui->node_21->setStyleSheet("background-color: white");
            ui->node_21->setEnabled(false);
        case 1:
            ui->node_21->setEnabled(true);
            ui->node_21->setStyleSheet("background-color: green");

        case 2:
            ui->node_21->setEnabled(true);
            ui->node_21->setStyleSheet("background-color: red");

        case 3:
            ui->node_21->setEnabled(true);
            ui->node_21->setStyleSheet("background-color: blue");

        case 4:
            ui->node_21->setEnabled(true);
            ui->node_21->setStyleSheet("background-color: yellow");
        }
    }
}

void ClassicBoardDialog::on_node_22_toggled(int player_id)
{
    if(ui->node_22->isChecked())
    {
        //emit node0
    }
    else
    {
        switch(player_id)
        {
        case 0:
            ui->node_22->setStyleSheet("background-color: white");
            ui->node_22->setEnabled(false);
        case 1:
            ui->node_22->setEnabled(true);
            ui->node_22->setStyleSheet("background-color: green");

        case 2:
            ui->node_22->setEnabled(true);
            ui->node_22->setStyleSheet("background-color: red");

        case 3:
            ui->node_22->setEnabled(true);
            ui->node_22->setStyleSheet("background-color: blue");

        case 4:
            ui->node_22->setEnabled(true);
            ui->node_22->setStyleSheet("background-color: yellow");
        }
    }
}

void ClassicBoardDialog::on_node_23_toggled(int player_id)
{
    if(ui->node_23->isChecked())
    {
        //emit node0
    }
    else
    {
        switch(player_id)
        {
        case 0:
            ui->node_23->setStyleSheet("background-color: white");
            ui->node_23->setEnabled(false);
        case 1:
            ui->node_23->setEnabled(true);
            ui->node_23->setStyleSheet("background-color: green");

        case 2:
            ui->node_23->setEnabled(true);
            ui->node_23->setStyleSheet("background-color: red");

        case 3:
            ui->node_23->setEnabled(true);
            ui->node_23->setStyleSheet("background-color: blue");

        case 4:
            ui->node_23->setEnabled(true);
            ui->node_23->setStyleSheet("background-color: yellow");
        }
    }
}

void ClassicBoardDialog::on_node_24_toggled(int player_id)
{
    if(ui->node_24->isChecked())
    {
        //emit node0
    }
    else
    {
        switch(player_id)
        {
        case 0:
            ui->node_24->setStyleSheet("background-color: white");
            ui->node_24->setEnabled(false);
        case 1:
            ui->node_24->setEnabled(true);
            ui->node_24->setStyleSheet("background-color: green");

        case 2:
            ui->node_24->setEnabled(true);
            ui->node_24->setStyleSheet("background-color: red");

        case 3:
            ui->node_24->setEnabled(true);
            ui->node_24->setStyleSheet("background-color: blue");

        case 4:
            ui->node_24->setEnabled(true);
            ui->node_24->setStyleSheet("background-color: yellow");
        }
    }
}

void ClassicBoardDialog::on_node_25_toggled(int player_id)
{
    if(ui->node_25->isChecked())
    {
        //emit node0
    }
    else
    {
        switch(player_id)
        {
        case 0:
            ui->node_25->setStyleSheet("background-color: white");
            ui->node_25->setEnabled(false);
        case 1:
            ui->node_25->setEnabled(true);
            ui->node_25->setStyleSheet("background-color: green");

        case 2:
            ui->node_25->setEnabled(true);
            ui->node_25->setStyleSheet("background-color: red");

        case 3:
            ui->node_25->setEnabled(true);
            ui->node_25->setStyleSheet("background-color: blue");

        case 4:
            ui->node_25->setEnabled(true);
            ui->node_25->setStyleSheet("background-color: yellow");
        }
    }
}

void ClassicBoardDialog::on_node_26_toggled(int player_id)
{
    if(ui->node_26->isChecked())
    {
        //emit node0
    }
    else
    {
        switch(player_id)
        {
        case 0:
            ui->node_26->setStyleSheet("background-color: white");
            ui->node_26->setEnabled(false);
        case 1:
            ui->node_26->setEnabled(true);
            ui->node_26->setStyleSheet("background-color: green");

        case 2:
            ui->node_26->setEnabled(true);
            ui->node_26->setStyleSheet("background-color: red");

        case 3:
            ui->node_26->setEnabled(true);
            ui->node_26->setStyleSheet("background-color: blue");

        case 4:
            ui->node_26->setEnabled(true);
            ui->node_26->setStyleSheet("background-color: yellow");
        }
    }
}

void ClassicBoardDialog::on_node_27_toggled(int player_id)
{
    if(ui->node_27->isChecked())
    {
        //emit node0
    }
    else
    {
        switch(player_id)
        {
        case 0:
            ui->node_27->setStyleSheet("background-color: white");
            ui->node_27->setEnabled(false);
        case 1:
            ui->node_27->setEnabled(true);
            ui->node_27->setStyleSheet("background-color: green");

        case 2:
            ui->node_27->setEnabled(true);
            ui->node_27->setStyleSheet("background-color: red");

        case 3:
            ui->node_27->setEnabled(true);
            ui->node_27->setStyleSheet("background-color: blue");

        case 4:
            ui->node_27->setEnabled(true);
            ui->node_27->setStyleSheet("background-color: yellow");
        }
    }
}

void ClassicBoardDialog::on_node_28_toggled(int player_id)
{
    if(ui->node_28->isChecked())
    {
        //emit node0
    }
    else
    {
        switch(player_id)
        {
        case 0:
            ui->node_28->setStyleSheet("background-color: white");
            ui->node_28->setEnabled(false);
        case 1:
            ui->node_28->setEnabled(true);
            ui->node_28->setStyleSheet("background-color: green");

        case 2:
            ui->node_28->setEnabled(true);
            ui->node_28->setStyleSheet("background-color: red");

        case 3:
            ui->node_28->setEnabled(true);
            ui->node_28->setStyleSheet("background-color: blue");

        case 4:
            ui->node_28->setEnabled(true);
            ui->node_28->setStyleSheet("background-color: yellow");
        }
    }
}

void ClassicBoardDialog::on_node_29_toggled(int player_id)
{
    if(ui->node_29->isChecked())
    {
        //emit node0
    }
    else
    {
        switch(player_id)
        {
        case 0:
            ui->node_29->setStyleSheet("background-color: white");
            ui->node_29->setEnabled(false);
        case 1:
            ui->node_29->setEnabled(true);
            ui->node_29->setStyleSheet("background-color: green");

        case 2:
            ui->node_29->setEnabled(true);
            ui->node_29->setStyleSheet("background-color: red");

        case 3:
            ui->node_29->setEnabled(true);
            ui->node_29->setStyleSheet("background-color: blue");

        case 4:
            ui->node_29->setEnabled(true);
            ui->node_29->setStyleSheet("background-color: yellow");
        }
    }
}

void ClassicBoardDialog::on_node_30_toggled(int player_id)
{
    if(ui->node_30->isChecked())
    {
        //emit node0
    }
    else
    {
        switch(player_id)
        {
        case 0:
            ui->node_30->setStyleSheet("background-color: white");
            ui->node_30->setEnabled(false);
        case 1:
            ui->node_30->setEnabled(true);
            ui->node_30->setStyleSheet("background-color: green");

        case 2:
            ui->node_30->setEnabled(true);
            ui->node_30->setStyleSheet("background-color: red");

        case 3:
            ui->node_30->setEnabled(true);
            ui->node_30->setStyleSheet("background-color: blue");

        case 4:
            ui->node_30->setEnabled(true);
            ui->node_30->setStyleSheet("background-color: yellow");
        }
    }
}

void ClassicBoardDialog::on_node_31_toggled(int player_id)
{
    if(ui->node_31->isChecked())
    {
        //emit node0
    }
    else
    {
        switch(player_id)
        {
        case 0:
            ui->node_31->setStyleSheet("background-color: white");
            ui->node_31->setEnabled(false);
        case 1:
            ui->node_31->setEnabled(true);
            ui->node_31->setStyleSheet("background-color: green");

        case 2:
            ui->node_31->setEnabled(true);
            ui->node_31->setStyleSheet("background-color: red");

        case 3:
            ui->node_31->setEnabled(true);
            ui->node_31->setStyleSheet("background-color: blue");

        case 4:
            ui->node_31->setEnabled(true);
            ui->node_31->setStyleSheet("background-color: yellow");
        }
    }
}

void ClassicBoardDialog::on_node_32_toggled(int player_id)
{
    if(ui->node_32->isChecked())
    {
        //emit node0
    }
    else
    {
        switch(player_id)
        {
        case 0:
            ui->node_32->setStyleSheet("background-color: white");
            ui->node_32->setEnabled(false);
        case 1:
            ui->node_32->setEnabled(true);
            ui->node_32->setStyleSheet("background-color: green");

        case 2:
            ui->node_32->setEnabled(true);
            ui->node_32->setStyleSheet("background-color: red");

        case 3:
            ui->node_32->setEnabled(true);
            ui->node_32->setStyleSheet("background-color: blue");

        case 4:
            ui->node_32->setEnabled(true);
            ui->node_32->setStyleSheet("background-color: yellow");
        }
    }
}

void ClassicBoardDialog::on_node_33_toggled(int player_id)
{
    if(ui->node_33->isChecked())
    {
        //emit node0
    }
    else
    {
        switch(player_id)
        {
        case 0:
            ui->node_33->setStyleSheet("background-color: white");
            ui->node_33->setEnabled(false);
        case 1:
            ui->node_33->setEnabled(true);
            ui->node_33->setStyleSheet("background-color: green");

        case 2:
            ui->node_33->setEnabled(true);
            ui->node_33->setStyleSheet("background-color: red");

        case 3:
            ui->node_33->setEnabled(true);
            ui->node_33->setStyleSheet("background-color: blue");

        case 4:
            ui->node_33->setEnabled(true);
            ui->node_33->setStyleSheet("background-color: yellow");
        }
    }
}

void ClassicBoardDialog::on_node_34_toggled(int player_id)
{
    if(ui->node_34->isChecked())
    {
        //emit node0
    }
    else
    {
        switch(player_id)
        {
        case 0:
            ui->node_34->setStyleSheet("background-color: white");
            ui->node_34->setEnabled(false);
        case 1:
            ui->node_34->setEnabled(true);
            ui->node_34->setStyleSheet("background-color: green");

        case 2:
            ui->node_34->setEnabled(true);
            ui->node_34->setStyleSheet("background-color: red");

        case 3:
            ui->node_34->setEnabled(true);
            ui->node_34->setStyleSheet("background-color: blue");

        case 4:
            ui->node_34->setEnabled(true);
            ui->node_34->setStyleSheet("background-color: yellow");
        }
    }
}

void ClassicBoardDialog::on_node_35_toggled(int player_id)
{
    if(ui->node_35->isChecked())
    {
        //emit node0
    }
    else
    {
        switch(player_id)
        {
        case 0:
            ui->node_35->setStyleSheet("background-color: white");
            ui->node_35->setEnabled(false);
        case 1:
            ui->node_35->setEnabled(true);
            ui->node_35->setStyleSheet("background-color: green");

        case 2:
            ui->node_35->setEnabled(true);
            ui->node_35->setStyleSheet("background-color: red");

        case 3:
            ui->node_35->setEnabled(true);
            ui->node_35->setStyleSheet("background-color: blue");

        case 4:
            ui->node_35->setEnabled(true);
            ui->node_35->setStyleSheet("background-color: yellow");
        }
    }
}

void ClassicBoardDialog::on_node_36_toggled(int player_id)
{
    if(ui->node_36->isChecked())
    {
        //emit node0
    }
    else
    {
        switch(player_id)
        {
        case 0:
            ui->node_36->setStyleSheet("background-color: white");
            ui->node_36->setEnabled(false);
        case 1:
            ui->node_36->setEnabled(true);
            ui->node_36->setStyleSheet("background-color: green");

        case 2:
            ui->node_36->setEnabled(true);
            ui->node_36->setStyleSheet("background-color: red");

        case 3:
            ui->node_36->setEnabled(true);
            ui->node_36->setStyleSheet("background-color: blue");

        case 4:
            ui->node_36->setEnabled(true);
            ui->node_36->setStyleSheet("background-color: yellow");
        }
    }
}

void ClassicBoardDialog::on_node_37_toggled(int player_id)
{
    if(ui->node_37->isChecked())
    {
        //emit node0
    }
    else
    {
        switch(player_id)
        {
        case 0:
            ui->node_37->setStyleSheet("background-color: white");
            ui->node_37->setEnabled(false);
        case 1:
            ui->node_37->setEnabled(true);
            ui->node_37->setStyleSheet("background-color: green");

        case 2:
            ui->node_37->setEnabled(true);
            ui->node_37->setStyleSheet("background-color: red");

        case 3:
            ui->node_37->setEnabled(true);
            ui->node_37->setStyleSheet("background-color: blue");

        case 4:
            ui->node_37->setEnabled(true);
            ui->node_37->setStyleSheet("background-color: yellow");
        }
    }
}

void ClassicBoardDialog::on_node_38_toggled(int player_id)
{
    if(ui->node_38->isChecked())
    {
        //emit node0
    }
    else
    {
        switch(player_id)
        {
        case 0:
            ui->node_38->setStyleSheet("background-color: white");
            ui->node_38->setEnabled(false);
        case 1:
            ui->node_38->setEnabled(true);
            ui->node_38->setStyleSheet("background-color: green");

        case 2:
            ui->node_38->setEnabled(true);
            ui->node_38->setStyleSheet("background-color: red");

        case 3:
            ui->node_38->setEnabled(true);
            ui->node_38->setStyleSheet("background-color: blue");

        case 4:
            ui->node_38->setEnabled(true);
            ui->node_38->setStyleSheet("background-color: yellow");
        }
    }
}

void ClassicBoardDialog::on_node_39_toggled(int player_id)
{
    if(ui->node_39->isChecked())
    {
        //emit node0
    }
    else
    {
        switch(player_id)
        {
        case 0:
            ui->node_39->setStyleSheet("background-color: white");
            ui->node_39->setEnabled(false);
        case 1:
            ui->node_39->setEnabled(true);
            ui->node_39->setStyleSheet("background-color: green");

        case 2:
            ui->node_39->setEnabled(true);
            ui->node_39->setStyleSheet("background-color: red");

        case 3:
            ui->node_39->setEnabled(true);
            ui->node_39->setStyleSheet("background-color: blue");

        case 4:
            ui->node_39->setEnabled(true);
            ui->node_39->setStyleSheet("background-color: yellow");
        }
    }
}


