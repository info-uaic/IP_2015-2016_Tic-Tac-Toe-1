#pragma once

#include "MyForm1.h";
#include "MyForm2.h";
#include "TROL.h";
#include <Windows.h>
#include <mmsystem.h>
#include <stdlib.h>
#include <vector>


namespace Tic_Tac_Toe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		bool turn = true; // true=X turn; false=0 turn;
		bool easy = false, AIfirst = false, hard = false, impossible = false;
		bool against_AI = false;
		bool ok = false;
		bool trolAI = false;
		static String ^player1, ^player2;
		bool MMgameWinHuman = false, MMgameWinAI = false;
		int posmin, posmax;







	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  newGameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  AIfirstlayerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  easyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  hardToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  iMPOSIBRUUToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  multiplayerToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  xWinCount;


	private: System::Windows::Forms::Label^  oWinCount;
	private: System::Windows::Forms::ToolStripMenuItem^  tROLOLOLOLOLOLOLOLOToolStripMenuItem;
	private: System::Windows::Forms::Label^  DrawCount;





			 int turn_count = 0;

	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:






	private: System::Windows::Forms::Button^  A1;
	private: System::Windows::Forms::Button^  A2;
	private: System::Windows::Forms::Button^  A3;
	private: System::Windows::Forms::Button^  B3;
	private: System::Windows::Forms::Button^  B2;
	private: System::Windows::Forms::Button^  B1;
	private: System::Windows::Forms::Button^  C3;
	private: System::Windows::Forms::Button^  C2;
	private: System::Windows::Forms::Button^  C1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->A1 = (gcnew System::Windows::Forms::Button());
			this->A2 = (gcnew System::Windows::Forms::Button());
			this->A3 = (gcnew System::Windows::Forms::Button());
			this->B3 = (gcnew System::Windows::Forms::Button());
			this->B2 = (gcnew System::Windows::Forms::Button());
			this->B1 = (gcnew System::Windows::Forms::Button());
			this->C3 = (gcnew System::Windows::Forms::Button());
			this->C2 = (gcnew System::Windows::Forms::Button());
			this->C1 = (gcnew System::Windows::Forms::Button());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newGameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->AIfirstlayerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->easyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hardToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->iMPOSIBRUUToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tROLOLOLOLOLOLOLOLOToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->multiplayerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->xWinCount = (gcnew System::Windows::Forms::Label());
			this->oWinCount = (gcnew System::Windows::Forms::Label());
			this->DrawCount = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// A1
			// 
			this->A1->Enabled = false;
			this->A1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->A1->Location = System::Drawing::Point(98, 132);
			this->A1->Name = L"A1";
			this->A1->Size = System::Drawing::Size(79, 76);
			this->A1->TabIndex = 1;
			this->A1->Text = L"T";
			this->A1->UseVisualStyleBackColor = true;
			this->A1->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			this->A1->MouseEnter += gcnew System::EventHandler(this, &MyForm::button_enter);
			this->A1->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_leave);
			// 
			// A2
			// 
			this->A2->Enabled = false;
			this->A2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->A2->Location = System::Drawing::Point(183, 132);
			this->A2->Name = L"A2";
			this->A2->Size = System::Drawing::Size(79, 76);
			this->A2->TabIndex = 2;
			this->A2->Text = L"I";
			this->A2->UseVisualStyleBackColor = true;
			this->A2->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			this->A2->MouseEnter += gcnew System::EventHandler(this, &MyForm::button_enter);
			this->A2->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_leave);
			// 
			// A3
			// 
			this->A3->Enabled = false;
			this->A3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->A3->Location = System::Drawing::Point(268, 132);
			this->A3->Name = L"A3";
			this->A3->Size = System::Drawing::Size(79, 76);
			this->A3->TabIndex = 3;
			this->A3->Text = L"C";
			this->A3->UseVisualStyleBackColor = true;
			this->A3->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			this->A3->MouseEnter += gcnew System::EventHandler(this, &MyForm::button_enter);
			this->A3->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_leave);
			// 
			// B3
			// 
			this->B3->Enabled = false;
			this->B3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B3->Location = System::Drawing::Point(268, 214);
			this->B3->Name = L"B3";
			this->B3->Size = System::Drawing::Size(79, 76);
			this->B3->TabIndex = 6;
			this->B3->Text = L"C";
			this->B3->UseVisualStyleBackColor = true;
			this->B3->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			this->B3->MouseEnter += gcnew System::EventHandler(this, &MyForm::button_enter);
			this->B3->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_leave);
			// 
			// B2
			// 
			this->B2->Enabled = false;
			this->B2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B2->Location = System::Drawing::Point(183, 214);
			this->B2->Name = L"B2";
			this->B2->Size = System::Drawing::Size(79, 76);
			this->B2->TabIndex = 5;
			this->B2->Text = L"A";
			this->B2->UseVisualStyleBackColor = true;
			this->B2->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			this->B2->MouseEnter += gcnew System::EventHandler(this, &MyForm::button_enter);
			this->B2->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_leave);
			// 
			// B1
			// 
			this->B1->Enabled = false;
			this->B1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B1->Location = System::Drawing::Point(98, 214);
			this->B1->Name = L"B1";
			this->B1->Size = System::Drawing::Size(79, 76);
			this->B1->TabIndex = 4;
			this->B1->Text = L"T";
			this->B1->UseVisualStyleBackColor = true;
			this->B1->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			this->B1->MouseEnter += gcnew System::EventHandler(this, &MyForm::button_enter);
			this->B1->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_leave);
			// 
			// C3
			// 
			this->C3->Enabled = false;
			this->C3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->C3->Location = System::Drawing::Point(268, 296);
			this->C3->Name = L"C3";
			this->C3->Size = System::Drawing::Size(79, 76);
			this->C3->TabIndex = 9;
			this->C3->Text = L"E";
			this->C3->UseVisualStyleBackColor = true;
			this->C3->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			this->C3->MouseEnter += gcnew System::EventHandler(this, &MyForm::button_enter);
			this->C3->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_leave);
			// 
			// C2
			// 
			this->C2->Enabled = false;
			this->C2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->C2->Location = System::Drawing::Point(183, 296);
			this->C2->Name = L"C2";
			this->C2->Size = System::Drawing::Size(79, 76);
			this->C2->TabIndex = 8;
			this->C2->Text = L"O";
			this->C2->UseVisualStyleBackColor = true;
			this->C2->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			this->C2->MouseEnter += gcnew System::EventHandler(this, &MyForm::button_enter);
			this->C2->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_leave);
			// 
			// C1
			// 
			this->C1->Enabled = false;
			this->C1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->C1->Location = System::Drawing::Point(98, 296);
			this->C1->Name = L"C1";
			this->C1->Size = System::Drawing::Size(79, 76);
			this->C1->TabIndex = 7;
			this->C1->Text = L"T";
			this->C1->UseVisualStyleBackColor = true;
			this->C1->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			this->C1->MouseEnter += gcnew System::EventHandler(this, &MyForm::button_enter);
			this->C1->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_leave);
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->newGameToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(44, 24);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// newGameToolStripMenuItem
			// 
			this->newGameToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->AIfirstlayerToolStripMenuItem,
					this->multiplayerToolStripMenuItem
			});
			this->newGameToolStripMenuItem->Name = L"newGameToolStripMenuItem";
			this->newGameToolStripMenuItem->Size = System::Drawing::Size(157, 26);
			this->newGameToolStripMenuItem->Text = L"New Game";
			this->newGameToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::newGameToolStripMenuItem_Click);
			// 
			// AIfirstlayerToolStripMenuItem
			// 
			this->AIfirstlayerToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->easyToolStripMenuItem,
					this->hardToolStripMenuItem, this->iMPOSIBRUUToolStripMenuItem, this->tROLOLOLOLOLOLOLOLOToolStripMenuItem
			});
			this->AIfirstlayerToolStripMenuItem->Name = L"AIfirstlayerToolStripMenuItem";
			this->AIfirstlayerToolStripMenuItem->Size = System::Drawing::Size(169, 26);
			this->AIfirstlayerToolStripMenuItem->Text = L"Single Player";
			// 
			// easyToolStripMenuItem
			// 
			this->easyToolStripMenuItem->Name = L"easyToolStripMenuItem";
			this->easyToolStripMenuItem->Size = System::Drawing::Size(178, 26);
			this->easyToolStripMenuItem->Text = L"Easy";
			this->easyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::easyToolStripMenuItem_Click);
			// 
			// hardToolStripMenuItem
			// 
			this->hardToolStripMenuItem->Name = L"hardToolStripMenuItem";
			this->hardToolStripMenuItem->Size = System::Drawing::Size(178, 26);
			this->hardToolStripMenuItem->Text = L"Hard";
			this->hardToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::hardToolStripMenuItem_Click);
			// 
			// iMPOSIBRUUToolStripMenuItem
			// 
			this->iMPOSIBRUUToolStripMenuItem->Name = L"iMPOSIBRUUToolStripMenuItem";
			this->iMPOSIBRUUToolStripMenuItem->Size = System::Drawing::Size(178, 26);
			this->iMPOSIBRUUToolStripMenuItem->Text = L"IMPOSIBRUU !";
			this->iMPOSIBRUUToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::iMPOSIBRUUToolStripMenuItem_Click);
			// 
			// tROLOLOLOLOLOLOLOLOToolStripMenuItem
			// 
			this->tROLOLOLOLOLOLOLOLOToolStripMenuItem->Name = L"tROLOLOLOLOLOLOLOLOToolStripMenuItem";
			this->tROLOLOLOLOLOLOLOLOToolStripMenuItem->Size = System::Drawing::Size(178, 26);
			this->tROLOLOLOLOLOLOLOLOToolStripMenuItem->Text = L"TROLOLOLOL";
			this->tROLOLOLOLOLOLOLOLOToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::tROLOLOLOLOLOLOLOLOToolStripMenuItem_Click);
			// 
			// multiplayerToolStripMenuItem
			// 
			this->multiplayerToolStripMenuItem->Name = L"multiplayerToolStripMenuItem";
			this->multiplayerToolStripMenuItem->Size = System::Drawing::Size(169, 26);
			this->multiplayerToolStripMenuItem->Text = L"Multiplayer";
			this->multiplayerToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::multiplayerToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(157, 26);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutToolStripMenuItem });
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(53, 24);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(125, 26);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aboutToolStripMenuItem_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(443, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(172, 384);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 35);
			this->button1->TabIndex = 10;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(53, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 17);
			this->label1->TabIndex = 11;
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(170, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 17);
			this->label2->TabIndex = 12;
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(287, 51);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 17);
			this->label3->TabIndex = 13;
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// xWinCount
			// 
			this->xWinCount->AutoSize = true;
			this->xWinCount->Location = System::Drawing::Point(98, 77);
			this->xWinCount->Name = L"xWinCount";
			this->xWinCount->Size = System::Drawing::Size(12, 17);
			this->xWinCount->TabIndex = 14;
			this->xWinCount->Text = L" ";
			// 
			// oWinCount
			// 
			this->oWinCount->AutoSize = true;
			this->oWinCount->Location = System::Drawing::Point(330, 77);
			this->oWinCount->Name = L"oWinCount";
			this->oWinCount->Size = System::Drawing::Size(12, 17);
			this->oWinCount->TabIndex = 16;
			this->oWinCount->Text = L" ";
			// 
			// DrawCount
			// 
			this->DrawCount->AutoSize = true;
			this->DrawCount->Location = System::Drawing::Point(218, 77);
			this->DrawCount->Name = L"DrawCount";
			this->DrawCount->Size = System::Drawing::Size(0, 17);
			this->DrawCount->TabIndex = 17;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(443, 428);
			this->Controls->Add(this->DrawCount);
			this->Controls->Add(this->oWinCount);
			this->Controls->Add(this->xWinCount);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->C3);
			this->Controls->Add(this->C2);
			this->Controls->Add(this->C1);
			this->Controls->Add(this->B3);
			this->Controls->Add(this->B2);
			this->Controls->Add(this->B1);
			this->Controls->Add(this->A3);
			this->Controls->Add(this->A2);
			this->Controls->Add(this->A1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Tic Tac Toe";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("Tic-tac-toe (also known as Noughts and crosses or Xs and Os) is a paper-and-pencil game for two players, X and O, who take turns marking the spaces in a 3×3 grid.\nThe player who succeeds in placing three of their marks in a horizontal, vertical, or diagonal row wins the game.\n\nGame Developed by Razvan Nica\n", "Tic Tac Toe About");
	}

	private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}

	private: System::Void button_click(System::Object^  sender, System::EventArgs^  e) 
	{
		Button^ b = safe_cast<Button^>(sender);

		if (trolAI)
		{
			b->Text = "X";
			b->Enabled = false;
			AItrol(sender, e);
		}
		else
			if (!ok)
			{
				if (turn)
					b->Text = "X";
				else
					b->Text = "O";
				turn = !turn;
				b->Enabled = false;
				turn_count++;
				checkForWinner();
				if (against_AI && !ok && turn_count!=9)
				{
					if (easy)
						if (turn)
							AIrandomMove("X");
						else
							AIrandomMove("O");
					if (hard)
						if (turn)
							AIHardMove("X");
						else
							AIHardMove("O");
					if (impossible)
					{
						if (turn)
							AIimposibru("X");
						else
							AIimposibru("O");
					}
					turn = !turn;
					turn_count++;
					checkForWinner();
				}
			}
	}

	private: System::Void disableButtons()
	{
		for each (Control ^c in Controls)
		{
			try
			{
				Button^ b = safe_cast<Button^>(c);
				if (b->Text != "Start Again")
					b->Enabled = false;
			}
			catch (...) {}
		}
	}

	private: System::Void enableButtons()
	{
		for each (Control ^c in Controls)
		{
			try
			{
				Button^ b = safe_cast<Button^>(c);
				b->Enabled = true;
			}
			catch (...) {}
		}
		A1->Text = "";
		A2->Text = "";
		A3->Text = "";
		B1->Text = "";
		B2->Text = "";
		B3->Text = "";
		C1->Text = "";
		C2->Text = "";
		C3->Text = "";
		button1->Text = "Start Again";

	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		ok = false;
		turn = true;
		turn_count = 0;
		for each (Control ^c in Controls)
		{
			try
			{
				Button^ b = safe_cast<Button^>(c);
				if (b->Text != "Start Again")
				{
					b->Enabled = true;
					b->Text = "";
				}
			}
			catch (...) {}
		}
		if (against_AI && AIfirst)
		{
			if (easy)
				AIrandomMove("X");
			if (hard)
				AIHardMove("X");
			if (impossible)
				AIimposibru("X");
			turn = !turn;
			turn_count++;
		}
	}

	private: System::Void multiplayerToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		button1_Click(sender, e);
		MyForm1 ^form2 = gcnew MyForm1();
		form2->ShowDialog();
		player1 = MyForm1::setPlayer1Name();
		player2 = MyForm1::setPlayer2Name();
		int randomNumber = rand() % 10;
		if (randomNumber >= 5)
		{
			String ^aux;
			aux = player1;
			player1 = player2;
			player2 = aux;
		}
		MessageBox::Show(player1 + " goes first");
		label1->Text = player1 + " wins";
		label3->Text = player2 + " wins";
		label2->Text = "Draw counter";
		xWinCount->Text = "0";
		DrawCount->Text = "0";
		oWinCount->Text = "0";
		enableButtons();
	}

	private: System::Void checkForWinner()
	{
		bool existsWinner = false;
		String ^player1, ^player2;
		// Horizontal checks
		if (A1->Text == A2->Text && A2->Text == A3->Text && !A1->Enabled)
			existsWinner = true;
		if (B1->Text == B2->Text && B2->Text == B3->Text && !B1->Enabled)
			existsWinner = true;
		if (C1->Text == C2->Text && C2->Text == C3->Text && !C1->Enabled)
			existsWinner = true;
		// Vertical checks
		if (A1->Text == B1->Text && B1->Text == C1->Text && !A1->Enabled)
			existsWinner = true;
		if (A2->Text == B2->Text && B2->Text == C2->Text && !A2->Enabled)
			existsWinner = true;
		if (A3->Text == B3->Text && B3->Text == C3->Text && !A3->Enabled)
			existsWinner = true;
		// Diagonal checks
		if (A1->Text == B2->Text && B2->Text == C3->Text && !A1->Enabled)
			existsWinner = true;
		if (A3->Text == B2->Text && B2->Text == C1->Text && !A3->Enabled)
			existsWinner = true;

		if (existsWinner)
		{
			ok = true;
			disableButtons();
			String^ winner = "";
			if (turn)
			{
				winner = MyForm::player2;
				oWinCount->Text = (Int32::Parse(oWinCount->Text) + 1).ToString();
			}
			else
			{
				winner = MyForm::player1;
				xWinCount->Text = (Int32::Parse(xWinCount->Text) + 1).ToString();
			}
			MessageBox::Show(winner + " wins !!", "Yaay");
		}
		else
			if (turn_count == 9)
			{
				MessageBox::Show("There is no winner\n\nDRAW!", "Uhh..");
				int x = Int32::Parse(DrawCount->Text) + 1;
	//			DrawCount->Text = (Int32::Parse(DrawCount->Text) + 1).ToString();
				String ^aux = x.ToString();
				DrawCount->Text = aux;
				int i=0;
			}
	}

	private: System::Void button_enter(System::Object^  sender, System::EventArgs^  e) {
		Button^ b = safe_cast<Button^>(sender);
		if (b->Enabled)
		{
			if (turn)
				b->Text = "X";
			else
				b->Text = "O";
		}
	}

	private: System::Void button_leave(System::Object^  sender, System::EventArgs^  e) {
		Button^ b = safe_cast<Button^>(sender);
		if (b->Enabled)
		{
			b->Text = "";
		}
	}

	private: System::Void playAgainstAI(System::Object^  sender, System::EventArgs^  e)
	{
		button1_Click(sender, e);
		MyForm2 ^form4 = gcnew MyForm2();
		form4->ShowDialog();
		player1 = MyForm2::setPlayerName();
		player2 = "Computer";
	}

	private: System::Void whoGoesFirst()
	{
		int randomNumber = rand() % 10;
		if (randomNumber >= 5)
		{
			String ^aux;
			aux = player1;
			player1 = player2;
			player2 = aux;
			if (against_AI)
			{
				AIfirst = !AIfirst;
				if (AIfirst)
				{
					if (easy)
						AIrandomMove("X");
					if (hard)
						AIHardMove("X");
					if (impossible)
						AIimposibru("X");
					turn_count++;
					turn = !turn;
				}
			}
		}
		MessageBox::Show(player1 + " goes first");
	}

