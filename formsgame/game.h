#pragma once
#include <random>
#include <ctime>
#include "gameclasses.h"
#define ENEMYSPEED 3
#define YOUBULLETSPEED 6
#define STARSPEED 4
#define ENEMYSPAWNRATE 300
#define BULLETSPAWNRATE 35
#define LEFTRIGHTSPEED 1
#define gameover() if (!poppedgameover){ poppedgameover = true; game::Hide();MessageBox::Show("Game Over! Your Score was " + score_value->Text); exit(0);}

long map(long x, long in_min, long in_max, long out_min, long out_max);
long map(long x, long in_min, long in_max, long out_min, long out_max) {return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;}
void boomfx(void);
void boomfx(void) { return; }
bool shieldOn = 0;
int score = 0;
int currentBullet = 0;
bool leftkeydown = false;
bool rightkeydown = false;
int keyincrementstate = 1;
bool poppedgameover = false;
star stars[10];
enemy enemies[10];
youbullet youbullets[10];

namespace formsgame {
#pragma region more windows code
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for game
	/// </summary>
	public ref class game : public System::Windows::Forms::Form
	{
	public:
		game(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~game()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TrackBar^ location_slide;
	protected:

	protected:
	private: System::Windows::Forms::Button^ fire_button;
	private: System::Windows::Forms::Button^ shield_button;
	private: System::Windows::Forms::ProgressBar^ shield_bar;
	private: System::Windows::Forms::ProgressBar^ ammo_bar;
	private: System::Windows::Forms::PictureBox^ you;
	private: System::Windows::Forms::GroupBox^ game_box;
	private: System::Windows::Forms::Timer^ gameticker;
	private: System::Windows::Forms::PictureBox^ star1;
	private: System::Windows::Forms::PictureBox^ star7;

	private: System::Windows::Forms::PictureBox^ star5;
	private: System::Windows::Forms::PictureBox^ star9;

	private: System::Windows::Forms::PictureBox^ star4;
	private: System::Windows::Forms::PictureBox^ star8;

	private: System::Windows::Forms::PictureBox^ star6;

	private: System::Windows::Forms::PictureBox^ star3;
	private: System::Windows::Forms::PictureBox^ star0;
	private: System::Windows::Forms::PictureBox^ star2;
	private: System::Windows::Forms::PictureBox^ enemyBullet9;

	private: System::Windows::Forms::PictureBox^ enemy9;
	private: System::Windows::Forms::PictureBox^ enemyBullet4;
	private: System::Windows::Forms::PictureBox^ enemyBullet8;



	private: System::Windows::Forms::PictureBox^ enemy4;
	private: System::Windows::Forms::PictureBox^ enemy8;
	private: System::Windows::Forms::PictureBox^ enemyBullet3;
	private: System::Windows::Forms::PictureBox^ enemyBullet7;




	private: System::Windows::Forms::PictureBox^ enemy3;
	private: System::Windows::Forms::PictureBox^ enemy7;
	private: System::Windows::Forms::PictureBox^ enemyBullet2;
	private: System::Windows::Forms::PictureBox^ enemyBullet6;



	private: System::Windows::Forms::PictureBox^ enemy2;
	private: System::Windows::Forms::PictureBox^ enemy6;
	private: System::Windows::Forms::PictureBox^ enemyBullet1;
	private: System::Windows::Forms::PictureBox^ enemyBullet5;



	private: System::Windows::Forms::PictureBox^ enemy1;
	private: System::Windows::Forms::PictureBox^ enemy5;

	private: System::Windows::Forms::PictureBox^ enemyBullet0;
	private: System::Windows::Forms::PictureBox^ enemy0;
	private: System::Windows::Forms::Label^ score_label;
	private: System::Windows::Forms::Button^ score_value;
	private: System::Windows::Forms::PictureBox^ youBullet9;
	private: System::Windows::Forms::PictureBox^ youBullet4;
	private: System::Windows::Forms::PictureBox^ youBullet8;
	private: System::Windows::Forms::PictureBox^ youBullet3;
	private: System::Windows::Forms::PictureBox^ youBullet7;
	private: System::Windows::Forms::PictureBox^ youBullet2;
	private: System::Windows::Forms::PictureBox^ youBullet6;
	private: System::Windows::Forms::PictureBox^ youBullet1;
	private: System::Windows::Forms::PictureBox^ youBullet5;
	private: System::Windows::Forms::PictureBox^ youBullet0;
	private: System::Windows::Forms::Label^ control_help_label;

	private: System::ComponentModel::IContainer^ components;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

#pragma endregion
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(game::typeid));
			this->location_slide = (gcnew System::Windows::Forms::TrackBar());
			this->fire_button = (gcnew System::Windows::Forms::Button());
			this->shield_button = (gcnew System::Windows::Forms::Button());
			this->shield_bar = (gcnew System::Windows::Forms::ProgressBar());
			this->ammo_bar = (gcnew System::Windows::Forms::ProgressBar());
			this->you = (gcnew System::Windows::Forms::PictureBox());
			this->game_box = (gcnew System::Windows::Forms::GroupBox());
			this->youBullet9 = (gcnew System::Windows::Forms::PictureBox());
			this->enemyBullet9 = (gcnew System::Windows::Forms::PictureBox());
			this->youBullet4 = (gcnew System::Windows::Forms::PictureBox());
			this->enemy9 = (gcnew System::Windows::Forms::PictureBox());
			this->youBullet8 = (gcnew System::Windows::Forms::PictureBox());
			this->enemyBullet4 = (gcnew System::Windows::Forms::PictureBox());
			this->enemyBullet8 = (gcnew System::Windows::Forms::PictureBox());
			this->enemy4 = (gcnew System::Windows::Forms::PictureBox());
			this->youBullet3 = (gcnew System::Windows::Forms::PictureBox());
			this->enemy8 = (gcnew System::Windows::Forms::PictureBox());
			this->youBullet7 = (gcnew System::Windows::Forms::PictureBox());
			this->enemyBullet3 = (gcnew System::Windows::Forms::PictureBox());
			this->enemyBullet7 = (gcnew System::Windows::Forms::PictureBox());
			this->enemy3 = (gcnew System::Windows::Forms::PictureBox());
			this->youBullet2 = (gcnew System::Windows::Forms::PictureBox());
			this->enemy7 = (gcnew System::Windows::Forms::PictureBox());
			this->youBullet6 = (gcnew System::Windows::Forms::PictureBox());
			this->enemyBullet2 = (gcnew System::Windows::Forms::PictureBox());
			this->enemyBullet6 = (gcnew System::Windows::Forms::PictureBox());
			this->enemy2 = (gcnew System::Windows::Forms::PictureBox());
			this->youBullet1 = (gcnew System::Windows::Forms::PictureBox());
			this->enemy6 = (gcnew System::Windows::Forms::PictureBox());
			this->youBullet5 = (gcnew System::Windows::Forms::PictureBox());
			this->enemyBullet1 = (gcnew System::Windows::Forms::PictureBox());
			this->enemyBullet5 = (gcnew System::Windows::Forms::PictureBox());
			this->enemy1 = (gcnew System::Windows::Forms::PictureBox());
			this->youBullet0 = (gcnew System::Windows::Forms::PictureBox());
			this->enemy5 = (gcnew System::Windows::Forms::PictureBox());
			this->enemyBullet0 = (gcnew System::Windows::Forms::PictureBox());
			this->enemy0 = (gcnew System::Windows::Forms::PictureBox());
			this->star7 = (gcnew System::Windows::Forms::PictureBox());
			this->star5 = (gcnew System::Windows::Forms::PictureBox());
			this->star9 = (gcnew System::Windows::Forms::PictureBox());
			this->star4 = (gcnew System::Windows::Forms::PictureBox());
			this->star8 = (gcnew System::Windows::Forms::PictureBox());
			this->star6 = (gcnew System::Windows::Forms::PictureBox());
			this->star3 = (gcnew System::Windows::Forms::PictureBox());
			this->star0 = (gcnew System::Windows::Forms::PictureBox());
			this->star2 = (gcnew System::Windows::Forms::PictureBox());
			this->star1 = (gcnew System::Windows::Forms::PictureBox());
			this->gameticker = (gcnew System::Windows::Forms::Timer(this->components));
			this->score_label = (gcnew System::Windows::Forms::Label());
			this->score_value = (gcnew System::Windows::Forms::Button());
			this->control_help_label = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->location_slide))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->you))->BeginInit();
			this->game_box->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->youBullet9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemyBullet9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->youBullet4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemy9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->youBullet8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemyBullet4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemyBullet8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemy4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->youBullet3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemy8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->youBullet7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemyBullet3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemyBullet7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemy3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->youBullet2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemy7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->youBullet6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemyBullet2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemyBullet6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemy2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->youBullet1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemy6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->youBullet5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemyBullet1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemyBullet5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemy1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->youBullet0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemy5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemyBullet0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemy0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->star7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->star5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->star9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->star4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->star8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->star6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->star3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->star0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->star2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->star1))->BeginInit();
			this->SuspendLayout();
			// 
			// location_slide
			// 
			this->location_slide->Location = System::Drawing::Point(12, 754);
			this->location_slide->Maximum = 99;
			this->location_slide->Name = L"location_slide";
			this->location_slide->Size = System::Drawing::Size(660, 45);
			this->location_slide->TabIndex = 0;
			this->location_slide->Value = 50;
			this->location_slide->Scroll += gcnew System::EventHandler(this, &game::location_slide_Scroll);
			this->location_slide->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &game::location_slide_KeyUp);
			// 
			// fire_button
			// 
			this->fire_button->Location = System::Drawing::Point(12, 658);
			this->fire_button->Name = L"fire_button";
			this->fire_button->Size = System::Drawing::Size(90, 90);
			this->fire_button->TabIndex = 1;
			this->fire_button->Text = L"Fire (W)";
			this->fire_button->UseVisualStyleBackColor = true;
			this->fire_button->Click += gcnew System::EventHandler(this, &game::fire_button_Click);
			// 
			// shield_button
			// 
			this->shield_button->Location = System::Drawing::Point(582, 658);
			this->shield_button->Name = L"shield_button";
			this->shield_button->Size = System::Drawing::Size(90, 90);
			this->shield_button->TabIndex = 2;
			this->shield_button->Text = L"Shield (S)";
			this->shield_button->UseVisualStyleBackColor = true;
			this->shield_button->Click += gcnew System::EventHandler(this, &game::shield_button_Click);
			// 
			// shield_bar
			// 
			this->shield_bar->ForeColor = System::Drawing::SystemColors::Desktop;
			this->shield_bar->Location = System::Drawing::Point(108, 728);
			this->shield_bar->Maximum = 300;
			this->shield_bar->Name = L"shield_bar";
			this->shield_bar->Size = System::Drawing::Size(463, 19);
			this->shield_bar->Step = 1;
			this->shield_bar->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->shield_bar->TabIndex = 3;
			// 
			// ammo_bar
			// 
			this->ammo_bar->ForeColor = System::Drawing::Color::Firebrick;
			this->ammo_bar->Location = System::Drawing::Point(108, 703);
			this->ammo_bar->Maximum = 10;
			this->ammo_bar->Name = L"ammo_bar";
			this->ammo_bar->Size = System::Drawing::Size(463, 19);
			this->ammo_bar->Step = 1;
			this->ammo_bar->TabIndex = 4;
			// 
			// you
			// 
			this->you->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"you.Image")));
			this->you->Location = System::Drawing::Point(291, 586);
			this->you->Name = L"you";
			this->you->Size = System::Drawing::Size(48, 48);
			this->you->TabIndex = 5;
			this->you->TabStop = false;
			// 
			// game_box
			// 
			this->game_box->BackColor = System::Drawing::Color::Black;
			this->game_box->Controls->Add(this->youBullet9);
			this->game_box->Controls->Add(this->enemyBullet9);
			this->game_box->Controls->Add(this->youBullet4);
			this->game_box->Controls->Add(this->enemy9);
			this->game_box->Controls->Add(this->youBullet8);
			this->game_box->Controls->Add(this->enemyBullet4);
			this->game_box->Controls->Add(this->enemyBullet8);
			this->game_box->Controls->Add(this->enemy4);
			this->game_box->Controls->Add(this->youBullet3);
			this->game_box->Controls->Add(this->enemy8);
			this->game_box->Controls->Add(this->youBullet7);
			this->game_box->Controls->Add(this->enemyBullet3);
			this->game_box->Controls->Add(this->enemyBullet7);
			this->game_box->Controls->Add(this->enemy3);
			this->game_box->Controls->Add(this->youBullet2);
			this->game_box->Controls->Add(this->enemy7);
			this->game_box->Controls->Add(this->youBullet6);
			this->game_box->Controls->Add(this->enemyBullet2);
			this->game_box->Controls->Add(this->enemyBullet6);
			this->game_box->Controls->Add(this->enemy2);
			this->game_box->Controls->Add(this->youBullet1);
			this->game_box->Controls->Add(this->enemy6);
			this->game_box->Controls->Add(this->youBullet5);
			this->game_box->Controls->Add(this->enemyBullet1);
			this->game_box->Controls->Add(this->enemyBullet5);
			this->game_box->Controls->Add(this->enemy1);
			this->game_box->Controls->Add(this->youBullet0);
			this->game_box->Controls->Add(this->enemy5);
			this->game_box->Controls->Add(this->enemyBullet0);
			this->game_box->Controls->Add(this->enemy0);
			this->game_box->Controls->Add(this->star7);
			this->game_box->Controls->Add(this->star5);
			this->game_box->Controls->Add(this->star9);
			this->game_box->Controls->Add(this->star4);
			this->game_box->Controls->Add(this->star8);
			this->game_box->Controls->Add(this->star6);
			this->game_box->Controls->Add(this->star3);
			this->game_box->Controls->Add(this->star0);
			this->game_box->Controls->Add(this->star2);
			this->game_box->Controls->Add(this->star1);
			this->game_box->Controls->Add(this->you);
			this->game_box->Location = System::Drawing::Point(12, 12);
			this->game_box->Name = L"game_box";
			this->game_box->Size = System::Drawing::Size(660, 640);
			this->game_box->TabIndex = 6;
			this->game_box->TabStop = false;
			this->game_box->Text = L"game";
			// 
			// youBullet9
			// 
			this->youBullet9->Location = System::Drawing::Point(527, 409);
			this->youBullet9->Name = L"youBullet9";
			this->youBullet9->Size = System::Drawing::Size(16, 16);
			this->youBullet9->TabIndex = 8;
			this->youBullet9->TabStop = false;
			// 
			// enemyBullet9
			// 
			this->enemyBullet9->Location = System::Drawing::Point(555, 279);
			this->enemyBullet9->Name = L"enemyBullet9";
			this->enemyBullet9->Size = System::Drawing::Size(16, 16);
			this->enemyBullet9->TabIndex = 8;
			this->enemyBullet9->TabStop = false;
			// 
			// youBullet4
			// 
			this->youBullet4->Location = System::Drawing::Point(527, 347);
			this->youBullet4->Name = L"youBullet4";
			this->youBullet4->Size = System::Drawing::Size(16, 16);
			this->youBullet4->TabIndex = 8;
			this->youBullet4->TabStop = false;
			// 
			// enemy9
			// 
			this->enemy9->Location = System::Drawing::Point(512, 279);
			this->enemy9->Name = L"enemy9";
			this->enemy9->Size = System::Drawing::Size(48, 48);
			this->enemy9->TabIndex = 7;
			this->enemy9->TabStop = false;
			// 
			// youBullet8
			// 
			this->youBullet8->Location = System::Drawing::Point(415, 409);
			this->youBullet8->Name = L"youBullet8";
			this->youBullet8->Size = System::Drawing::Size(16, 16);
			this->youBullet8->TabIndex = 8;
			this->youBullet8->TabStop = false;
			// 
			// enemyBullet4
			// 
			this->enemyBullet4->Location = System::Drawing::Point(555, 217);
			this->enemyBullet4->Name = L"enemyBullet4";
			this->enemyBullet4->Size = System::Drawing::Size(16, 16);
			this->enemyBullet4->TabIndex = 8;
			this->enemyBullet4->TabStop = false;
			// 
			// enemyBullet8
			// 
			this->enemyBullet8->Location = System::Drawing::Point(443, 279);
			this->enemyBullet8->Name = L"enemyBullet8";
			this->enemyBullet8->Size = System::Drawing::Size(16, 16);
			this->enemyBullet8->TabIndex = 8;
			this->enemyBullet8->TabStop = false;
			// 
			// enemy4
			// 
			this->enemy4->Location = System::Drawing::Point(512, 217);
			this->enemy4->Name = L"enemy4";
			this->enemy4->Size = System::Drawing::Size(48, 48);
			this->enemy4->TabIndex = 7;
			this->enemy4->TabStop = false;
			// 
			// youBullet3
			// 
			this->youBullet3->Location = System::Drawing::Point(415, 347);
			this->youBullet3->Name = L"youBullet3";
			this->youBullet3->Size = System::Drawing::Size(16, 16);
			this->youBullet3->TabIndex = 8;
			this->youBullet3->TabStop = false;
			// 
			// enemy8
			// 
			this->enemy8->Location = System::Drawing::Point(400, 279);
			this->enemy8->Name = L"enemy8";
			this->enemy8->Size = System::Drawing::Size(48, 48);
			this->enemy8->TabIndex = 7;
			this->enemy8->TabStop = false;
			// 
			// youBullet7
			// 
			this->youBullet7->Location = System::Drawing::Point(306, 409);
			this->youBullet7->Name = L"youBullet7";
			this->youBullet7->Size = System::Drawing::Size(16, 16);
			this->youBullet7->TabIndex = 8;
			this->youBullet7->TabStop = false;
			// 
			// enemyBullet3
			// 
			this->enemyBullet3->Location = System::Drawing::Point(443, 217);
			this->enemyBullet3->Name = L"enemyBullet3";
			this->enemyBullet3->Size = System::Drawing::Size(16, 16);
			this->enemyBullet3->TabIndex = 8;
			this->enemyBullet3->TabStop = false;
			// 
			// enemyBullet7
			// 
			this->enemyBullet7->Location = System::Drawing::Point(334, 279);
			this->enemyBullet7->Name = L"enemyBullet7";
			this->enemyBullet7->Size = System::Drawing::Size(16, 16);
			this->enemyBullet7->TabIndex = 8;
			this->enemyBullet7->TabStop = false;
			// 
			// enemy3
			// 
			this->enemy3->Location = System::Drawing::Point(400, 217);
			this->enemy3->Name = L"enemy3";
			this->enemy3->Size = System::Drawing::Size(48, 48);
			this->enemy3->TabIndex = 7;
			this->enemy3->TabStop = false;
			// 
			// youBullet2
			// 
			this->youBullet2->Location = System::Drawing::Point(306, 347);
			this->youBullet2->Name = L"youBullet2";
			this->youBullet2->Size = System::Drawing::Size(16, 16);
			this->youBullet2->TabIndex = 8;
			this->youBullet2->TabStop = false;
			// 
			// enemy7
			// 
			this->enemy7->Location = System::Drawing::Point(291, 279);
			this->enemy7->Name = L"enemy7";
			this->enemy7->Size = System::Drawing::Size(48, 48);
			this->enemy7->TabIndex = 7;
			this->enemy7->TabStop = false;
			// 
			// youBullet6
			// 
			this->youBullet6->Location = System::Drawing::Point(188, 409);
			this->youBullet6->Name = L"youBullet6";
			this->youBullet6->Size = System::Drawing::Size(16, 16);
			this->youBullet6->TabIndex = 8;
			this->youBullet6->TabStop = false;
			// 
			// enemyBullet2
			// 
			this->enemyBullet2->Location = System::Drawing::Point(334, 217);
			this->enemyBullet2->Name = L"enemyBullet2";
			this->enemyBullet2->Size = System::Drawing::Size(16, 16);
			this->enemyBullet2->TabIndex = 8;
			this->enemyBullet2->TabStop = false;
			// 
			// enemyBullet6
			// 
			this->enemyBullet6->Location = System::Drawing::Point(216, 279);
			this->enemyBullet6->Name = L"enemyBullet6";
			this->enemyBullet6->Size = System::Drawing::Size(16, 16);
			this->enemyBullet6->TabIndex = 8;
			this->enemyBullet6->TabStop = false;
			// 
			// enemy2
			// 
			this->enemy2->Location = System::Drawing::Point(291, 217);
			this->enemy2->Name = L"enemy2";
			this->enemy2->Size = System::Drawing::Size(48, 48);
			this->enemy2->TabIndex = 7;
			this->enemy2->TabStop = false;
			// 
			// youBullet1
			// 
			this->youBullet1->Location = System::Drawing::Point(188, 347);
			this->youBullet1->Name = L"youBullet1";
			this->youBullet1->Size = System::Drawing::Size(16, 16);
			this->youBullet1->TabIndex = 8;
			this->youBullet1->TabStop = false;
			// 
			// enemy6
			// 
			this->enemy6->Location = System::Drawing::Point(173, 279);
			this->enemy6->Name = L"enemy6";
			this->enemy6->Size = System::Drawing::Size(48, 48);
			this->enemy6->TabIndex = 7;
			this->enemy6->TabStop = false;
			// 
			// youBullet5
			// 
			this->youBullet5->Location = System::Drawing::Point(78, 409);
			this->youBullet5->Name = L"youBullet5";
			this->youBullet5->Size = System::Drawing::Size(16, 16);
			this->youBullet5->TabIndex = 8;
			this->youBullet5->TabStop = false;
			// 
			// enemyBullet1
			// 
			this->enemyBullet1->Location = System::Drawing::Point(216, 217);
			this->enemyBullet1->Name = L"enemyBullet1";
			this->enemyBullet1->Size = System::Drawing::Size(16, 16);
			this->enemyBullet1->TabIndex = 8;
			this->enemyBullet1->TabStop = false;
			// 
			// enemyBullet5
			// 
			this->enemyBullet5->Location = System::Drawing::Point(106, 279);
			this->enemyBullet5->Name = L"enemyBullet5";
			this->enemyBullet5->Size = System::Drawing::Size(16, 16);
			this->enemyBullet5->TabIndex = 8;
			this->enemyBullet5->TabStop = false;
			// 
			// enemy1
			// 
			this->enemy1->Location = System::Drawing::Point(173, 217);
			this->enemy1->Name = L"enemy1";
			this->enemy1->Size = System::Drawing::Size(48, 48);
			this->enemy1->TabIndex = 7;
			this->enemy1->TabStop = false;
			// 
			// youBullet0
			// 
			this->youBullet0->Location = System::Drawing::Point(78, 347);
			this->youBullet0->Name = L"youBullet0";
			this->youBullet0->Size = System::Drawing::Size(16, 16);
			this->youBullet0->TabIndex = 8;
			this->youBullet0->TabStop = false;
			// 
			// enemy5
			// 
			this->enemy5->Location = System::Drawing::Point(63, 279);
			this->enemy5->Name = L"enemy5";
			this->enemy5->Size = System::Drawing::Size(48, 48);
			this->enemy5->TabIndex = 7;
			this->enemy5->TabStop = false;
			// 
			// enemyBullet0
			// 
			this->enemyBullet0->Location = System::Drawing::Point(106, 217);
			this->enemyBullet0->Name = L"enemyBullet0";
			this->enemyBullet0->Size = System::Drawing::Size(16, 16);
			this->enemyBullet0->TabIndex = 8;
			this->enemyBullet0->TabStop = false;
			// 
			// enemy0
			// 
			this->enemy0->Location = System::Drawing::Point(63, 217);
			this->enemy0->Name = L"enemy0";
			this->enemy0->Size = System::Drawing::Size(48, 48);
			this->enemy0->TabIndex = 7;
			this->enemy0->TabStop = false;
			// 
			// star7
			// 
			this->star7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"star7.Image")));
			this->star7->Location = System::Drawing::Point(478, 143);
			this->star7->Name = L"star7";
			this->star7->Size = System::Drawing::Size(8, 8);
			this->star7->TabIndex = 6;
			this->star7->TabStop = false;
			// 
			// star5
			// 
			this->star5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"star5.Image")));
			this->star5->Location = System::Drawing::Point(478, 92);
			this->star5->Name = L"star5";
			this->star5->Size = System::Drawing::Size(8, 8);
			this->star5->TabIndex = 6;
			this->star5->TabStop = false;
			// 
			// star9
			// 
			this->star9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"star9.Image")));
			this->star9->Location = System::Drawing::Point(379, 143);
			this->star9->Name = L"star9";
			this->star9->Size = System::Drawing::Size(8, 8);
			this->star9->TabIndex = 6;
			this->star9->TabStop = false;
			// 
			// star4
			// 
			this->star4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"star4.Image")));
			this->star4->Location = System::Drawing::Point(379, 92);
			this->star4->Name = L"star4";
			this->star4->Size = System::Drawing::Size(8, 8);
			this->star4->TabIndex = 6;
			this->star4->TabStop = false;
			// 
			// star8
			// 
			this->star8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"star8.Image")));
			this->star8->Location = System::Drawing::Point(266, 143);
			this->star8->Name = L"star8";
			this->star8->Size = System::Drawing::Size(8, 8);
			this->star8->TabIndex = 6;
			this->star8->TabStop = false;
			// 
			// star6
			// 
			this->star6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"star6.Image")));
			this->star6->Location = System::Drawing::Point(156, 143);
			this->star6->Name = L"star6";
			this->star6->Size = System::Drawing::Size(8, 8);
			this->star6->TabIndex = 6;
			this->star6->TabStop = false;
			// 
			// star3
			// 
			this->star3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"star3.Image")));
			this->star3->Location = System::Drawing::Point(266, 92);
			this->star3->Name = L"star3";
			this->star3->Size = System::Drawing::Size(8, 8);
			this->star3->TabIndex = 6;
			this->star3->TabStop = false;
			// 
			// star0
			// 
			this->star0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"star0.Image")));
			this->star0->Location = System::Drawing::Point(63, 143);
			this->star0->Name = L"star0";
			this->star0->Size = System::Drawing::Size(8, 8);
			this->star0->TabIndex = 6;
			this->star0->TabStop = false;
			// 
			// star2
			// 
			this->star2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"star2.Image")));
			this->star2->Location = System::Drawing::Point(156, 92);
			this->star2->Name = L"star2";
			this->star2->Size = System::Drawing::Size(8, 8);
			this->star2->TabIndex = 6;
			this->star2->TabStop = false;
			// 
			// star1
			// 
			this->star1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"star1.Image")));
			this->star1->Location = System::Drawing::Point(63, 92);
			this->star1->Name = L"star1";
			this->star1->Size = System::Drawing::Size(8, 8);
			this->star1->TabIndex = 6;
			this->star1->TabStop = false;
			// 
			// gameticker
			// 
			this->gameticker->Enabled = true;
			this->gameticker->Interval = 10;
			this->gameticker->Tick += gcnew System::EventHandler(this, &game::gameticker_Tick);
			// 
			// score_label
			// 
			this->score_label->AutoSize = true;
			this->score_label->Location = System::Drawing::Point(108, 669);
			this->score_label->Name = L"score_label";
			this->score_label->Size = System::Drawing::Size(41, 13);
			this->score_label->TabIndex = 7;
			this->score_label->Text = L"Score: ";
			// 
			// score_value
			// 
			this->score_value->BackColor = System::Drawing::Color::OrangeRed;
			this->score_value->Font = (gcnew System::Drawing::Font(L"Ti83Pluspc", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->score_value->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->score_value->Location = System::Drawing::Point(155, 658);
			this->score_value->Name = L"score_value";
			this->score_value->Size = System::Drawing::Size(80, 40);
			this->score_value->TabIndex = 8;
			this->score_value->Text = L"0";
			this->score_value->UseVisualStyleBackColor = false;
			// 
			// control_help_label
			// 
			this->control_help_label->AutoSize = true;
			this->control_help_label->Location = System::Drawing::Point(321, 673);
			this->control_help_label->Name = L"control_help_label";
			this->control_help_label->Size = System::Drawing::Size(43, 13);
			this->control_help_label->TabIndex = 9;
			this->control_help_label->Text = L"<-A D->";
			// 
			// game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(684, 811);
			this->Controls->Add(this->control_help_label);
			this->Controls->Add(this->score_value);
			this->Controls->Add(this->score_label);
			this->Controls->Add(this->ammo_bar);
			this->Controls->Add(this->shield_bar);
			this->Controls->Add(this->shield_button);
			this->Controls->Add(this->fire_button);
			this->Controls->Add(this->location_slide);
			this->Controls->Add(this->game_box);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->Name = L"game";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SPACEGAME";
			this->Load += gcnew System::EventHandler(this, &game::game_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &game::game_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->location_slide))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->you))->EndInit();
			this->game_box->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->youBullet9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemyBullet9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->youBullet4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemy9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->youBullet8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemyBullet4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemyBullet8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemy4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->youBullet3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemy8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->youBullet7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemyBullet3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemyBullet7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemy3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->youBullet2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemy7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->youBullet6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemyBullet2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemyBullet6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemy2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->youBullet1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemy6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->youBullet5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemyBullet1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemyBullet5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemy1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->youBullet0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemy5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemyBullet0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemy0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->star7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->star5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->star9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->star4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->star8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->star6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->star3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->star0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->star2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->star1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void game_Load(System::Object^ sender, System::EventArgs^ e) {
	std::srand(std::time(0));
	shield_bar->Value = 100;
	ammo_bar->Value = 0;
	//manage stars:
#pragma region resources
	you->ImageLocation = "resources/you.png";
	star0->ImageLocation = "resources/star.png";
	star1->ImageLocation = "resources/star.png";
	star2->ImageLocation = "resources/star.png";
	star3->ImageLocation = "resources/star.png";
	star4->ImageLocation = "resources/star.png";
	star5->ImageLocation = "resources/star.png";
	star6->ImageLocation = "resources/star.png";
	star7->ImageLocation = "resources/star.png";
	star8->ImageLocation = "resources/star.png";
	star9->ImageLocation = "resources/star.png";
	enemy0->ImageLocation = "resources/enemy.png";
	enemy1->ImageLocation = "resources/enemy.png";
	enemy2->ImageLocation = "resources/enemy.png";
	enemy3->ImageLocation = "resources/enemy.png";
	enemy4->ImageLocation = "resources/enemy.png";
	enemy5->ImageLocation = "resources/enemy.png";
	enemy6->ImageLocation = "resources/enemy.png";
	enemy7->ImageLocation = "resources/enemy.png";
	enemy8->ImageLocation = "resources/enemy.png";
	enemy9->ImageLocation = "resources/enemy.png";
	enemyBullet0->ImageLocation = "resources/enemybullet.png";
	enemyBullet1->ImageLocation = "resources/enemybullet.png";
	enemyBullet2->ImageLocation = "resources/enemybullet.png";
	enemyBullet3->ImageLocation = "resources/enemybullet.png";
	enemyBullet4->ImageLocation = "resources/enemybullet.png";
	enemyBullet5->ImageLocation = "resources/enemybullet.png";
	enemyBullet6->ImageLocation = "resources/enemybullet.png";
	enemyBullet7->ImageLocation = "resources/enemybullet.png";
	enemyBullet8->ImageLocation = "resources/enemybullet.png";
	enemyBullet9->ImageLocation = "resources/enemybullet.png";
	youBullet0->ImageLocation = "resources/youbullet.png";
	youBullet1->ImageLocation = "resources/youbullet.png";
	youBullet2->ImageLocation = "resources/youbullet.png";
	youBullet3->ImageLocation = "resources/youbullet.png";
	youBullet4->ImageLocation = "resources/youbullet.png";
	youBullet5->ImageLocation = "resources/youbullet.png";
	youBullet6->ImageLocation = "resources/youbullet.png";
	youBullet7->ImageLocation = "resources/youbullet.png";
	youBullet8->ImageLocation = "resources/youbullet.png";
	youBullet9->ImageLocation = "resources/youbullet.png";
#pragma endregion
#pragma region initvisible
	you->BringToFront();
	star0->Visible = stars[0].shown();
	star1->Visible = stars[1].shown();
	star2->Visible = stars[2].shown();
	star3->Visible = stars[3].shown();
	star4->Visible = stars[4].shown();
	star5->Visible = stars[5].shown();
	star6->Visible = stars[6].shown();
	star7->Visible = stars[7].shown();
	star8->Visible = stars[8].shown();
	star9->Visible = stars[9].shown();
	enemy0->Visible = enemies[0].shown();
	enemy1->Visible = enemies[1].shown();
	enemy2->Visible = enemies[2].shown();
	enemy3->Visible = enemies[3].shown();
	enemy4->Visible = enemies[4].shown();
	enemy5->Visible = enemies[5].shown();
	enemy6->Visible = enemies[6].shown();
	enemy7->Visible = enemies[7].shown();
	enemy8->Visible = enemies[8].shown();
	enemy9->Visible = enemies[9].shown();
	enemyBullet0->Visible = enemies[0].bullet.shown();
	enemyBullet1->Visible = enemies[1].bullet.shown();
	enemyBullet2->Visible = enemies[2].bullet.shown();
	enemyBullet3->Visible = enemies[3].bullet.shown();
	enemyBullet4->Visible = enemies[4].bullet.shown();
	enemyBullet5->Visible = enemies[5].bullet.shown();
	enemyBullet6->Visible = enemies[6].bullet.shown();
	enemyBullet7->Visible = enemies[7].bullet.shown();
	enemyBullet8->Visible = enemies[8].bullet.shown();
	enemyBullet9->Visible = enemies[9].bullet.shown();
	youBullet0->Visible = youbullets[0].shown();
	youBullet1->Visible = youbullets[1].shown();
	youBullet2->Visible = youbullets[2].shown();
	youBullet3->Visible = youbullets[3].shown();
	youBullet4->Visible = youbullets[4].shown();
	youBullet5->Visible = youbullets[5].shown();
	youBullet6->Visible = youbullets[6].shown();
	youBullet7->Visible = youbullets[7].shown();
	youBullet8->Visible = youbullets[8].shown();
	youBullet9->Visible = youbullets[9].shown();
#pragma endregion
}
private: System::Void location_slide_Scroll(System::Object^ sender, System::EventArgs^ e) {
	Point newloc(map(location_slide->Value, 0, 99, 12, 600), 584);
	you->Location = newloc;
}
private: System::Void shield_button_Click(System::Object^ sender, System::EventArgs^ e) {
	shieldOn = !shieldOn;
	if (shieldOn) {
		you->ImageLocation = "resources/youshield.png";
	}
	else {
		you->ImageLocation = "resources/you.png";
	}
}
private: System::Void gameticker_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (++keyincrementstate >= LEFTRIGHTSPEED) {
		keyincrementstate = 0;
		if (leftkeydown && location_slide->Value > location_slide->Minimum) {
			--location_slide->Value;
			Point newloc(map(location_slide->Value, 0, 99, 12, 600), 584);
			you->Location = newloc;
		}
		if (rightkeydown && location_slide->Value < location_slide->Maximum) {
			++location_slide->Value;
			Point newloc(map(location_slide->Value, 0, 99, 12, 600), 584);
			you->Location = newloc;
		}
	}
	if (shieldOn) {
		if (shield_bar->Value >= 3) {
			shield_bar->Value -= 3;
		}
		else {
			shieldOn = 0;
			you->ImageLocation = "resources/you.png";
		}
	}
	else {
		if (shield_bar->Value < shield_bar->Maximum) {
			shield_bar->PerformStep();
		}
	}
	//manage stars:
	if (stars[0].shown()) {
		stars[0].incrY(STARSPEED);
		Point point0(stars[0].getX(), stars[0].getY());
		star0->Location = point0;
		star0->Visible = stars[0].shown();
	}
	else {
		if (!(std::rand() % 100)) {
			stars[0].home();
			Point point0(stars[0].getX(), stars[0].getY());
			star0->Location = point0;
			star0->Visible = stars[0].shown();
		}
	}
