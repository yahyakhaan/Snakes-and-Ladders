#pragma once
#include "Header.h"

namespace SnakesnLadders {

    using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
    Game P1;
    Game P2;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
        
		MyForm(void)
		{
			InitializeComponent();
            Player1 = new Game;
            Player2 = new Game;
            Game Heloo;
            
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
        Game* Player1;
        Game* Player2;
        //Game Hello;
	private: System::Windows::Forms::Label^ labelP1Dice;
	private: System::Windows::Forms::Label^ labelP2Dice;
	private: System::Windows::Forms::Label^ labelHeading;
	private: System::Windows::Forms::Label^ labelWelcome;
	private: System::Windows::Forms::Label^ labelP1Name;
	private: System::Windows::Forms::Label^ labelP2Name;
	private: System::Windows::Forms::TextBox^ textBoxP1Name;
	private: System::Windows::Forms::TextBox^ textBoxP2Name;
	private: System::Windows::Forms::Button^ btnStartGame;
    private: System::Windows::Forms::Label^ P2A1;

    private: System::Windows::Forms::Label^ P1A1;
    private: System::Windows::Forms::Label^ P1A2;
    private: System::Windows::Forms::Label^ P2A2;



    private: System::Windows::Forms::Label^ P1A3;
    private: System::Windows::Forms::Label^ P2A3;

    private: System::Windows::Forms::Label^ P1A4;
    private: System::Windows::Forms::Label^ P2A4;

    private: System::Windows::Forms::Label^ P1A5;
    private: System::Windows::Forms::Label^ P2A5;


    private: System::Windows::Forms::Label^ P1A6;
    private: System::Windows::Forms::Label^ P2A6;


    private: System::Windows::Forms::Label^ P1A12;
    private: System::Windows::Forms::Label^ P2A12;



    private: System::Windows::Forms::Label^ P2A11;

    private: System::Windows::Forms::Label^ P1A11;
    private: System::Windows::Forms::Label^ P1A10;
    private: System::Windows::Forms::Label^ P2A10;



    private: System::Windows::Forms::Label^ P2A9;

    private: System::Windows::Forms::Label^ P1A9;
    private: System::Windows::Forms::Label^ P2A8;


    private: System::Windows::Forms::Label^ P2A7;


    private: System::Windows::Forms::Label^ P1A7;
    private: System::Windows::Forms::Label^ P2A18;


    private: System::Windows::Forms::Label^ P1A18;
    private: System::Windows::Forms::Label^ P2A17;


    private: System::Windows::Forms::Label^ P2A16;


    private: System::Windows::Forms::Label^ P1A16;
    private: System::Windows::Forms::Label^ P2A15;


    private: System::Windows::Forms::Label^ P1A15;
    private: System::Windows::Forms::Label^ P2A14;


    private: System::Windows::Forms::Label^ P1A14;
    private: System::Windows::Forms::Label^ P2A13;


    private: System::Windows::Forms::Label^ P1A13;
    private: System::Windows::Forms::Label^ P2A19;


    private: System::Windows::Forms::Label^ P1A19;
private: System::Windows::Forms::Label^ P2A20;


    private: System::Windows::Forms::Label^ P1A20;
private: System::Windows::Forms::Label^ P2A21;


    private: System::Windows::Forms::Label^ P1A21;
private: System::Windows::Forms::Label^ P2A22;


    private: System::Windows::Forms::Label^ P1A22;
private: System::Windows::Forms::Label^ P2A23;


    private: System::Windows::Forms::Label^ P1A23;
private: System::Windows::Forms::Label^ P2A24;


    private: System::Windows::Forms::Label^ P1A24;
private: System::Windows::Forms::Label^ P2A30;


    private: System::Windows::Forms::Label^ P1A30;
private: System::Windows::Forms::Label^ P2A29;


private: System::Windows::Forms::Label^ P1A29;
private: System::Windows::Forms::Label^ P2A28;


private: System::Windows::Forms::Label^ P1A28;
private: System::Windows::Forms::Label^ P2A27;


private: System::Windows::Forms::Label^ P1A27;
private: System::Windows::Forms::Label^ P2A26;


private: System::Windows::Forms::Label^ P1A26;
private: System::Windows::Forms::Label^ P2A25;


private: System::Windows::Forms::Label^ P1A25;

    private: System::Windows::Forms::Label^ P1A8;
private: System::Windows::Forms::Label^ P1A17;
private: System::Windows::Forms::Button^ btnP1RollDice;
private: System::Windows::Forms::Button^ btnP2RollDice;
private: System::Windows::Forms::Label^ btnP1Result;
private: System::Windows::Forms::Label^ labelP2Result;


private: System::Windows::Forms::Label^ labelP2Wins;
private: System::Windows::Forms::Label^ labelP1Wins;
private: System::Windows::Forms::PictureBox^ pictureBoxWin;
private: System::Windows::Forms::Button^ btnExxit;






	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->labelP1Dice = (gcnew System::Windows::Forms::Label());
            this->labelP2Dice = (gcnew System::Windows::Forms::Label());
            this->labelHeading = (gcnew System::Windows::Forms::Label());
            this->labelWelcome = (gcnew System::Windows::Forms::Label());
            this->labelP1Name = (gcnew System::Windows::Forms::Label());
            this->labelP2Name = (gcnew System::Windows::Forms::Label());
            this->textBoxP1Name = (gcnew System::Windows::Forms::TextBox());
            this->textBoxP2Name = (gcnew System::Windows::Forms::TextBox());
            this->btnStartGame = (gcnew System::Windows::Forms::Button());
            this->P2A1 = (gcnew System::Windows::Forms::Label());
            this->P1A1 = (gcnew System::Windows::Forms::Label());
            this->P1A2 = (gcnew System::Windows::Forms::Label());
            this->P2A2 = (gcnew System::Windows::Forms::Label());
            this->P1A3 = (gcnew System::Windows::Forms::Label());
            this->P2A3 = (gcnew System::Windows::Forms::Label());
            this->P1A4 = (gcnew System::Windows::Forms::Label());
            this->P2A4 = (gcnew System::Windows::Forms::Label());
            this->P1A5 = (gcnew System::Windows::Forms::Label());
            this->P2A5 = (gcnew System::Windows::Forms::Label());
            this->P1A6 = (gcnew System::Windows::Forms::Label());
            this->P2A6 = (gcnew System::Windows::Forms::Label());
            this->P1A12 = (gcnew System::Windows::Forms::Label());
            this->P2A12 = (gcnew System::Windows::Forms::Label());
            this->P2A11 = (gcnew System::Windows::Forms::Label());
            this->P1A11 = (gcnew System::Windows::Forms::Label());
            this->P1A10 = (gcnew System::Windows::Forms::Label());
            this->P2A10 = (gcnew System::Windows::Forms::Label());
            this->P2A9 = (gcnew System::Windows::Forms::Label());
            this->P1A9 = (gcnew System::Windows::Forms::Label());
            this->P2A8 = (gcnew System::Windows::Forms::Label());
            this->P1A8 = (gcnew System::Windows::Forms::Label());
            this->P2A7 = (gcnew System::Windows::Forms::Label());
            this->P1A7 = (gcnew System::Windows::Forms::Label());
            this->P2A18 = (gcnew System::Windows::Forms::Label());
            this->P1A18 = (gcnew System::Windows::Forms::Label());
            this->P2A17 = (gcnew System::Windows::Forms::Label());
            this->P1A17 = (gcnew System::Windows::Forms::Label());
            this->P2A16 = (gcnew System::Windows::Forms::Label());
            this->P1A16 = (gcnew System::Windows::Forms::Label());
            this->P2A15 = (gcnew System::Windows::Forms::Label());
            this->P1A15 = (gcnew System::Windows::Forms::Label());
            this->P2A14 = (gcnew System::Windows::Forms::Label());
            this->P1A14 = (gcnew System::Windows::Forms::Label());
            this->P2A13 = (gcnew System::Windows::Forms::Label());
            this->P1A13 = (gcnew System::Windows::Forms::Label());
            this->P2A19 = (gcnew System::Windows::Forms::Label());
            this->P1A19 = (gcnew System::Windows::Forms::Label());
            this->P2A20 = (gcnew System::Windows::Forms::Label());
            this->P1A20 = (gcnew System::Windows::Forms::Label());
            this->P2A21 = (gcnew System::Windows::Forms::Label());
            this->P1A21 = (gcnew System::Windows::Forms::Label());
            this->P2A22 = (gcnew System::Windows::Forms::Label());
            this->P1A22 = (gcnew System::Windows::Forms::Label());
            this->P2A23 = (gcnew System::Windows::Forms::Label());
            this->P1A23 = (gcnew System::Windows::Forms::Label());
            this->P2A24 = (gcnew System::Windows::Forms::Label());
            this->P1A24 = (gcnew System::Windows::Forms::Label());
            this->P2A30 = (gcnew System::Windows::Forms::Label());
            this->P1A30 = (gcnew System::Windows::Forms::Label());
            this->P2A29 = (gcnew System::Windows::Forms::Label());
            this->P1A29 = (gcnew System::Windows::Forms::Label());
            this->P2A28 = (gcnew System::Windows::Forms::Label());
            this->P1A28 = (gcnew System::Windows::Forms::Label());
            this->P2A27 = (gcnew System::Windows::Forms::Label());
            this->P1A27 = (gcnew System::Windows::Forms::Label());
            this->P2A26 = (gcnew System::Windows::Forms::Label());
            this->P1A26 = (gcnew System::Windows::Forms::Label());
            this->P2A25 = (gcnew System::Windows::Forms::Label());
            this->P1A25 = (gcnew System::Windows::Forms::Label());
            this->btnP1RollDice = (gcnew System::Windows::Forms::Button());
            this->btnP2RollDice = (gcnew System::Windows::Forms::Button());
            this->btnP1Result = (gcnew System::Windows::Forms::Label());
            this->labelP2Result = (gcnew System::Windows::Forms::Label());
            this->labelP2Wins = (gcnew System::Windows::Forms::Label());
            this->labelP1Wins = (gcnew System::Windows::Forms::Label());
            this->pictureBoxWin = (gcnew System::Windows::Forms::PictureBox());
            this->btnExxit = (gcnew System::Windows::Forms::Button());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxWin))->BeginInit();
            this->SuspendLayout();
            // 
            // pictureBox1
            // 
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(21, 85);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(952, 618);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox1->TabIndex = 0;
            this->pictureBox1->TabStop = false;
            this->pictureBox1->Visible = false;
            this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
            // 
            // labelP1Dice
            // 
            this->labelP1Dice->AutoSize = true;
            this->labelP1Dice->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelP1Dice->Location = System::Drawing::Point(1048, 179);
            this->labelP1Dice->Name = L"labelP1Dice";
            this->labelP1Dice->Size = System::Drawing::Size(262, 39);
            this->labelP1Dice->TabIndex = 1;
            this->labelP1Dice->Text = L"PLAYER 1 ROLLS:";
            this->labelP1Dice->Visible = false;
            this->labelP1Dice->Click += gcnew System::EventHandler(this, &MyForm::labelP1Dice_Click);
            // 
            // labelP2Dice
            // 
            this->labelP2Dice->AutoSize = true;
            this->labelP2Dice->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelP2Dice->Location = System::Drawing::Point(1048, 475);
            this->labelP2Dice->Name = L"labelP2Dice";
            this->labelP2Dice->Size = System::Drawing::Size(262, 39);
            this->labelP2Dice->TabIndex = 2;
            this->labelP2Dice->Text = L"PLAYER 2 ROLLS:";
            this->labelP2Dice->Visible = false;
            // 
            // labelHeading
            // 
            this->labelHeading->AutoSize = true;
            this->labelHeading->Font = (gcnew System::Drawing::Font(L"Ravie", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelHeading->Location = System::Drawing::Point(252, 22);
            this->labelHeading->Name = L"labelHeading";
            this->labelHeading->Size = System::Drawing::Size(815, 69);
            this->labelHeading->TabIndex = 3;
            this->labelHeading->Text = L"SNAKES AND LADDERS";
            // 
            // labelWelcome
            // 
            this->labelWelcome->AutoSize = true;
            this->labelWelcome->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelWelcome->Location = System::Drawing::Point(182, 211);
            this->labelWelcome->Name = L"labelWelcome";
            this->labelWelcome->Size = System::Drawing::Size(910, 39);
            this->labelWelcome->TabIndex = 4;
            this->labelWelcome->Text = L"WELCOME TO THE CLASSIC GAME OF SNAKES AND LADDERS!";
            // 
            // labelP1Name
            // 
            this->labelP1Name->AutoSize = true;
            this->labelP1Name->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelP1Name->Location = System::Drawing::Point(173, 367);
            this->labelP1Name->Name = L"labelP1Name";
            this->labelP1Name->Size = System::Drawing::Size(246, 39);
            this->labelP1Name->TabIndex = 5;
            this->labelP1Name->Text = L"PLAYER 1 NAME\r\n";
            // 
            // labelP2Name
            // 
            this->labelP2Name->AutoSize = true;
            this->labelP2Name->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelP2Name->Location = System::Drawing::Point(173, 457);
            this->labelP2Name->Name = L"labelP2Name";
            this->labelP2Name->Size = System::Drawing::Size(246, 39);
            this->labelP2Name->TabIndex = 6;
            this->labelP2Name->Text = L"PLAYER 2 NAME";
            // 
            // textBoxP1Name
            // 
            this->textBoxP1Name->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBoxP1Name->Location = System::Drawing::Point(460, 359);
            this->textBoxP1Name->Name = L"textBoxP1Name";
            this->textBoxP1Name->Size = System::Drawing::Size(321, 47);
            this->textBoxP1Name->TabIndex = 7;
            this->textBoxP1Name->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxP1Name_TextChanged);
            // 
            // textBoxP2Name
            // 
            this->textBoxP2Name->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBoxP2Name->Location = System::Drawing::Point(460, 457);
            this->textBoxP2Name->Name = L"textBoxP2Name";
            this->textBoxP2Name->Size = System::Drawing::Size(321, 47);
            this->textBoxP2Name->TabIndex = 8;
            this->textBoxP2Name->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxP2Name_TextChanged);
            // 
            // btnStartGame
            // 
            this->btnStartGame->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnStartGame->Location = System::Drawing::Point(370, 578);
            this->btnStartGame->Name = L"btnStartGame";
            this->btnStartGame->Size = System::Drawing::Size(245, 56);
            this->btnStartGame->TabIndex = 9;
            this->btnStartGame->Text = L"Start Game!";
            this->btnStartGame->UseVisualStyleBackColor = true;
            this->btnStartGame->Click += gcnew System::EventHandler(this, &MyForm::btnStartGame_Click);
            // 
            // P2A1
            // 
            this->P2A1->AutoSize = true;
            this->P2A1->BackColor = System::Drawing::Color::White;
            this->P2A1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P2A1->ForeColor = System::Drawing::Color::Purple;
            this->P2A1->Location = System::Drawing::Point(120, 625);
            this->P2A1->Name = L"P2A1";
            this->P2A1->Size = System::Drawing::Size(43, 35);
            this->P2A1->TabIndex = 11;
            this->P2A1->Text = L"P2";
            this->P2A1->Visible = false;
            // 
            // P1A1
            // 
            this->P1A1->AutoSize = true;
            this->P1A1->BackColor = System::Drawing::Color::White;
            this->P1A1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P1A1->ForeColor = System::Drawing::Color::DodgerBlue;
            this->P1A1->Location = System::Drawing::Point(71, 625);
            this->P1A1->Name = L"P1A1";
            this->P1A1->Size = System::Drawing::Size(43, 35);
            this->P1A1->TabIndex = 12;
            this->P1A1->Text = L"P1";
            this->P1A1->Visible = false;
            // 
            // P1A2
            // 
            this->P1A2->AutoSize = true;
            this->P1A2->BackColor = System::Drawing::Color::White;
            this->P1A2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P1A2->ForeColor = System::Drawing::Color::DodgerBlue;
            this->P1A2->Location = System::Drawing::Point(209, 625);
            this->P1A2->Name = L"P1A2";
            this->P1A2->Size = System::Drawing::Size(43, 35);
            this->P1A2->TabIndex = 14;
            this->P1A2->Text = L"P1";
            this->P1A2->Visible = false;
            // 
            // P2A2
            // 
            this->P2A2->AutoSize = true;
            this->P2A2->BackColor = System::Drawing::Color::White;
            this->P2A2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P2A2->ForeColor = System::Drawing::Color::Purple;
            this->P2A2->Location = System::Drawing::Point(258, 625);
            this->P2A2->Name = L"P2A2";
            this->P2A2->Size = System::Drawing::Size(43, 35);
            this->P2A2->TabIndex = 13;
            this->P2A2->Text = L"P2";
            this->P2A2->Visible = false;
            // 
            // P1A3
            // 
            this->P1A3->AutoSize = true;
            this->P1A3->BackColor = System::Drawing::Color::White;
            this->P1A3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P1A3->ForeColor = System::Drawing::Color::DodgerBlue;
            this->P1A3->Location = System::Drawing::Point(352, 625);
            this->P1A3->Name = L"P1A3";
            this->P1A3->Size = System::Drawing::Size(43, 35);
            this->P1A3->TabIndex = 16;
            this->P1A3->Text = L"P1";
            this->P1A3->Visible = false;
            // 
            // P2A3
            // 
            this->P2A3->AutoSize = true;
            this->P2A3->BackColor = System::Drawing::Color::White;
            this->P2A3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P2A3->ForeColor = System::Drawing::Color::Purple;
            this->P2A3->Location = System::Drawing::Point(401, 625);
            this->P2A3->Name = L"P2A3";
            this->P2A3->Size = System::Drawing::Size(43, 35);
            this->P2A3->TabIndex = 15;
            this->P2A3->Text = L"P2";
            this->P2A3->Visible = false;
            // 
            // P1A4
            // 
            this->P1A4->AutoSize = true;
            this->P1A4->BackColor = System::Drawing::Color::White;
            this->P1A4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P1A4->ForeColor = System::Drawing::Color::DodgerBlue;
            this->P1A4->Location = System::Drawing::Point(509, 625);
            this->P1A4->Name = L"P1A4";
            this->P1A4->Size = System::Drawing::Size(43, 35);
            this->P1A4->TabIndex = 18;
            this->P1A4->Text = L"P1";
            this->P1A4->Visible = false;
            // 
            // P2A4
            // 
            this->P2A4->AutoSize = true;
            this->P2A4->BackColor = System::Drawing::Color::White;
            this->P2A4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P2A4->ForeColor = System::Drawing::Color::Purple;
            this->P2A4->Location = System::Drawing::Point(558, 625);
            this->P2A4->Name = L"P2A4";
            this->P2A4->Size = System::Drawing::Size(43, 35);
            this->P2A4->TabIndex = 17;
            this->P2A4->Text = L"P2";
            this->P2A4->Visible = false;
            // 
            // P1A5
            // 
            this->P1A5->AutoSize = true;
            this->P1A5->BackColor = System::Drawing::Color::White;
            this->P1A5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P1A5->ForeColor = System::Drawing::Color::DodgerBlue;
            this->P1A5->Location = System::Drawing::Point(659, 625);
            this->P1A5->Name = L"P1A5";
            this->P1A5->Size = System::Drawing::Size(43, 35);
            this->P1A5->TabIndex = 20;
            this->P1A5->Text = L"P1";
            this->P1A5->Visible = false;
            this->P1A5->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
            // 
            // P2A5
            // 
            this->P2A5->AutoSize = true;
            this->P2A5->BackColor = System::Drawing::Color::White;
            this->P2A5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P2A5->ForeColor = System::Drawing::Color::Purple;
            this->P2A5->Location = System::Drawing::Point(708, 625);
            this->P2A5->Name = L"P2A5";
            this->P2A5->Size = System::Drawing::Size(43, 35);
            this->P2A5->TabIndex = 19;
            this->P2A5->Text = L"P2";
            this->P2A5->Visible = false;
            // 
            // P1A6
            // 
            this->P1A6->AutoSize = true;
            this->P1A6->BackColor = System::Drawing::Color::White;
            this->P1A6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P1A6->ForeColor = System::Drawing::Color::DodgerBlue;
            this->P1A6->Location = System::Drawing::Point(813, 625);
            this->P1A6->Name = L"P1A6";
            this->P1A6->Size = System::Drawing::Size(43, 35);
            this->P1A6->TabIndex = 22;
            this->P1A6->Text = L"P1";
            this->P1A6->Visible = false;
            // 
            // P2A6
            // 
            this->P2A6->AutoSize = true;
            this->P2A6->BackColor = System::Drawing::Color::White;
            this->P2A6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P2A6->ForeColor = System::Drawing::Color::Purple;
            this->P2A6->Location = System::Drawing::Point(862, 625);
            this->P2A6->Name = L"P2A6";
            this->P2A6->Size = System::Drawing::Size(43, 35);
            this->P2A6->TabIndex = 21;
            this->P2A6->Text = L"P2";
            this->P2A6->Visible = false;
            // 
            // P1A12
            // 
            this->P1A12->AutoSize = true;
            this->P1A12->BackColor = System::Drawing::Color::White;
            this->P1A12->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P1A12->ForeColor = System::Drawing::Color::DodgerBlue;
            this->P1A12->Location = System::Drawing::Point(71, 529);
            this->P1A12->Name = L"P1A12";
            this->P1A12->Size = System::Drawing::Size(43, 35);
            this->P1A12->TabIndex = 24;
            this->P1A12->Text = L"P1";
            this->P1A12->Visible = false;
            // 
            // P2A12
            // 
            this->P2A12->AutoSize = true;
            this->P2A12->BackColor = System::Drawing::Color::White;
            this->P2A12->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P2A12->ForeColor = System::Drawing::Color::Purple;
            this->P2A12->Location = System::Drawing::Point(120, 529);
            this->P2A12->Name = L"P2A12";
            this->P2A12->Size = System::Drawing::Size(43, 35);
            this->P2A12->TabIndex = 23;
            this->P2A12->Text = L"P2";
            this->P2A12->Visible = false;
            // 
            // P2A11
            // 
            this->P2A11->AutoSize = true;
            this->P2A11->BackColor = System::Drawing::Color::White;
            this->P2A11->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P2A11->ForeColor = System::Drawing::Color::Purple;
            this->P2A11->Location = System::Drawing::Point(258, 529);
            this->P2A11->Name = L"P2A11";
            this->P2A11->Size = System::Drawing::Size(43, 35);
            this->P2A11->TabIndex = 25;
            this->P2A11->Text = L"P2";
            this->P2A11->Visible = false;
            // 
            // P1A11
            // 
            this->P1A11->AutoSize = true;
            this->P1A11->BackColor = System::Drawing::Color::White;
            this->P1A11->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P1A11->ForeColor = System::Drawing::Color::DodgerBlue;
            this->P1A11->Location = System::Drawing::Point(209, 529);
            this->P1A11->Name = L"P1A11";
            this->P1A11->Size = System::Drawing::Size(43, 35);
            this->P1A11->TabIndex = 26;
            this->P1A11->Text = L"P1";
            this->P1A11->Visible = false;
            this->P1A11->Click += gcnew System::EventHandler(this, &MyForm::label15_Click);
            // 
            // P1A10
            // 
            this->P1A10->AutoSize = true;
            this->P1A10->BackColor = System::Drawing::Color::White;
            this->P1A10->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P1A10->ForeColor = System::Drawing::Color::DodgerBlue;
            this->P1A10->Location = System::Drawing::Point(352, 529);
            this->P1A10->Name = L"P1A10";
            this->P1A10->Size = System::Drawing::Size(43, 35);
            this->P1A10->TabIndex = 27;
            this->P1A10->Text = L"P1";
            this->P1A10->Visible = false;
            // 
            // P2A10
            // 
            this->P2A10->AutoSize = true;
            this->P2A10->BackColor = System::Drawing::Color::White;
            this->P2A10->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P2A10->ForeColor = System::Drawing::Color::Purple;
            this->P2A10->Location = System::Drawing::Point(401, 529);
            this->P2A10->Name = L"P2A10";
            this->P2A10->Size = System::Drawing::Size(43, 35);
            this->P2A10->TabIndex = 28;
            this->P2A10->Text = L"P2";
            this->P2A10->Visible = false;
            // 
            // P2A9
            // 
            this->P2A9->AutoSize = true;
            this->P2A9->BackColor = System::Drawing::Color::White;
            this->P2A9->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P2A9->ForeColor = System::Drawing::Color::Purple;
            this->P2A9->Location = System::Drawing::Point(558, 529);
            this->P2A9->Name = L"P2A9";
            this->P2A9->Size = System::Drawing::Size(43, 35);
            this->P2A9->TabIndex = 30;
            this->P2A9->Text = L"P2";
            this->P2A9->Visible = false;
            // 
            // P1A9
            // 
            this->P1A9->AutoSize = true;
            this->P1A9->BackColor = System::Drawing::Color::White;
            this->P1A9->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P1A9->ForeColor = System::Drawing::Color::DodgerBlue;
            this->P1A9->Location = System::Drawing::Point(509, 529);
            this->P1A9->Name = L"P1A9";
            this->P1A9->Size = System::Drawing::Size(43, 35);
            this->P1A9->TabIndex = 29;
            this->P1A9->Text = L"P1";
            this->P1A9->Visible = false;
            // 
            // P2A8
            // 
            this->P2A8->AutoSize = true;
            this->P2A8->BackColor = System::Drawing::Color::White;
            this->P2A8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P2A8->ForeColor = System::Drawing::Color::Purple;
            this->P2A8->Location = System::Drawing::Point(708, 529);
            this->P2A8->Name = L"P2A8";
            this->P2A8->Size = System::Drawing::Size(43, 35);
            this->P2A8->TabIndex = 32;
            this->P2A8->Text = L"P2";
            this->P2A8->Visible = false;
            // 
            // P1A8
            // 
            this->P1A8->AutoSize = true;
            this->P1A8->BackColor = System::Drawing::Color::White;
            this->P1A8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P1A8->ForeColor = System::Drawing::Color::DodgerBlue;
            this->P1A8->Location = System::Drawing::Point(659, 529);
            this->P1A8->Name = L"P1A8";
            this->P1A8->Size = System::Drawing::Size(43, 35);
            this->P1A8->TabIndex = 31;
            this->P1A8->Text = L"P1";
            this->P1A8->Visible = false;
            // 
            // P2A7
            // 
            this->P2A7->AutoSize = true;
            this->P2A7->BackColor = System::Drawing::Color::White;
            this->P2A7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P2A7->ForeColor = System::Drawing::Color::Purple;
            this->P2A7->Location = System::Drawing::Point(862, 529);
            this->P2A7->Name = L"P2A7";
            this->P2A7->Size = System::Drawing::Size(43, 35);
            this->P2A7->TabIndex = 34;
            this->P2A7->Text = L"P2";
            this->P2A7->Visible = false;
            // 
            // P1A7
            // 
            this->P1A7->AutoSize = true;
            this->P1A7->BackColor = System::Drawing::Color::White;
            this->P1A7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P1A7->ForeColor = System::Drawing::Color::DodgerBlue;
            this->P1A7->Location = System::Drawing::Point(813, 529);
            this->P1A7->Name = L"P1A7";
            this->P1A7->Size = System::Drawing::Size(43, 35);
            this->P1A7->TabIndex = 33;
            this->P1A7->Text = L"P1";
            this->P1A7->Visible = false;
            // 
            // P2A18
            // 
            this->P2A18->AutoSize = true;
            this->P2A18->BackColor = System::Drawing::Color::White;
            this->P2A18->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P2A18->ForeColor = System::Drawing::Color::Purple;
            this->P2A18->Location = System::Drawing::Point(862, 348);
            this->P2A18->Name = L"P2A18";
            this->P2A18->Size = System::Drawing::Size(43, 35);
            this->P2A18->TabIndex = 36;
            this->P2A18->Text = L"P2";
            this->P2A18->Visible = false;
            // 
            // P1A18
            // 
            this->P1A18->AutoSize = true;
            this->P1A18->BackColor = System::Drawing::Color::White;
            this->P1A18->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P1A18->ForeColor = System::Drawing::Color::DodgerBlue;
            this->P1A18->Location = System::Drawing::Point(813, 348);
            this->P1A18->Name = L"P1A18";
            this->P1A18->Size = System::Drawing::Size(43, 35);
            this->P1A18->TabIndex = 35;
            this->P1A18->Text = L"P1";
            this->P1A18->Visible = false;
            // 
            // P2A17
            // 
            this->P2A17->AutoSize = true;
            this->P2A17->BackColor = System::Drawing::Color::White;
            this->P2A17->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P2A17->ForeColor = System::Drawing::Color::Purple;
            this->P2A17->Location = System::Drawing::Point(708, 348);
            this->P2A17->Name = L"P2A17";
            this->P2A17->Size = System::Drawing::Size(43, 35);
            this->P2A17->TabIndex = 38;
            this->P2A17->Text = L"P2";
            this->P2A17->Visible = false;
            // 
            // P1A17
            // 
            this->P1A17->AutoSize = true;
            this->P1A17->BackColor = System::Drawing::Color::White;
            this->P1A17->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P1A17->ForeColor = System::Drawing::Color::DodgerBlue;
            this->P1A17->Location = System::Drawing::Point(659, 348);
            this->P1A17->Name = L"P1A17";
            this->P1A17->Size = System::Drawing::Size(43, 35);
            this->P1A17->TabIndex = 37;
            this->P1A17->Text = L"P1";
            this->P1A17->Visible = false;
            // 
            // P2A16
            // 
            this->P2A16->AutoSize = true;
            this->P2A16->BackColor = System::Drawing::Color::White;
            this->P2A16->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P2A16->ForeColor = System::Drawing::Color::Purple;
            this->P2A16->Location = System::Drawing::Point(558, 348);
            this->P2A16->Name = L"P2A16";
            this->P2A16->Size = System::Drawing::Size(43, 35);
            this->P2A16->TabIndex = 40;
            this->P2A16->Text = L"P2";
            this->P2A16->Visible = false;
            // 
            // P1A16
            // 
            this->P1A16->AutoSize = true;
            this->P1A16->BackColor = System::Drawing::Color::White;
            this->P1A16->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P1A16->ForeColor = System::Drawing::Color::DodgerBlue;
            this->P1A16->Location = System::Drawing::Point(509, 348);
            this->P1A16->Name = L"P1A16";
            this->P1A16->Size = System::Drawing::Size(43, 35);
            this->P1A16->TabIndex = 39;
            this->P1A16->Text = L"P1";
            this->P1A16->Visible = false;
            // 
            // P2A15
            // 
            this->P2A15->AutoSize = true;
            this->P2A15->BackColor = System::Drawing::Color::White;
            this->P2A15->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P2A15->ForeColor = System::Drawing::Color::Purple;
            this->P2A15->Location = System::Drawing::Point(391, 348);
            this->P2A15->Name = L"P2A15";
            this->P2A15->Size = System::Drawing::Size(43, 35);
            this->P2A15->TabIndex = 42;
            this->P2A15->Text = L"P2";
            this->P2A15->Visible = false;
            this->P2A15->Click += gcnew System::EventHandler(this, &MyForm::label31_Click);
            // 
            // P1A15
            // 
            this->P1A15->AutoSize = true;
            this->P1A15->BackColor = System::Drawing::Color::White;
            this->P1A15->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P1A15->ForeColor = System::Drawing::Color::DodgerBlue;
            this->P1A15->Location = System::Drawing::Point(342, 348);
            this->P1A15->Name = L"P1A15";
            this->P1A15->Size = System::Drawing::Size(43, 35);
            this->P1A15->TabIndex = 41;
            this->P1A15->Text = L"P1";
            this->P1A15->Visible = false;
            // 
            // P2A14
            // 
            this->P2A14->AutoSize = true;
            this->P2A14->BackColor = System::Drawing::Color::White;
            this->P2A14->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P2A14->ForeColor = System::Drawing::Color::Purple;
            this->P2A14->Location = System::Drawing::Point(258, 348);
            this->P2A14->Name = L"P2A14";
            this->P2A14->Size = System::Drawing::Size(43, 35);
            this->P2A14->TabIndex = 44;
            this->P2A14->Text = L"P2";
            this->P2A14->Visible = false;
            // 
            // P1A14
            // 
            this->P1A14->AutoSize = true;
            this->P1A14->BackColor = System::Drawing::Color::White;
            this->P1A14->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P1A14->ForeColor = System::Drawing::Color::DodgerBlue;
            this->P1A14->Location = System::Drawing::Point(209, 348);
            this->P1A14->Name = L"P1A14";
            this->P1A14->Size = System::Drawing::Size(43, 35);
            this->P1A14->TabIndex = 43;
            this->P1A14->Text = L"P1";
            this->P1A14->Visible = false;
            // 
            // P2A13
            // 
            this->P2A13->AutoSize = true;
            this->P2A13->BackColor = System::Drawing::Color::White;
            this->P2A13->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P2A13->ForeColor = System::Drawing::Color::Purple;
            this->P2A13->Location = System::Drawing::Point(120, 348);
            this->P2A13->Name = L"P2A13";
            this->P2A13->Size = System::Drawing::Size(43, 35);
            this->P2A13->TabIndex = 46;
            this->P2A13->Text = L"P2";
            this->P2A13->Visible = false;
            // 
            // P1A13
            // 
            this->P1A13->AutoSize = true;
            this->P1A13->BackColor = System::Drawing::Color::White;
            this->P1A13->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P1A13->ForeColor = System::Drawing::Color::DodgerBlue;
            this->P1A13->Location = System::Drawing::Point(71, 348);
            this->P1A13->Name = L"P1A13";
            this->P1A13->Size = System::Drawing::Size(43, 35);
            this->P1A13->TabIndex = 45;
            this->P1A13->Text = L"P1";
            this->P1A13->Visible = false;
            // 
            // P2A19
            // 
            this->P2A19->AutoSize = true;
            this->P2A19->BackColor = System::Drawing::Color::White;
            this->P2A19->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P2A19->ForeColor = System::Drawing::Color::Purple;
            this->P2A19->Location = System::Drawing::Point(862, 257);
            this->P2A19->Name = L"P2A19";
            this->P2A19->Size = System::Drawing::Size(43, 35);
            this->P2A19->TabIndex = 48;
            this->P2A19->Text = L"P2";
            this->P2A19->Visible = false;
            // 
            // P1A19
            // 
            this->P1A19->AutoSize = true;
            this->P1A19->BackColor = System::Drawing::Color::White;
            this->P1A19->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P1A19->ForeColor = System::Drawing::Color::DodgerBlue;
            this->P1A19->Location = System::Drawing::Point(813, 257);
            this->P1A19->Name = L"P1A19";
            this->P1A19->Size = System::Drawing::Size(43, 35);
            this->P1A19->TabIndex = 47;
            this->P1A19->Text = L"P1";
            this->P1A19->Visible = false;
            // 
            // P2A20
            // 
            this->P2A20->AutoSize = true;
            this->P2A20->BackColor = System::Drawing::Color::White;
            this->P2A20->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P2A20->ForeColor = System::Drawing::Color::Purple;
            this->P2A20->Location = System::Drawing::Point(692, 250);
            this->P2A20->Name = L"P2A20";
            this->P2A20->Size = System::Drawing::Size(43, 35);
            this->P2A20->TabIndex = 50;
            this->P2A20->Text = L"P2";
            this->P2A20->Visible = false;
            // 
            // P1A20
            // 
            this->P1A20->AutoSize = true;
            this->P1A20->BackColor = System::Drawing::Color::White;
            this->P1A20->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P1A20->ForeColor = System::Drawing::Color::DodgerBlue;
            this->P1A20->Location = System::Drawing::Point(643, 250);
            this->P1A20->Name = L"P1A20";
            this->P1A20->Size = System::Drawing::Size(43, 35);
            this->P1A20->TabIndex = 49;
            this->P1A20->Text = L"P1";
            this->P1A20->Visible = false;
            // 
            // P2A21
            // 
            this->P2A21->AutoSize = true;
            this->P2A21->BackColor = System::Drawing::Color::White;
            this->P2A21->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P2A21->ForeColor = System::Drawing::Color::Purple;
            this->P2A21->Location = System::Drawing::Point(541, 297);
            this->P2A21->Name = L"P2A21";
            this->P2A21->Size = System::Drawing::Size(43, 35);
            this->P2A21->TabIndex = 52;
            this->P2A21->Text = L"P2";
            this->P2A21->Visible = false;
            // 
            // P1A21
            // 
            this->P1A21->AutoSize = true;
            this->P1A21->BackColor = System::Drawing::Color::White;
            this->P1A21->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P1A21->ForeColor = System::Drawing::Color::DodgerBlue;
            this->P1A21->Location = System::Drawing::Point(492, 297);
            this->P1A21->Name = L"P1A21";
            this->P1A21->Size = System::Drawing::Size(43, 35);
            this->P1A21->TabIndex = 51;
            this->P1A21->Text = L"P1";
            this->P1A21->Visible = false;
            // 
            // P2A22
            // 
            this->P2A22->AutoSize = true;
            this->P2A22->BackColor = System::Drawing::Color::White;
            this->P2A22->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P2A22->ForeColor = System::Drawing::Color::Purple;
            this->P2A22->Location = System::Drawing::Point(391, 297);
            this->P2A22->Name = L"P2A22";
            this->P2A22->Size = System::Drawing::Size(43, 35);
            this->P2A22->TabIndex = 54;
            this->P2A22->Text = L"P2";
            this->P2A22->Visible = false;
            // 
            // P1A22
            // 
            this->P1A22->AutoSize = true;
            this->P1A22->BackColor = System::Drawing::Color::White;
            this->P1A22->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P1A22->ForeColor = System::Drawing::Color::DodgerBlue;
            this->P1A22->Location = System::Drawing::Point(342, 297);
            this->P1A22->Name = L"P1A22";
            this->P1A22->Size = System::Drawing::Size(43, 35);
            this->P1A22->TabIndex = 53;
            this->P1A22->Text = L"P1";
            this->P1A22->Visible = false;
            // 
            // P2A23
            // 
            this->P2A23->AutoSize = true;
            this->P2A23->BackColor = System::Drawing::Color::White;
            this->P2A23->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P2A23->ForeColor = System::Drawing::Color::Purple;
            this->P2A23->Location = System::Drawing::Point(244, 297);
            this->P2A23->Name = L"P2A23";
            this->P2A23->Size = System::Drawing::Size(43, 35);
            this->P2A23->TabIndex = 56;
            this->P2A23->Text = L"P2";
            this->P2A23->Visible = false;
            // 
            // P1A23
            // 
            this->P1A23->AutoSize = true;
            this->P1A23->BackColor = System::Drawing::Color::White;
            this->P1A23->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P1A23->ForeColor = System::Drawing::Color::DodgerBlue;
            this->P1A23->Location = System::Drawing::Point(195, 297);
            this->P1A23->Name = L"P1A23";
            this->P1A23->Size = System::Drawing::Size(43, 35);
            this->P1A23->TabIndex = 55;
            this->P1A23->Text = L"P1";
            this->P1A23->Visible = false;
            // 
            // P2A24
            // 
            this->P2A24->AutoSize = true;
            this->P2A24->BackColor = System::Drawing::Color::White;
            this->P2A24->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P2A24->ForeColor = System::Drawing::Color::Purple;
            this->P2A24->Location = System::Drawing::Point(120, 288);
            this->P2A24->Name = L"P2A24";
            this->P2A24->Size = System::Drawing::Size(43, 35);
            this->P2A24->TabIndex = 58;
            this->P2A24->Text = L"P2";
            this->P2A24->Visible = false;
            // 
            // P1A24
            // 
            this->P1A24->AutoSize = true;
            this->P1A24->BackColor = System::Drawing::Color::White;
            this->P1A24->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P1A24->ForeColor = System::Drawing::Color::DodgerBlue;
            this->P1A24->Location = System::Drawing::Point(71, 288);
            this->P1A24->Name = L"P1A24";
            this->P1A24->Size = System::Drawing::Size(43, 35);
            this->P1A24->TabIndex = 57;
            this->P1A24->Text = L"P1";
            this->P1A24->Visible = false;
            // 
            // P2A30
            // 
            this->P2A30->AutoSize = true;
            this->P2A30->BackColor = System::Drawing::Color::White;
            this->P2A30->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P2A30->ForeColor = System::Drawing::Color::Purple;
            this->P2A30->Location = System::Drawing::Point(862, 193);
            this->P2A30->Name = L"P2A30";
            this->P2A30->Size = System::Drawing::Size(43, 35);
            this->P2A30->TabIndex = 60;
            this->P2A30->Text = L"P2";
            this->P2A30->Visible = false;
            // 
            // P1A30
            // 
            this->P1A30->AutoSize = true;
            this->P1A30->BackColor = System::Drawing::Color::White;
            this->P1A30->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P1A30->ForeColor = System::Drawing::Color::DodgerBlue;
            this->P1A30->Location = System::Drawing::Point(813, 193);
            this->P1A30->Name = L"P1A30";
            this->P1A30->Size = System::Drawing::Size(43, 35);
            this->P1A30->TabIndex = 59;
            this->P1A30->Text = L"P1";
            this->P1A30->Visible = false;
            // 
            // P2A29
            // 
            this->P2A29->AutoSize = true;
            this->P2A29->BackColor = System::Drawing::Color::White;
            this->P2A29->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P2A29->ForeColor = System::Drawing::Color::Purple;
            this->P2A29->Location = System::Drawing::Point(708, 132);
            this->P2A29->Name = L"P2A29";
            this->P2A29->Size = System::Drawing::Size(43, 35);
            this->P2A29->TabIndex = 62;
            this->P2A29->Text = L"P2";
            this->P2A29->Visible = false;
            // 
            // P1A29
            // 
            this->P1A29->AutoSize = true;
            this->P1A29->BackColor = System::Drawing::Color::White;
            this->P1A29->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P1A29->ForeColor = System::Drawing::Color::DodgerBlue;
            this->P1A29->Location = System::Drawing::Point(659, 132);
            this->P1A29->Name = L"P1A29";
            this->P1A29->Size = System::Drawing::Size(43, 35);
            this->P1A29->TabIndex = 61;
            this->P1A29->Text = L"P1";
            this->P1A29->Visible = false;
            // 
            // P2A28
            // 
            this->P2A28->AutoSize = true;
            this->P2A28->BackColor = System::Drawing::Color::White;
            this->P2A28->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P2A28->ForeColor = System::Drawing::Color::Purple;
            this->P2A28->Location = System::Drawing::Point(558, 183);
            this->P2A28->Name = L"P2A28";
            this->P2A28->Size = System::Drawing::Size(43, 35);
            this->P2A28->TabIndex = 64;
            this->P2A28->Text = L"P2";
            this->P2A28->Visible = false;
            // 
            // P1A28
            // 
            this->P1A28->AutoSize = true;
            this->P1A28->BackColor = System::Drawing::Color::White;
            this->P1A28->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P1A28->ForeColor = System::Drawing::Color::DodgerBlue;
            this->P1A28->Location = System::Drawing::Point(509, 183);
            this->P1A28->Name = L"P1A28";
            this->P1A28->Size = System::Drawing::Size(43, 35);
            this->P1A28->TabIndex = 63;
            this->P1A28->Text = L"P1";
            this->P1A28->Visible = false;
            // 
            // P2A27
            // 
            this->P2A27->AutoSize = true;
            this->P2A27->BackColor = System::Drawing::Color::White;
            this->P2A27->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P2A27->ForeColor = System::Drawing::Color::Purple;
            this->P2A27->Location = System::Drawing::Point(401, 179);
            this->P2A27->Name = L"P2A27";
            this->P2A27->Size = System::Drawing::Size(43, 35);
            this->P2A27->TabIndex = 66;
            this->P2A27->Text = L"P2";
            this->P2A27->Visible = false;
            // 
            // P1A27
            // 
            this->P1A27->AutoSize = true;
            this->P1A27->BackColor = System::Drawing::Color::White;
            this->P1A27->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P1A27->ForeColor = System::Drawing::Color::DodgerBlue;
            this->P1A27->Location = System::Drawing::Point(352, 179);
            this->P1A27->Name = L"P1A27";
            this->P1A27->Size = System::Drawing::Size(43, 35);
            this->P1A27->TabIndex = 65;
            this->P1A27->Text = L"P1";
            this->P1A27->Visible = false;
            // 
            // P2A26
            // 
            this->P2A26->AutoSize = true;
            this->P2A26->BackColor = System::Drawing::Color::White;
            this->P2A26->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P2A26->ForeColor = System::Drawing::Color::Purple;
            this->P2A26->Location = System::Drawing::Point(244, 179);
            this->P2A26->Name = L"P2A26";
            this->P2A26->Size = System::Drawing::Size(43, 35);
            this->P2A26->TabIndex = 68;
            this->P2A26->Text = L"P2";
            this->P2A26->Visible = false;
            // 
            // P1A26
            // 
            this->P1A26->AutoSize = true;
            this->P1A26->BackColor = System::Drawing::Color::White;
            this->P1A26->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P1A26->ForeColor = System::Drawing::Color::DodgerBlue;
            this->P1A26->Location = System::Drawing::Point(195, 179);
            this->P1A26->Name = L"P1A26";
            this->P1A26->Size = System::Drawing::Size(43, 35);
            this->P1A26->TabIndex = 67;
            this->P1A26->Text = L"P1";
            this->P1A26->Visible = false;
            // 
            // P2A25
            // 
            this->P2A25->AutoSize = true;
            this->P2A25->BackColor = System::Drawing::Color::White;
            this->P2A25->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P2A25->ForeColor = System::Drawing::Color::Purple;
            this->P2A25->Location = System::Drawing::Point(120, 183);
            this->P2A25->Name = L"P2A25";
            this->P2A25->Size = System::Drawing::Size(43, 35);
            this->P2A25->TabIndex = 70;
            this->P2A25->Text = L"P2";
            this->P2A25->Visible = false;
            // 
            // P1A25
            // 
            this->P1A25->AutoSize = true;
            this->P1A25->BackColor = System::Drawing::Color::White;
            this->P1A25->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->P1A25->ForeColor = System::Drawing::Color::DodgerBlue;
            this->P1A25->Location = System::Drawing::Point(71, 183);
            this->P1A25->Name = L"P1A25";
            this->P1A25->Size = System::Drawing::Size(43, 35);
            this->P1A25->TabIndex = 69;
            this->P1A25->Text = L"P1";
            this->P1A25->Visible = false;
            // 
            // btnP1RollDice
            // 
            this->btnP1RollDice->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnP1RollDice->Location = System::Drawing::Point(1055, 111);
            this->btnP1RollDice->Name = L"btnP1RollDice";
            this->btnP1RollDice->Size = System::Drawing::Size(289, 56);
            this->btnP1RollDice->TabIndex = 71;
            this->btnP1RollDice->Text = L"P1 ROLL DICE";
            this->btnP1RollDice->UseVisualStyleBackColor = true;
            this->btnP1RollDice->Visible = false;
            this->btnP1RollDice->Click += gcnew System::EventHandler(this, &MyForm::btnP1RollDice_Click);
            // 
            // btnP2RollDice
            // 
            this->btnP2RollDice->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnP2RollDice->Location = System::Drawing::Point(1055, 397);
            this->btnP2RollDice->Name = L"btnP2RollDice";
            this->btnP2RollDice->Size = System::Drawing::Size(289, 56);
            this->btnP2RollDice->TabIndex = 72;
            this->btnP2RollDice->Text = L"P2 ROLL DICE";
            this->btnP2RollDice->UseVisualStyleBackColor = true;
            this->btnP2RollDice->Visible = false;
            this->btnP2RollDice->Click += gcnew System::EventHandler(this, &MyForm::btnP2RollDice_Click);
            // 
            // btnP1Result
            // 
            this->btnP1Result->AutoSize = true;
            this->btnP1Result->BackColor = System::Drawing::Color::White;
            this->btnP1Result->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnP1Result->ForeColor = System::Drawing::Color::DodgerBlue;
            this->btnP1Result->Location = System::Drawing::Point(1310, 183);
            this->btnP1Result->Name = L"btnP1Result";
            this->btnP1Result->Size = System::Drawing::Size(0, 35);
            this->btnP1Result->TabIndex = 73;
            // 
            // labelP2Result
            // 
            this->labelP2Result->AutoSize = true;
            this->labelP2Result->BackColor = System::Drawing::Color::White;
            this->labelP2Result->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelP2Result->ForeColor = System::Drawing::Color::DodgerBlue;
            this->labelP2Result->Location = System::Drawing::Point(1310, 479);
            this->labelP2Result->Name = L"labelP2Result";
            this->labelP2Result->Size = System::Drawing::Size(0, 35);
            this->labelP2Result->TabIndex = 74;
            // 
            // labelP2Wins
            // 
            this->labelP2Wins->AutoSize = true;
            this->labelP2Wins->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelP2Wins->Location = System::Drawing::Point(400, 93);
            this->labelP2Wins->Name = L"labelP2Wins";
            this->labelP2Wins->Size = System::Drawing::Size(254, 39);
            this->labelP2Wins->TabIndex = 76;
            this->labelP2Wins->Text = L"PLAYER 2 WINS!";
            this->labelP2Wins->Visible = false;
            // 
            // labelP1Wins
            // 
            this->labelP1Wins->AutoSize = true;
            this->labelP1Wins->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelP1Wins->Location = System::Drawing::Point(400, 93);
            this->labelP1Wins->Name = L"labelP1Wins";
            this->labelP1Wins->Size = System::Drawing::Size(254, 39);
            this->labelP1Wins->TabIndex = 77;
            this->labelP1Wins->Text = L"PLAYER 1 WINS!";
            this->labelP1Wins->Visible = false;
            // 
            // pictureBoxWin
            // 
            this->pictureBoxWin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxWin.Image")));
            this->pictureBoxWin->Location = System::Drawing::Point(293, 230);
            this->pictureBoxWin->Name = L"pictureBoxWin";
            this->pictureBoxWin->Size = System::Drawing::Size(478, 284);
            this->pictureBoxWin->TabIndex = 78;
            this->pictureBoxWin->TabStop = false;
            this->pictureBoxWin->Visible = false;
            // 
            // btnExxit
            // 
            this->btnExxit->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnExxit->Location = System::Drawing::Point(1169, 696);
            this->btnExxit->Name = L"btnExxit";
            this->btnExxit->Size = System::Drawing::Size(222, 56);
            this->btnExxit->TabIndex = 79;
            this->btnExxit->Text = L"Exit";
            this->btnExxit->UseVisualStyleBackColor = true;
            this->btnExxit->Click += gcnew System::EventHandler(this, &MyForm::btnExxit_Click);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->AutoSize = true;
            this->BackColor = System::Drawing::Color::Orange;
            this->ClientSize = System::Drawing::Size(1896, 840);
            this->ControlBox = false;
            this->Controls->Add(this->btnExxit);
            this->Controls->Add(this->pictureBoxWin);
            this->Controls->Add(this->labelP1Wins);
            this->Controls->Add(this->labelP2Wins);
            this->Controls->Add(this->labelP2Result);
            this->Controls->Add(this->btnP1Result);
            this->Controls->Add(this->btnP2RollDice);
            this->Controls->Add(this->btnP1RollDice);
            this->Controls->Add(this->P2A25);
            this->Controls->Add(this->P1A25);
            this->Controls->Add(this->P2A26);
            this->Controls->Add(this->P1A26);
            this->Controls->Add(this->P2A27);
            this->Controls->Add(this->P1A27);
            this->Controls->Add(this->P2A28);
            this->Controls->Add(this->P1A28);
            this->Controls->Add(this->P2A29);
            this->Controls->Add(this->P1A29);
            this->Controls->Add(this->P2A30);
            this->Controls->Add(this->P1A30);
            this->Controls->Add(this->P2A24);
            this->Controls->Add(this->P1A24);
            this->Controls->Add(this->P2A23);
            this->Controls->Add(this->P1A23);
            this->Controls->Add(this->P2A22);
            this->Controls->Add(this->P1A22);
            this->Controls->Add(this->P2A21);
            this->Controls->Add(this->P1A21);
            this->Controls->Add(this->P2A20);
            this->Controls->Add(this->P1A20);
            this->Controls->Add(this->P2A19);
            this->Controls->Add(this->P1A19);
            this->Controls->Add(this->P2A13);
            this->Controls->Add(this->P1A13);
            this->Controls->Add(this->P2A14);
            this->Controls->Add(this->P1A14);
            this->Controls->Add(this->P2A15);
            this->Controls->Add(this->P1A15);
            this->Controls->Add(this->P2A16);
            this->Controls->Add(this->P1A16);
            this->Controls->Add(this->P2A17);
            this->Controls->Add(this->P1A17);
            this->Controls->Add(this->P2A18);
            this->Controls->Add(this->P1A18);
            this->Controls->Add(this->P2A7);
            this->Controls->Add(this->P1A7);
            this->Controls->Add(this->P2A8);
            this->Controls->Add(this->P1A8);
            this->Controls->Add(this->P2A9);
            this->Controls->Add(this->P1A9);
            this->Controls->Add(this->P2A10);
            this->Controls->Add(this->P1A10);
            this->Controls->Add(this->P1A11);
            this->Controls->Add(this->P2A11);
            this->Controls->Add(this->P1A12);
            this->Controls->Add(this->P2A12);
            this->Controls->Add(this->P1A6);
            this->Controls->Add(this->P2A6);
            this->Controls->Add(this->P1A5);
            this->Controls->Add(this->P2A5);
            this->Controls->Add(this->P1A4);
            this->Controls->Add(this->P2A4);
            this->Controls->Add(this->P1A3);
            this->Controls->Add(this->P2A3);
            this->Controls->Add(this->P1A2);
            this->Controls->Add(this->P2A2);
            this->Controls->Add(this->P1A1);
            this->Controls->Add(this->P2A1);
            this->Controls->Add(this->btnStartGame);
            this->Controls->Add(this->textBoxP2Name);
            this->Controls->Add(this->textBoxP1Name);
            this->Controls->Add(this->labelP2Name);
            this->Controls->Add(this->labelP1Name);
            this->Controls->Add(this->labelWelcome);
            this->Controls->Add(this->labelHeading);
            this->Controls->Add(this->labelP2Dice);
            this->Controls->Add(this->labelP1Dice);
            this->Controls->Add(this->pictureBox1);
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->MinimumSize = System::Drawing::Size(1800, 870);
            this->Name = L"MyForm";
            this->Text = L"Snakes and Ladders";
            this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxWin))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
		void Visible()
		{
			this->labelP2Dice->Visible = true;
			this->labelP1Dice->Visible = true;
			this->pictureBox1->Visible = true;
		}
        static std::string toStandardString(System::String^ string)
        {
            using System::Runtime::InteropServices::Marshal;
            System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
            char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
            std::string returnString(charPointer, string->Length);
            Marshal::FreeHGlobal(pointer);
            return returnString;
        }
        void RemoveP1Goti()
        {
            this->P1A1->Visible = false;
            this->P1A2->Visible = false;
            this->P1A3->Visible = false;
            this->P1A4->Visible = false;
            this->P1A5->Visible = false;
            this->P1A6->Visible = false;
            this->P1A7->Visible = false;
            this->P1A8->Visible = false;
            this->P1A9->Visible = false;
            this->P1A10->Visible = false;
            this->P1A11->Visible = false;
            this->P1A12->Visible = false;
            this->P1A13->Visible = false;
            this->P1A14->Visible = false;
            this->P1A15->Visible = false;
            this->P1A16->Visible = false;
            this->P1A17->Visible = false;
            this->P1A18->Visible = false;
            this->P1A19->Visible = false;
            this->P1A20->Visible = false;
            this->P1A21->Visible = false;
            this->P1A22->Visible = false;
            this->P1A23->Visible = false;
            this->P1A24->Visible = false;
            this->P1A25->Visible = false;
            this->P1A26->Visible = false;
            this->P1A27->Visible = false;
            this->P1A28->Visible = false;
            this->P1A29->Visible = false;
            this->P1A30->Visible = false;


        }

        void RemoveP2Goti()
        {
            this->P2A1->Visible = false;
            this->P2A2->Visible = false;
            this->P2A3->Visible = false;
            this->P2A4->Visible = false;
            this->P2A5->Visible = false;
            this->P2A6->Visible = false;
            this->P2A7->Visible = false;
            this->P2A8->Visible = false;
            this->P2A9->Visible = false;
            this->P2A10->Visible = false;
            this->P2A11->Visible = false;
            this->P2A12->Visible = false;
            this->P2A13->Visible = false;
            this->P2A14->Visible = false;
            this->P2A15->Visible = false;
            this->P2A16->Visible = false;
            this->P2A17->Visible = false;
            this->P2A18->Visible = false;
            this->P2A19->Visible = false;
            this->P2A20->Visible = false;
            this->P2A21->Visible = false;
            this->P2A22->Visible = false;
            this->P2A23->Visible = false;
            this->P2A24->Visible = false;
            this->P2A25->Visible = false;
            this->P2A26->Visible = false;
            this->P2A27->Visible = false;
            this->P2A28->Visible = false;
            this->P2A29->Visible = false;
            this->P2A30->Visible = false;


        }
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void labelP1Dice_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnStartGame_Click(System::Object^ sender, System::EventArgs^ e) {
    //Game P1;
    string NAME = toStandardString(this->textBoxP1Name->Text);
    //P1.SetName(NAME);
    Player1->SetName(NAME);
    
    string name = toStandardString(this->textBoxP2Name->Text);
    Player2->SetName(name);
    //
    //P2.SetName(name);
    this->btnP1RollDice->Visible = true;
    //this->btnP2RollDice->Visible = true;
    String^ TEXT = gcnew String(NAME.c_str());
    String^ TEXT2 = gcnew String(name.c_str());
    this->labelP1Dice->Text = TEXT+" Rolls: ";
    this->labelP2Dice->Text = TEXT2 + " Rolls: ";
	Visible();
	this->textBoxP1Name->Visible = false;
	this->textBoxP2Name->Visible = false;
	this->labelP1Name->Visible = false;
	this->labelP2Name->Visible = false;
	this->labelHeading->Visible = false;
	this->labelWelcome->Visible = false;
	this->btnStartGame->Visible = false;
}