private: System::Void AIrandomMove(String ^s)
{
	String ^w, ^move = "";
	if (s == "X")
	{
		w = "O";
	}
	else
		w = "X";
	move = WinOrBlock(s);
	if (move == "")
	{
		move = WinOrBlock(w);
		if (move == "")
		{
			int randomMove = rand() % 10;
			bool ok_random = true;
			while (ok_random)
			{
				if (randomMove == 1)
				{
					if (A1->Enabled)
					{
						A1->Text = s;
						A1->Enabled = false;
						ok_random = false;
					}
					else
						randomMove = rand() % 10;
				}
				else
					if (randomMove == 2)
					{
						if (A2->Enabled)
						{
							A2->Text = s;
							A2->Enabled = false;
							ok_random = false;
						}
						else
							randomMove = rand() % 10;
					}
					else
						if (randomMove == 3)
						{
							if (A3->Enabled)
							{
								A3->Text = s;
								A3->Enabled = false;
								ok_random = false;
							}
							else
								randomMove = rand() % 10;
						}
						else
							if (randomMove == 4)
							{
								if (B1->Enabled)
								{
									B1->Text = s;
									B1->Enabled = false;
									ok_random = false;
								}
								else
									randomMove = rand() % 10;
							}
							else
								if (randomMove == 5)
								{
									if (B2->Enabled)
									{
										B2->Text = s;
										B2->Enabled = false;
										ok_random = false;
									}
									else
										randomMove = rand() % 10;
								}
								else
									if (randomMove == 6)
									{
										if (B3->Enabled)
										{
											B3->Text = s;
											B3->Enabled = false;
											ok_random = false;
										}
										else
											randomMove = rand() % 10;
									}
									else
										if (randomMove == 7)
										{
											if (C1->Enabled)
											{
												C1->Text = s;
												C1->Enabled = false;
												ok_random = false;
											}
											else
												randomMove = rand() % 10;
										}
										else
											if (randomMove == 8)
											{
												if (C2->Enabled)
												{
													C2->Text = s;
													C2->Enabled = false;
													ok_random = false;
												}
												else
													randomMove = rand() % 10;
											}
											else
												if (randomMove == 9)
												{
													if (C3->Enabled)
													{
														C3->Text = s;
														C3->Enabled = false;
														ok_random = false;
													}
													else
														randomMove = rand() % 10;
												}
												else
													randomMove = rand() % 10;
			}
		}
		else
			makeMove(move,s);
	}
	else
		makeMove(move,s);
}