#pragma region extrastarnumbers
	if (stars[1].shown()) {
		stars[1].incrY(STARSPEED);
		Point point0(stars[1].getX(), stars[1].getY());
		star1->Location = point0;
		star1->Visible = stars[1].shown();
	}
	else {
		if (!(std::rand() % 100)) {
			stars[1].home();
			Point point0(stars[1].getX(), stars[1].getY());
			star1->Location = point0;
			star1->Visible = stars[1].shown();
		}
	}

	if (stars[2].shown()) {
		stars[2].incrY(STARSPEED);
		Point point0(stars[2].getX(), stars[2].getY());
		star2->Location = point0;
		star2->Visible = stars[2].shown();
	}
	else {
		if (!(std::rand() % 100)) {
			stars[2].home();
			Point point0(stars[2].getX(), stars[2].getY());
			star2->Location = point0;
			star2->Visible = stars[2].shown();
		}
	}

	if (stars[3].shown()) {
		stars[3].incrY(STARSPEED);
		Point point0(stars[3].getX(), stars[3].getY());
		star3->Location = point0;
		star3->Visible = stars[3].shown();
	}
	else {
		if (!(std::rand() % 100)) {
			stars[3].home();
			Point point0(stars[3].getX(), stars[3].getY());
			star3->Location = point0;
			star3->Visible = stars[3].shown();
		}
	}

	if (stars[4].shown()) {
		stars[4].incrY(STARSPEED);
		Point point0(stars[4].getX(), stars[4].getY());
		star4->Location = point0;
		star4->Visible = stars[4].shown();
	}
	else {
		if (!(std::rand() % 100)) {
			stars[4].home();
			Point point0(stars[4].getX(), stars[4].getY());
			star4->Location = point0;
			star4->Visible = stars[4].shown();
		}
	}

	if (stars[5].shown()) {
		stars[5].incrY(STARSPEED);
		Point point0(stars[5].getX(), stars[5].getY());
		star5->Location = point0;
		star5->Visible = stars[5].shown();
	}
	else {
		if (!(std::rand() % 100)) {
			stars[5].home();
			Point point0(stars[5].getX(), stars[5].getY());
			star5->Location = point0;
			star5->Visible = stars[5].shown();
		}
	}

	if (stars[6].shown()) {
		stars[6].incrY(STARSPEED);
		Point point0(stars[6].getX(), stars[6].getY());
		star6->Location = point0;
		star6->Visible = stars[6].shown();
	}
	else {
		if (!(std::rand() % 100)) {
			stars[6].home();
			Point point0(stars[6].getX(), stars[6].getY());
			star6->Location = point0;
			star6->Visible = stars[0].shown();
		}
	}

	if (stars[7].shown()) {
		stars[7].incrY(STARSPEED);
		Point point0(stars[7].getX(), stars[7].getY());
		star7->Location = point0;
		star7->Visible = stars[7].shown();
	}
	else {
		if (!(std::rand() % 100)) {
			stars[7].home();
			Point point0(stars[7].getX(), stars[7].getY());
			star7->Location = point0;
			star7->Visible = stars[7].shown();
		}
	}

	if (stars[8].shown()) {
		stars[8].incrY(STARSPEED);
		Point point0(stars[8].getX(), stars[8].getY());
		star8->Location = point0;
		star8->Visible = stars[8].shown();
	}
	else {
		if (!(std::rand() % 100)) {
			stars[8].home();
			Point point0(stars[8].getX(), stars[8].getY());
			star8->Location = point0;
			star8->Visible = stars[8].shown();
		}
	}

	if (stars[9].shown()) {
		stars[9].incrY(STARSPEED);
		Point point0(stars[9].getX(), stars[9].getY());
		star9->Location = point0;
		star9->Visible = stars[9].shown();
	}
	else {
		if (!(std::rand() % 100)) {
			stars[9].home();
			Point point0(stars[9].getX(), stars[9].getY());
			star9->Location = point0;
			star9->Visible = stars[9].shown();
		}
	}
