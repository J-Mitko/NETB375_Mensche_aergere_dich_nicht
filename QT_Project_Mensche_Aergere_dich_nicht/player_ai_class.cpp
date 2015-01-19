#include "player_ai_class.h"

//==============================PLAYER CLASS======================================//

Player::Player(string input_name, int input_ID, bool bot, Field* game_field)
{
    ID = input_ID;
    name = input_name;
    is_bot = bot;
    board = game_field;
    active_player_pieces = 0;
    switch(ID)
    {
        case 1:
            start_move = 0;
            finish_move = 39;
            break;
        case 2:
            start_move = 10;
            finish_move = 9;
            break;
        case 3:
            start_move = 20;
            finish_move = 19;
            break;
        case 4:
            start_move = 30;
            finish_move = 29;
            break;
        default:
            break;
    }
    for (int i = 0; i < 4; i++)
    {
        piece_list[i] = new Piece(i+1,ID);
    }
    for (int i = 0; i < 4; i++)
    {
        home_score[i] = false;
    }
}
Player::~Player()
{
     for (int i = 0; i < 4; i++)
     {
         delete piece_list[i];
         piece_list[i] = 0;
     }
}

string Player::get_name()
{
    return name;
}
int Player::get_player_id()
{
    return ID;
}
int Player::get_player_start()
{
    return start_move;
}
int Player::get_player_finish()
{
    return finish_move;
}
bool Player::is_player_bot()
{
    return is_bot;
}

bool Player::is_player_active()
{
    if (active_player_pieces > 0)
        return true;
    return false;
}

int Player::get_piece_current_node_id(int piece_id)
{
    return ((piece_list[piece_id]->get_piece_moves() + start_move) % 40); // calculates pieces current node id by combining number of moves made and starting node ID
}															// modulus division by 40 (number of nodes) gives us the correct ID of the node

void Player::update_score()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->board->home_node_list[this->get_player_id()-1][i]->occupied_piece != 0)
            home_score[i] = true;
    }
}
bool Player::is_player_win()
{
    int x = 0;
    for (int i = 0; i < 4; i++)
    {
       if (home_score[i] == true)
           x++;
    }
    if (x == 4)
        return true;
    return false;
}

void Player::add_to_name(int x)
{
     name += to_string(x);
}
//new==============================================
void Player::move_piece (int piece_id, int roll)
{
    int x = this->get_piece_current_node_id(piece_id);
    this->board->de_occupy_node(x);

    this->piece_list[piece_id]->update_moves(roll, false);

    x = this->get_piece_current_node_id(piece_id);
    this->board->occupy_node(x, this->piece_list[piece_id]);
}

void Player::activate_piece(int piece_id)
{
    this->piece_list[piece_id]->update_moves(1, false);

    this->board->occupy_node(this->start_move, this->piece_list[piece_id]);

    this->active_player_pieces++;
}
void Player::deactivate_piece(int piece_id)
{
    this->piece_list[piece_id]->update_moves(0,false);

    int x = this->get_piece_current_node_id(piece_id);
    this->board->de_occupy_node(x);

    this->active_player_pieces--;
}
void Player::move_piece_home(int piece_id, int roll)
{
    int x = this->get_piece_current_node_id(piece_id);
    this->board->de_occupy_node(x);

    x = this->piece_list[piece_id]->get_piece_moves();
    x = 39 - x;
    this->piece_list[piece_id]->update_moves(x, false);

    x = roll - x;
    this->piece_list[piece_id]->update_moves(x, true);

    x = this->piece_list[piece_id]->get_piece_home_moves();
    this->board->occupy_home_node(x, this->get_player_id()-1, this->piece_list[piece_id]);

    this->update_score();
}

void Player::move_home_piece(int piece_id, int roll)
{
    int x = this->piece_list[piece_id]->get_piece_home_moves();
    this->board->de_occupy_home_node(x, this->get_player_id()-1);

    this->piece_list[piece_id]->update_moves(roll, true);

    x = this->piece_list[piece_id]->get_piece_home_moves();
    this->board->occupy_home_node(x, this->get_player_id()-1, this->piece_list[piece_id]);

    this->update_score();
}

//==================================================================END=====//

//==================================================================AI CLASS//

void Ai::ai_exec(int dice)
{
    if(this->board->node_list[this->get_player_start()]->state != 0)//CLEAR BOT STARTING FIELD
    {
        this->move_piece(board->node_list[this->get_player_start()]->occupied_piece->get_piece_id(), dice);
    }

    else if(this->is_player_active())//SCORE A POINT
    {
        for(int i = 0;i<4;i++)
        {
            if(this->piece_list[i]->get_piece_moves() + dice > 39  && this->piece_list[i]->get_piece_moves() + dice < 44)
            {
                int x = ( this->piece_list[i]->get_piece_moves() + dice ) % 40;
                if(this->board->home_node_list[this->get_player_id()-1][x]->state != 0)
                {
                    this->move_piece_home(i,dice);
                }
            }
        }
    }
/*
    else if(this->is_player_active())
    {
        for(int i = 0;i<4;i++)
        {
            if(this->board->node_list[this->])

        }
    }
    */
}