private: System::Void makeMove(String ^move,String ^s)
{
	if (move == "A1")
	{
		A1->Text = s;
		A1->Enabled = false;
	}
	if (move == "A2")
	{
		A2->Text = s;
		A2->Enabled = false;
	}
	if (move == "A3")
	{
		A3->Text = s;
		A3->Enabled = false;
	}
	if (move == "B1")
	{
		B1->Text = s;
		B1->Enabled = false;
	}
	if (move == "B2")
	{
		B2->Text = s;
		B2->Enabled = false;
	}
	if (move == "B3")
	{
		B3->Text = s;
		B3->Enabled = false;
	}
	if (move == "C1")
	{
		C1->Text = s;
		C1->Enabled = false;
	}
	if (move == "C2")
	{
		C2->Text = s;
		C2->Enabled = false;
	}
	if (move == "C3")
	{
		C3->Text = s;
		C3->Enabled = false;
	}
}

private: System::Void AIHardMove(String ^ s)
{
	
	String ^w,^move="";
	bool AImoved = false;
	if (s == "X")
		w = "O";
	else
		w = "X";
	move = WinOrBlock(s);
	if (move=="")
	{
		move = WinOrBlock(w);
		if (move=="")
		{
			move = LookForCorner(s);
			if (move=="")
			{
				AImoved = true;
				AIrandomMove(s);
			}
		}
	}
	if (!AImoved)
	{
		if (move == "A1")
		{
			A1->Text = s;
			A1->Enabled = false;
		}
		if (move == "A2")
		{
			A2->Text = s;
			A2->Enabled = false;
		}
		if (move == "A3")
		{
			A3->Text = s;
			A3->Enabled = false;
		}
		if (move == "B1")
		{
			B1->Text = s;
			B1->Enabled = false;
		}
		if (move == "B2")
		{
			B2->Text = s;
			B2->Enabled = false;
		}
		if (move == "B3")
		{
			B3->Text = s;
			B3->Enabled = false;
		}
		if (move == "C1")
		{
			C1->Text = s;
			C1->Enabled = false;
		}
		if (move == "C2")
		{
			C2->Text = s;
			C2->Enabled = false;
		}
		if (move == "C3")
		{
			C3->Text = s;
			C3->Enabled = false;
		}
	}
}