#pragma endregion
	//manage enemies and their bullets
	enemies[0].incrY(ENEMYSPEED);
	Point point0(enemies[0].getX(), enemies[0].getY());
	Point point0b(enemies[0].bullet.getX(), enemies[0].bullet.getY());
	enemy0->Location = point0;
	enemy0->Visible = enemies[0].shown();
	enemyBullet0->Location = point0b;
	enemyBullet0->Visible = enemies[0].bullet.shown();

	if (!enemies[0].shown() && !(std::rand() % ENEMYSPAWNRATE)) {
		enemies[0].home();
	}

	if (enemies[0].shown() && !(std::rand() % BULLETSPAWNRATE)) {
		enemies[0].fire();
	}

	if (enemies[0].isColliding(you->Location.X, you->Location.Y, 48, 48)) {
		if (shieldOn) {
			enemies[0].hide();
			score += 5;
			score_value->Text = System::Convert::ToString(score);
		}
		else {
			gameover()
		}
	}

	if (enemies[0].bullet.isColliding(you->Location.X, you->Location.Y, 48, 48)) {
		if (shieldOn) {
			enemies[0].bullet.hide();
			if (ammo_bar->Value < ammo_bar->Maximum) ammo_bar->Value++;
		}
		else {
			gameover()
		}
	}