private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label31_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnP1RollDice_Click(System::Object^ sender, System::EventArgs^ e) {
    this->btnP1RollDice->Visible = false;
    this->btnP2RollDice->Visible = true;
	this->labelP2Result->Visible = false;
    Player1->DiceMovement();
    //P1.DiceMovement();
    Player1->GetDice1();
    int a = Player1->GetTemp();
    Player1->GetDiceFig1();
    //int a = P1.GetTemp();
    int P1Dice = Player1->GetDice1();
   // int P1Dice = P1.GetDice();
    String^ TEXT = gcnew String(P1Dice.ToString());
    this->btnP1Result->Text = TEXT;
	this->btnP1Result->Visible = true;
   // this->btnP1Result->Text = "Hello";
    if (a == 1)
    {
        RemoveP1Goti();
        this->P1A1->Visible = true;
    }
    else if (a == 2)
    {
        RemoveP1Goti();
        this->P1A2->Visible = true;
    }
    else if (a == 3)
    {
        RemoveP1Goti();
        this->P1A3->Visible = true;
    }
    else if (a == 4)
    {
        RemoveP1Goti();
        this->P1A4->Visible = true;
    }
    else if (a == 5)
    {
        RemoveP1Goti();
        this->P1A5->Visible = true;
    }
    else if (a == 7)
    {
        RemoveP1Goti();
        this->P1A7->Visible = true;
    }
    else if (a == 8)
    {
        RemoveP1Goti();
        this->P1A8->Visible = true;
    }
    else if (a == 9)
    {
        RemoveP1Goti();
        this->P1A9->Visible = true;
    }
    else if (a == 10)
    {
        RemoveP1Goti();
        this->P1A10->Visible = true;
    }
    else if (a == 11)
    {
        RemoveP1Goti();
        this->P1A11->Visible = true;
    }
    else if (a == 12)
    {
        RemoveP1Goti();
        this->P1A12->Visible = true;
    }
    else if (a == 13)
    {
        RemoveP1Goti();
        this->P1A13->Visible = true;
    }
    else if (a == 14)
    {
        RemoveP1Goti();
        this->P1A14->Visible = true;
    }
    else if (a == 6)
    {
        RemoveP1Goti();
        this->P1A6->Visible = true;
    }
    else if (a == 15)
    {
        RemoveP1Goti();
        this->P1A15->Visible = true;
    }
    else if (a == 16)
    {
        RemoveP1Goti();
        this->P1A16->Visible = true;
    }
    else if (a == 17)
    {
        RemoveP1Goti();
        this->P1A17->Visible = true;
    }
    else if (a == 18)
    {
        RemoveP1Goti();
        this->P1A18->Visible = true;
    }
    else if (a == 19)
    {
        RemoveP1Goti();
        this->P1A19->Visible = true;
    }
    else if (a == 20)
    {
        RemoveP1Goti();
        this->P1A20->Visible = true;
    }
    else if (a == 21)
    {
        RemoveP1Goti();
        this->P1A21->Visible = true;
    }
    else if (a == 22)
    {
        RemoveP1Goti();
        this->P1A22->Visible = true;
    }
    else if (a == 23)
    {
        RemoveP1Goti();
        this->P1A23->Visible = true;
    }
    else if (a == 24)
    {
        RemoveP1Goti();
        this->P1A24->Visible = true;
    }
    else if (a == 25)
    {
        RemoveP1Goti();
        this->P1A25->Visible = true;
    }
    else if (a == 26)
    {
        RemoveP1Goti();
        this->P1A26->Visible = true;
    }
    else if (a == 27)
    {
    RemoveP1Goti();
    this->P1A27->Visible = true;
    }
    else if (a == 28)
    {
    RemoveP1Goti();
    this->P1A28->Visible = true;
    }
    else if (a == 29)
    {
    RemoveP1Goti();
    this->P1A29->Visible = true;
    }
    else if (a == 30)
    {
    RemoveP1Goti();
    RemoveP2Goti();
    this->P1A30->Visible = true;
    this->pictureBox1->Visible = false;
    this->pictureBoxWin->Visible = true;
    this->pictureBox1->Visible = false;
    this->pictureBoxWin->Visible = true;
    this->P1A30->Visible = false;
    string P1Wins = Player1->GetName();
    String^ P1WINS = gcnew String(P1Wins.c_str());
    this->labelP1Wins->Text = P1WINS + " WINS!";
    this->labelP1Wins->Visible = true;
    this->btnP1RollDice->Visible = false;
    this->btnP2RollDice->Visible = false;
	//this->labelP1Dice->Visible = false;
	this->labelP2Dice->Visible = false;
	this->labelP2Result->Visible = false;
    this->btnExxit->Visible = true;
	//this->btnP1Result->Visible = false;
//    this->btnPlayAgain->Visible = true;
	//this->btnStartGame->Text = "Play Again";
	//this->btnStartGame->Visible = true;
	//this->pictureBoxWin->Visible = false;
	//this->labelP1Wins->Visible = false;
	//this->labelP2Wins->Visible = false;
    }
    
}
private: System::Void btnP2RollDice_Click(System::Object^ sender, System::EventArgs^ e) {
    
    this->btnP2RollDice->Visible = false;
    this->btnP1RollDice->Visible = true;
	this->btnP1Result->Visible = false;
    Player2->DiceMovement2();

    //P2.DiceMovement();
    int a = Player2->GetTemp2();
    Player2->GetDiceFig2();
    //int a = P2.GetTemp();
    int P2Dice = Player2->GetDice2();
   // int P2Dice = P2.GetDice();
    String^ TEXT = gcnew String(P2Dice.ToString());
    this->labelP2Result->Text = TEXT;
	this->labelP2Result->Visible = true;
    //int P1Dice = Player2->GetDice();
    // this->btnP1Result->Text = "Hello";
    if (a == 1)
    {
        RemoveP2Goti();
        this->P2A1->Visible = true;
    }
    else if (a == 2)
    {
        RemoveP2Goti();
        this->P2A2->Visible = true;
    }
    else if (a == 3)
    {
        RemoveP2Goti();
        this->P2A3->Visible = true;
    }
    else if (a == 4)
    {
        RemoveP2Goti();
        this->P2A4->Visible = true;
    }
    else if (a == 5)
    {
        RemoveP2Goti();
        this->P2A5->Visible = true;
    }
    else if (a == 7)
    {
        RemoveP2Goti();
        this->P2A7->Visible = true;
    }
    else if (a == 8)
    {
        RemoveP2Goti();
        this->P2A8->Visible = true;
    }
    else if (a == 9)
    {
        RemoveP2Goti();
        this->P2A9->Visible = true;
    }
    else if (a == 10)
    {
        RemoveP2Goti();
        this->P2A10->Visible = true;
    }
    else if (a == 11)
    {
        RemoveP2Goti();
        this->P2A11->Visible = true;
    }
    else if (a == 12)
    {
        RemoveP2Goti();
        this->P2A12->Visible = true;
    }
    else if (a == 13)
    {
        RemoveP2Goti();
        this->P2A13->Visible = true;
    }
    else if (a == 14)
    {
        RemoveP2Goti();
        this->P2A14->Visible = true;
    }
    else if (a == 6)
    {
        RemoveP2Goti();
        this->P2A6->Visible = true;
    }
    else if (a == 15)
    {
        RemoveP2Goti();
        this->P2A15->Visible = true;
    }
    else if (a == 16)
    {
        RemoveP2Goti();
        this->P2A16->Visible = true;
    }
    else if (a == 17)
    {
        RemoveP2Goti();
        this->P2A17->Visible = true;
    }
    else if (a == 18)
    {
        RemoveP2Goti();
        this->P2A18->Visible = true;
    }
    else if (a == 19)
    {
        RemoveP2Goti();
        this->P2A19->Visible = true;
    }
    else if (a == 20)
    {
        RemoveP2Goti();
        this->P2A20->Visible = true;
    }
    else if (a == 21)
    {
        RemoveP2Goti();
        this->P2A21->Visible = true;
    }
    else if (a == 22)
    {
        RemoveP2Goti();
        this->P2A22->Visible = true;
    }
    else if (a == 23)
    {
        RemoveP2Goti();
        this->P2A23->Visible = true;
    }
    else if (a == 24)
    {
        RemoveP2Goti();
        this->P2A24->Visible = true;
    }
    else if (a == 25)
    {
        RemoveP2Goti();
        this->P2A25->Visible = true;
    }
    else if (a == 26)
    {
        RemoveP2Goti();
        this->P2A26->Visible = true;
    }
    else if (a == 27)
    {
        RemoveP2Goti();
        this->P2A27->Visible = true;
    }
    else if (a == 28)
    {
        RemoveP2Goti();
        this->P2A28->Visible = true;
    }
    else if (a == 29)
    {
        RemoveP2Goti();
        this->P2A29->Visible = true;
    }
    else if (a == 30)
    {
        RemoveP2Goti();
        RemoveP1Goti();
        this->P2A30->Visible = true;
        this->pictureBox1->Visible = false;
        this->pictureBoxWin->Visible = true;
        this->P2A30->Visible = false;
        string P2Wins = Player2->GetName();
        String^ P2WINS = gcnew String(P2Wins.c_str());
        this->labelP2Wins->Text = P2WINS + " WINS!";
        this->labelP2Wins->Visible = true;
        this->btnP1RollDice->Visible = false;
        this->btnP2RollDice->Visible = false;
		this->labelP1Dice->Visible = false;
		//this->labelP2Dice->Visible = false;
		//this->labelP2Result->Visible = false;
		this->btnP1Result->Visible = false;
        this->btnExxit->Visible = true;
        //this->btnPlayAgain->Visible = true;
		//this->btnStartGame->Text = "Play Again";
		//this->btnStartGame->Visible = true;
		//this->pictureBoxWin->Visible = false;
		//this->labelP1Wins->Visible = false;
	//	this->labelP2Wins->Visible = false;
    }

}
private: System::Void textBoxP1Name_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    
}
private: System::Void textBoxP2Name_TextChanged(System::Object^ sender, System::EventArgs^ e) {
   // string name = toStandardString(this->textBoxP2Name->Text);
   // Player2->SetName(name);
}

private: System::Void btnExxit_Click(System::Object^ sender, System::EventArgs^ e) {
    Application::Exit();
}
};
}