private: System::String ^LookForCorner(String^ s)
 {
	String ^move;
	if (A1->Text == s)
			 {
				 if (A3->Text == "")
				 {
					 move = "A3";
					 return move;
				 }
				 if (C3->Text == "")
				 {
					 move = "C3";
					 return move;
				 }
				 if (C1->Text == "")
				 {
					 move = "C1";
					 return move;
				 }
			 }

	if (A3->Text == s)
			 {
				 if (A1->Text == "")
				 {
					 move = "A1";
					 return move;
				 }
				 if (C3->Text == "")
				 {
					 move = "C3";
					 return move;
				 }
				 if (C1->Text == "")
				 {
					 move = "C1";
					 return move;
				 }
			 }

	if (C3->Text == s)
			 {
				 if (A1->Text == "")
				 {
					 move = "A1";
					 return move;
				 }
				 if (A3->Text == "")
				 {
					 move = "A3";
					 return move;
				 }
				 if (C1->Text == "")
				 {
					 move = "C1";
					 return move;
				 }
			 }

	if (C1->Text == s)
			 {
				 if (A1->Text == "")
				 {
					 move = "A1";
					 return move;
				 }
				 if (A3->Text == "")
				 {
					 move = "A3";
					 return move;
				 }
				 if (C3->Text == "")
				 {
					 move = "C3";
					 return move;
				 }
			 }

	if (A1->Text == "")
			 {
				 move = "A1";
				 return move;
			 }
	if (A3->Text == "")
			 {
				 move = "A3";
				 return move;
			 }
	if (C1->Text == "")
			 {
				 move = "C1";
				 return move;
			 }
	if (C3->Text == "")
			 {
				 move = "C3";
				 return move;
			 }

	return "";
}