#pragma region extraenemynumbers
	enemies[1].incrY(ENEMYSPEED);
	Point point1(enemies[1].getX(), enemies[1].getY());
	Point point1b(enemies[1].bullet.getX(), enemies[1].bullet.getY());
	enemy1->Location = point1;
	enemy1->Visible = enemies[1].shown();
	enemyBullet1->Location = point1b;
	enemyBullet1->Visible = enemies[1].bullet.shown();

	if (!enemies[1].shown() && !(std::rand() % ENEMYSPAWNRATE)) {
		enemies[1].home();
	}

	if (enemies[1].shown() && !(std::rand() % BULLETSPAWNRATE)) {
		enemies[1].fire();
	}

	if (enemies[1].isColliding(you->Location.X, you->Location.Y, 48, 48)) {
		if (shieldOn) {
			enemies[1].hide();
			score += 5;
			score_value->Text = System::Convert::ToString(score);
		}
		else {
			gameover()
		}
	}

	if (enemies[1].bullet.isColliding(you->Location.X, you->Location.Y, 48, 48)) {
		if (shieldOn) {
			enemies[1].bullet.hide();
			if (ammo_bar->Value < ammo_bar->Maximum) ammo_bar->Value++;
		}
		else {
			gameover()
		}
	}

	enemies[2].incrY(ENEMYSPEED);
	Point point2(enemies[2].getX(), enemies[2].getY());
	Point point2b(enemies[2].bullet.getX(), enemies[2].bullet.getY());
	enemy2->Location = point2;
	enemy2->Visible = enemies[2].shown();
	enemyBullet2->Location = point2b;
	enemyBullet2->Visible = enemies[2].bullet.shown();

	if (!enemies[2].shown() && !(std::rand() % ENEMYSPAWNRATE)) {
		enemies[2].home();
	}

	if (enemies[2].shown() && !(std::rand() % BULLETSPAWNRATE)) {
		enemies[2].fire();
	}

	if (enemies[2].isColliding(you->Location.X, you->Location.Y, 48, 48)) {
		if (shieldOn) {
			enemies[2].hide();
			score += 5;
			score_value->Text = System::Convert::ToString(score);
		}
		else {
			gameover()
		}
	}

	if (enemies[2].bullet.isColliding(you->Location.X, you->Location.Y, 48, 48)) {
		if (shieldOn) {
			enemies[2].bullet.hide();
			if (ammo_bar->Value < ammo_bar->Maximum) ammo_bar->Value++;
		}
		else {
			gameover()
		}
	}

	enemies[3].incrY(ENEMYSPEED);
	Point point3(enemies[3].getX(), enemies[3].getY());
	Point point3b(enemies[3].bullet.getX(), enemies[3].bullet.getY());
	enemy3->Location = point3;
	enemy3->Visible = enemies[3].shown();
	enemyBullet3->Location = point3b;
	enemyBullet3->Visible = enemies[3].bullet.shown();

	if (!enemies[3].shown() && !(std::rand() % ENEMYSPAWNRATE)) {
		enemies[3].home();
	}

	if (enemies[3].shown() && !(std::rand() % BULLETSPAWNRATE)) {
		enemies[3].fire();
	}

	if (enemies[3].isColliding(you->Location.X, you->Location.Y, 48, 48)) {
		if (shieldOn) {
			enemies[3].hide();
			score += 5;
			score_value->Text = System::Convert::ToString(score);
		}
		else {
			gameover()
		}
	}

	if (enemies[3].bullet.isColliding(you->Location.X, you->Location.Y, 48, 48)) {
		if (shieldOn) {
			enemies[3].bullet.hide();
			if (ammo_bar->Value < ammo_bar->Maximum) ammo_bar->Value++;
		}
		else {
			gameover()
		}
	}

	enemies[4].incrY(ENEMYSPEED);
	Point point4(enemies[4].getX(), enemies[4].getY());
	Point point4b(enemies[4].bullet.getX(), enemies[4].bullet.getY());
	enemy4->Location = point4;
	enemy4->Visible = enemies[4].shown();
	enemyBullet4->Location = point4b;
	enemyBullet4->Visible = enemies[4].bullet.shown();

	if (!enemies[4].shown() && !(std::rand() % ENEMYSPAWNRATE)) {
		enemies[4].home();
	}

	if (enemies[4].shown() && !(std::rand() % BULLETSPAWNRATE)) {
		enemies[4].fire();
	}

	if (enemies[4].isColliding(you->Location.X, you->Location.Y, 48, 48)) {
		if (shieldOn) {
			enemies[4].hide();
			score += 5;
			score_value->Text = System::Convert::ToString(score);
		}
		else {
			gameover()
		}
	}

	if (enemies[4].bullet.isColliding(you->Location.X, you->Location.Y, 48, 48)) {
		if (shieldOn) {
			enemies[4].bullet.hide();
			if (ammo_bar->Value < ammo_bar->Maximum) ammo_bar->Value++;
		}
		else {
			gameover()
		}
	}

	enemies[5].incrY(ENEMYSPEED);
	Point point5(enemies[5].getX(), enemies[5].getY());
	Point point5b(enemies[5].bullet.getX(), enemies[5].bullet.getY());
	enemy5->Location = point5;
	enemy5->Visible = enemies[5].shown();
	enemyBullet5->Location = point5b;
	enemyBullet5->Visible = enemies[5].bullet.shown();

	if (!enemies[5].shown() && !(std::rand() % ENEMYSPAWNRATE)) {
		enemies[5].home();
	}

	if (enemies[5].shown() && !(std::rand() % BULLETSPAWNRATE)) {
		enemies[5].fire();
	}

	if (enemies[5].isColliding(you->Location.X, you->Location.Y, 48, 48)) {
		if (shieldOn) {
			enemies[5].hide();
			score += 5;
			score_value->Text = System::Convert::ToString(score);
		}
		else {
			gameover()
		}
	}

	if (enemies[5].bullet.isColliding(you->Location.X, you->Location.Y, 48, 48)) {
		if (shieldOn) {
			enemies[5].bullet.hide();
			if (ammo_bar->Value < ammo_bar->Maximum) ammo_bar->Value++;
		}
		else {
			gameover()
		}
	}

	enemies[6].incrY(ENEMYSPEED);
	Point point6(enemies[6].getX(), enemies[6].getY());
	Point point6b(enemies[6].bullet.getX(), enemies[6].bullet.getY());
	enemy6->Location = point6;
	enemy6->Visible = enemies[6].shown();
	enemyBullet6->Location = point6b;
	enemyBullet6->Visible = enemies[6].bullet.shown();

	if (!enemies[6].shown() && !(std::rand() % ENEMYSPAWNRATE)) {
		enemies[6].home();
	}

	if (enemies[6].shown() && !(std::rand() % BULLETSPAWNRATE)) {
		enemies[6].fire();
	}

	if (enemies[6].isColliding(you->Location.X, you->Location.Y, 48, 48)) {
		if (shieldOn) {
			enemies[6].hide();
			score += 5;
			score_value->Text = System::Convert::ToString(score);
		}
		else {
			gameover()
		}
	}

	if (enemies[6].bullet.isColliding(you->Location.X, you->Location.Y, 48, 48)) {
		if (shieldOn) {
			enemies[6].bullet.hide();
			if (ammo_bar->Value < ammo_bar->Maximum) ammo_bar->Value++;
		}
		else {
			gameover()
		}
	}

	enemies[7].incrY(ENEMYSPEED);
	Point point7(enemies[7].getX(), enemies[7].getY());
	Point point7b(enemies[7].bullet.getX(), enemies[7].bullet.getY());
	enemy7->Location = point7;
	enemy7->Visible = enemies[7].shown();
	enemyBullet7->Location = point7b;
	enemyBullet7->Visible = enemies[7].bullet.shown();

	if (!enemies[7].shown() && !(std::rand() % ENEMYSPAWNRATE)) {
		enemies[7].home();
	}

	if (enemies[7].shown() && !(std::rand() % BULLETSPAWNRATE)) {
		enemies[7].fire();
	}

	if (enemies[7].isColliding(you->Location.X, you->Location.Y, 48, 48)) {
		if (shieldOn) {
			enemies[7].hide();
			score += 5;
			score_value->Text = System::Convert::ToString(score);
		}
		else {
			gameover()
		}
	}

	if (enemies[7].bullet.isColliding(you->Location.X, you->Location.Y, 48, 48)) {
		if (shieldOn) {
			enemies[7].bullet.hide();
			if (ammo_bar->Value < ammo_bar->Maximum) ammo_bar->Value++;
		}
		else {
			gameover()
		}
	}

	enemies[8].incrY(ENEMYSPEED);
	Point point8(enemies[8].getX(), enemies[8].getY());
	Point point8b(enemies[8].bullet.getX(), enemies[8].bullet.getY());
	enemy8->Location = point8;
	enemy8->Visible = enemies[8].shown();
	enemyBullet8->Location = point8b;
	enemyBullet8->Visible = enemies[8].bullet.shown();

	if (!enemies[8].shown() && !(std::rand() % ENEMYSPAWNRATE)) {
		enemies[8].home();
	}

	if (enemies[8].shown() && !(std::rand() % BULLETSPAWNRATE)) {
		enemies[8].fire();
	}

	if (enemies[8].isColliding(you->Location.X, you->Location.Y, 48, 48)) {
		if (shieldOn) {
			enemies[8].hide();
			score += 5;
			score_value->Text = System::Convert::ToString(score);
		}
		else {
			gameover()
		}
	}

	if (enemies[8].bullet.isColliding(you->Location.X, you->Location.Y, 48, 48)) {
		if (shieldOn) {
			enemies[8].bullet.hide();
			if (ammo_bar->Value < ammo_bar->Maximum) ammo_bar->Value++;
		}
		else {
			gameover()
		}
	}

	enemies[9].incrY(ENEMYSPEED);
	Point point9(enemies[9].getX(), enemies[9].getY());
	Point point9b(enemies[9].bullet.getX(), enemies[9].bullet.getY());
	enemy9->Location = point9;
	enemy9->Visible = enemies[9].shown();
	enemyBullet9->Location = point9b;
	enemyBullet9->Visible = enemies[9].bullet.shown();

	if (!enemies[9].shown() && !(std::rand() % ENEMYSPAWNRATE)) {
		enemies[9].home();
	}

	if (enemies[9].shown() && !(std::rand() % BULLETSPAWNRATE)) {
		enemies[9].fire();
	}

	if (enemies[9].isColliding(you->Location.X, you->Location.Y, 48, 48)) {
		if (shieldOn) {
			enemies[9].hide();
			score += 5;
			score_value->Text = System::Convert::ToString(score);
		}
		else {
			gameover()
		}
	}

	if (enemies[9].bullet.isColliding(you->Location.X, you->Location.Y, 48, 48)) {
		if (shieldOn) {
			enemies[9].bullet.hide();
			if (ammo_bar->Value < ammo_bar->Maximum) ammo_bar->Value++;
		}
		else {
			gameover()
		}
	}