private: System::String ^WinOrBlock(String^ mark)
		 {
			 //HORIZONTAL TESTS
			 if ((A1->Text == mark) && (A2->Text == mark) && (A3->Text == ""))
				 return "A3";
			 if ((A2->Text == mark) && (A3->Text == mark) && (A1->Text == ""))
				 return "A1";
			 if ((A1->Text == mark) && (A3->Text == mark) && (A2->Text == ""))
				 return "A2";

			 if ((B1->Text == mark) && (B2->Text == mark) && (B3->Text == ""))
				 return "B3";
			 if ((B2->Text == mark) && (B3->Text == mark) && (B1->Text == ""))
				 return "B1";
			 if ((B1->Text == mark) && (B3->Text == mark) && (B2->Text == ""))
				 return "B2";

			 if ((C1->Text == mark) && (C2->Text == mark) && (C3->Text == ""))
				 return "C3";
			 if ((C2->Text == mark) && (C3->Text == mark) && (C1->Text == ""))
				 return "C1";
			 if ((C1->Text == mark) && (C3->Text == mark) && (C2->Text == ""))
				 return "C2";

			 //VERTICAL TESTS
			 if ((A1->Text == mark) && (B1->Text == mark) && (C1->Text == ""))
				 return "C1";
			 if ((B1->Text == mark) && (C1->Text == mark) && (A1->Text == ""))
				 return "A1";
			 if ((A1->Text == mark) && (C1->Text == mark) && (B1->Text == ""))
				 return "B1";

			 if ((A2->Text == mark) && (B2->Text == mark) && (C2->Text == ""))
				 return "C2";
			 if ((B2->Text == mark) && (C2->Text == mark) && (A2->Text == ""))
				 return "A2";
			 if ((A2->Text == mark) && (C2->Text == mark) && (B2->Text == ""))
				 return "B2";

			 if ((A3->Text == mark) && (B3->Text == mark) && (C3->Text == ""))
				 return "C3";
			 if ((B3->Text == mark) && (C3->Text == mark) && (A3->Text == ""))
				 return "A3";
			 if ((A3->Text == mark) && (C3->Text == mark) && (B3->Text == ""))
				 return "B3";

			 //DIAGONAL TESTS
			 if ((A1->Text == mark) && (B2->Text == mark) && (C3->Text == ""))
				 return "C3";
			 if ((B2->Text == mark) && (C3->Text == mark) && (A1->Text == ""))
				 return "A1";
			 if ((A1->Text == mark) && (C3->Text == mark) && (B2->Text == ""))
				 return "B2";

			 if ((A3->Text == mark) && (B2->Text == mark) && (C1->Text == ""))
				 return "C1";
			 if ((B2->Text == mark) && (C1->Text == mark) && (A3->Text == ""))
				 return "A3";
			 if ((A3->Text == mark) && (C1->Text == mark) && (B2->Text == ""))
				 return "B2";

			 return "";
		 }

private: System::String ^ LookForSide(String ^s)
{
	if (A2->Enabled)
		return "A2";
	if (B1->Enabled)
		return "B1";
	if (B3->Enabled)
		return "B3";
	if (C2->Enabled)
		return "C2";
	return LookForCorner(s);
}

private: System::String ^ IFcorner(String ^s)
{
	if (( (A1->Text == s && !A1->Enabled)  || 
	 	  (C1->Text == s && !C1->Enabled)  || 
	   	  (A3->Text == s && !A3->Enabled)  || 
		  (C3->Text == s && !C3->Enabled)) && B2->Enabled)
		return "B2";
	return "";
}

private: System::String ^ IFcenter(String ^s)
{
	if (B2->Text == s && !B2->Enabled)
		return LookForCorner(s);
	return "";
}

private: System::String ^ IFside(String ^s)
{
	if (A2->Text == s && !A2->Enabled)
	{
		if (A1->Enabled)
			return "A1";
		if (A3->Enabled)
			return "A3";
	}
	if (C2->Text == s && !C2->Enabled)
	{
		if (C3->Enabled)
			return "C3";
		if (C1->Enabled)
			return "C1";
	}
	if (B1->Text == s && !B1->Enabled)
	{
		if (A1->Enabled)
			return "A1";
		if (C1->Enabled)
			return "C1";
	}
	if (B3->Text == s && !B3->Enabled)
	{
		if (C3->Enabled)
			return "C3";
		if (A3->Enabled)
			return "A3";
	}
	return "";
}