#pragma endregion
	int currentbullet = 0;
	//manage your bullets
	currentbullet = 0;
	youbullets[currentbullet].incrY(YOUBULLETSPEED);
	Point point0yb(youbullets[currentbullet].getX(), youbullets[currentbullet].getY());
	youBullet0->Location = point0yb;
	youBullet0->Visible = youbullets[currentbullet].shown();
	if (youbullets[currentbullet].shown()) for (int en = 0; en < 10; en++) {
		if (enemies[en].isColliding(youbullets[currentbullet].getX(), youbullets[currentbullet].getY(), 16, 16)) {
			youbullets[currentbullet].hide();
			enemies[en].hide();
			boomfx();
			score += 10;
			score_value->Text = System::Convert::ToString(score);
		}
	}

#pragma region extrabulletnumbers
	currentbullet = 1;
	youbullets[currentbullet].incrY(YOUBULLETSPEED);
	Point point1yb(youbullets[currentbullet].getX(), youbullets[currentbullet].getY());
	youBullet1->Location = point1yb;
	youBullet1->Visible = youbullets[currentbullet].shown();
	if (youbullets[currentbullet].shown()) for (int en = 0; en < 10; en++) {
		if (enemies[en].isColliding(youbullets[currentbullet].getX(), youbullets[currentbullet].getY(), 16, 16)) {
			youbullets[currentbullet].hide();
			enemies[en].hide();
			boomfx();
			score += 10;
			score_value->Text = System::Convert::ToString(score);
		}
	}
	currentbullet = 2;
	youbullets[currentbullet].incrY(YOUBULLETSPEED);
	Point point2yb(youbullets[currentbullet].getX(), youbullets[currentbullet].getY());
	youBullet2->Location = point2yb;
	youBullet2->Visible = youbullets[currentbullet].shown();
	if (youbullets[currentbullet].shown()) for (int en = 0; en < 10; en++) {
		if (enemies[en].isColliding(youbullets[currentbullet].getX(), youbullets[currentbullet].getY(), 16, 16)) {
			youbullets[currentbullet].hide();
			enemies[en].hide();
			boomfx();
			score += 10;
			score_value->Text = System::Convert::ToString(score);
		}
	}
	currentbullet = 3;
	youbullets[currentbullet].incrY(YOUBULLETSPEED);
	Point point3yb(youbullets[currentbullet].getX(), youbullets[currentbullet].getY());
	youBullet3->Location = point3yb;
	youBullet3->Visible = youbullets[currentbullet].shown();
	if (youbullets[currentbullet].shown()) for (int en = 0; en < 10; en++) {
		if (enemies[en].isColliding(youbullets[currentbullet].getX(), youbullets[currentbullet].getY(), 16, 16)) {
			youbullets[currentbullet].hide();
			enemies[en].hide();
			boomfx();
			score += 10;
			score_value->Text = System::Convert::ToString(score);
		}
	}
	currentbullet = 4;
	youbullets[currentbullet].incrY(YOUBULLETSPEED);
	Point point4yb(youbullets[currentbullet].getX(), youbullets[currentbullet].getY());
	youBullet4->Location = point4yb;
	youBullet4->Visible = youbullets[currentbullet].shown();
	if (youbullets[currentbullet].shown()) for (int en = 0; en < 10; en++) {
		if (enemies[en].isColliding(youbullets[currentbullet].getX(), youbullets[currentbullet].getY(), 16, 16)) {
			youbullets[currentbullet].hide();
			enemies[en].hide();
			boomfx();
			score += 10;
			score_value->Text = System::Convert::ToString(score);
		}
	}
	currentbullet = 5;
	youbullets[currentbullet].incrY(YOUBULLETSPEED);
	Point point5yb(youbullets[currentbullet].getX(), youbullets[currentbullet].getY());
	youBullet5->Location = point5yb;
	youBullet5->Visible = youbullets[currentbullet].shown();
	if (youbullets[currentbullet].shown()) for (int en = 0; en < 10; en++) {
		if (enemies[en].isColliding(youbullets[currentbullet].getX(), youbullets[currentbullet].getY(), 16, 16)) {
			youbullets[currentbullet].hide();
			enemies[en].hide();
			boomfx();
			score += 10;
			score_value->Text = System::Convert::ToString(score);
		}
	}
	currentbullet = 6;
	youbullets[currentbullet].incrY(YOUBULLETSPEED);
	Point point6yb(youbullets[currentbullet].getX(), youbullets[currentbullet].getY());
	youBullet6->Location = point6yb;
	youBullet6->Visible = youbullets[currentbullet].shown();
	if (youbullets[currentbullet].shown()) for (int en = 0; en < 10; en++) {
		if (enemies[en].isColliding(youbullets[currentbullet].getX(), youbullets[currentbullet].getY(), 16, 16)) {
			youbullets[currentbullet].hide();
			enemies[en].hide();
			boomfx();
			score += 10;
			score_value->Text = System::Convert::ToString(score);
		}
	}
	currentbullet = 7;
	youbullets[currentbullet].incrY(YOUBULLETSPEED);
	Point point7yb(youbullets[currentbullet].getX(), youbullets[currentbullet].getY());
	youBullet7->Location = point7yb;
	youBullet7->Visible = youbullets[currentbullet].shown();
	if (youbullets[currentbullet].shown()) for (int en = 0; en < 10; en++) {
		if (enemies[en].isColliding(youbullets[currentbullet].getX(), youbullets[currentbullet].getY(), 16, 16)) {
			youbullets[currentbullet].hide();
			enemies[en].hide();
			boomfx();
			score += 10;
			score_value->Text = System::Convert::ToString(score);
		}
	}
	currentbullet = 8;
	youbullets[currentbullet].incrY(YOUBULLETSPEED);
	Point point8yb(youbullets[currentbullet].getX(), youbullets[currentbullet].getY());
	youBullet8->Location = point8yb;
	youBullet8->Visible = youbullets[currentbullet].shown();
	if (youbullets[currentbullet].shown()) for (int en = 0; en < 10; en++) {
		if (enemies[en].isColliding(youbullets[currentbullet].getX(), youbullets[currentbullet].getY(), 16, 16)) {
			youbullets[currentbullet].hide();
			enemies[en].hide();
			boomfx();
			score += 10;
			score_value->Text = System::Convert::ToString(score);
		}
	}
	currentbullet = 9;
	youbullets[currentbullet].incrY(YOUBULLETSPEED);
	Point point9yb(youbullets[currentbullet].getX(), youbullets[currentbullet].getY());
	youBullet9->Location = point9yb;
	youBullet9->Visible = youbullets[currentbullet].shown();
	if (youbullets[currentbullet].shown()) for (int en = 0; en < 10; en++) {
		if (enemies[en].isColliding(youbullets[currentbullet].getX(), youbullets[currentbullet].getY(), 16, 16)) {
			youbullets[currentbullet].hide();
			enemies[en].hide();
			boomfx();
			score += 10;
			score_value->Text = System::Convert::ToString(score);
		}
	}
#pragma endregion

}
private: System::Void game_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == 87) {System::Object^ sender; System::EventArgs^ e; fire_button_Click(sender, e); }
	if (e->KeyValue == 83) {System::Object^ sender; System::EventArgs^ e; shield_button_Click(sender, e); }
	if (e->KeyValue == 65) { leftkeydown = true; rightkeydown = false; }
	if (e->KeyValue == 68) { leftkeydown = false; rightkeydown = true; }
}
private: System::Void fire_button_Click(System::Object^ sender, System::EventArgs^ e) {
	if (ammo_bar->Value >= 1) {
		--ammo_bar->Value;
		youbullets[currentBullet].home(you->Location.X, you->Location.Y);
		if (++currentBullet == 10) {
			currentBullet = 0;
		}
	}
}
private: System::Void location_slide_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == 65) { leftkeydown = false; rightkeydown = false; }
	if (e->KeyValue == 68) { leftkeydown = false; rightkeydown = false; }
}
};
}