private: System::String ^ IFsideMoved(String ^w, String ^s)
{
	if ( ((A1->Text == s && !A1->Enabled && A2->Text == w && !A2->Enabled && C1->Text == w && !C1->Enabled) ||
		 (A3->Text == s && !A3->Enabled && A2->Text == w && !A2->Enabled && C3->Text == w && !C3->Enabled) ) && C2->Enabled)
		return "C2";
	if ( ((C1->Text == s && !C1->Enabled && C2->Text == w && !C2->Enabled && A1->Text == w && !A1->Enabled) ||
		 (C3->Text == s && !C3->Enabled && C2->Text == w && !C2->Enabled && A3->Text == w && !A3->Enabled) ) && A2->Enabled)
		return "A2";
	if ( ((C1->Text == s && !C1->Enabled && B1->Text == w && !B1->Enabled && C3->Text == w && !C3->Enabled) ||
		 (A1->Text == s && !A1->Enabled && B1->Text == w && !B1->Enabled && A3->Text == w && !A3->Enabled) ) && B3->Enabled)
		return "B3";
	if ( ((C3->Text == s && !C3->Enabled && B3->Text == w && !B3->Enabled && C1->Text == w && !C1->Enabled) ||
		(A3->Text == s && !A3->Enabled && B3->Text == w && !B3->Enabled && A1->Text == w && !A1->Enabled) ) && B1->Enabled)
		return "B1";
	return "";
}

private: System::String ^ XOX(String ^w,String^s)
{
	if ( ((A1->Text == w && !A1->Enabled) && (C3->Text == w && !C3->Enabled) && (B2->Text == s && !B2->Enabled)) ||
		 ((A3->Text == w && !A3->Enabled) && (C1->Text == w && !C1->Enabled) && (B2->Text == s && !B2->Enabled)) )
		return LookForSide(s);
	return "";
}

private: System::Void AIimposibru(String ^ s)
{
	String ^w, ^move = "";
	bool AImoved = false;
	if (s == "X")
	{
		w = "O";
		AIHardMove("X");
	}
	else
	{
		w = "X";
		move = WinOrBlock(s); // if there is a chance to win, WIN! else :
		if (move == "")
		{
			move = WinOrBlock(w); // if there is a chance to block, Block! else:
			if (move == "")
			{
				move = XOX(w,s); // check diagonal technique
				if (move == "")
				{
					move = IFcorner(w); // check corner technique
					if (move == "")
					{
						move = IFcenter(w); // check center technique
						if (move == "")
						{
							move = IFside(w); // check side technique
							if (move == "")
							{
								move = IFsideMoved(w, s); // check side technique furthermore
								if (move == "")
								{
									AImoved = true;
									AIHardMove(s); //
								}
							}
						}
					}
				}
			}
		}
		if (!AImoved)
		{
			if (move == "A1")
			{
				A1->Text = s;
				A1->Enabled = false;
			}
			if (move == "A2")
			{
				A2->Text = s;
				A2->Enabled = false;
			}
			if (move == "A3")
			{
				A3->Text = s;
				A3->Enabled = false;
			}
			if (move == "B1")
			{
				B1->Text = s;
				B1->Enabled = false;
			}
			if (move == "B2")
			{
				B2->Text = s;
				B2->Enabled = false;
			}
			if (move == "B3")
			{
				B3->Text = s;
				B3->Enabled = false;
			}
			if (move == "C1")
			{
				C1->Text = s;
				C1->Enabled = false;
			}
			if (move == "C2")
			{
				C2->Text = s;
				C2->Enabled = false;
			}
			if (move == "C3")
			{
				C3->Text = s;
				C3->Enabled = false;
			}
		}
	}
}

private: System::Void AItrol(System::Object^  sender, System::EventArgs^  e)
{
	if (!A1->Enabled || !A2->Enabled || !A2->Enabled)
	{
		B1->Text = "O";
		B1->Enabled = false;
		B2->Text = "O";
		B2->Enabled = false;
		B3->Text = "O";
		B3->Enabled = false;
	}
	else
		if (!C1->Enabled || !C2->Enabled || !C3->Enabled)
		{
			B1->Text = "O";
			B1->Enabled = false;
			B2->Text = "O";
			B2->Enabled = false;
			B3->Text = "O";
			B3->Enabled = false;
		}
		else
		{
			C1->Text = "O";
			C1->Enabled = false;
			C2->Text = "O";
			C2->Enabled = false;
			C3->Text = "O";
			C3->Enabled = false;
		}
	disableButtons();
	TROL ^form6 = gcnew TROL();
	PlaySound(TEXT("Mixdown.wav"), NULL, SND_ASYNC);
	form6->ShowDialog();
	PlaySound(TEXT("MyAppSound"), NULL, SND_APPLICATION);
}

private: System::Void easyToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
{
	newGameToolStripMenuItem_Click(sender, e);
	playAgainstAI(sender,e);
	turn_count = 0;
	turn = true;
	against_AI = true;
	easy = true;
	enableButtons();
	whoGoesFirst();	
	label1->Text = player1 + " wins";
	label3->Text = player2 + " wins";
	label2->Text = "Draw counter";
	xWinCount->Text = "0";
	DrawCount->Text = "0";
	oWinCount->Text = "0";
	
}

private: System::Void tROLOLOLOLOLOLOLOLOToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
{
	newGameToolStripMenuItem_Click(sender, e);
	trolAI = true;
	playAgainstAI(sender, e);
	enableButtons();
	label1->Text = player1 + " wins";
	label3->Text = player2 + " wins";
	label2->Text = "Draw counter";
	xWinCount->Text = "0";
	DrawCount->Text = "0";
	oWinCount->Text = "0";

}

private: System::Void hardToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
{
	newGameToolStripMenuItem_Click(sender, e);
	playAgainstAI(sender, e);
	turn_count = 0;
	turn = true;
	against_AI = true;
	hard = true;
	enableButtons();
	whoGoesFirst();
	label1->Text = player1 + " wins";
	label3->Text = player2 + " wins";
	label2->Text = "Draw counter";
	xWinCount->Text = "0";
	DrawCount->Text = "0";
	oWinCount->Text = "0";
}

private: System::Void newGameToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	turn = true;
	easy = false;
	AIfirst = false;
	hard = false;
	impossible = false;
	against_AI = false;
	ok = false;
	trolAI = false;
}

private: System::Void iMPOSIBRUUToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
{
	newGameToolStripMenuItem_Click(sender, e);
	playAgainstAI(sender, e);
	turn_count = 0;
	turn = true;
	against_AI = true;
	impossible = true;
	enableButtons();
	whoGoesFirst();
	label1->Text = player1 + " wins";
	label3->Text = player2 + " wins";
	label2->Text = "Draw counter";
	xWinCount->Text = "0";
	DrawCount->Text = "0";
	oWinCount->Text = "0";
}





};
}
