#pragma once

//#include "MyForm.h";

namespace Tic_Tac_Toe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{

	static String ^name1="", ^name2="";

	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  play_button;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->play_button = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(24, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(362, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Give the players\' names:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(25, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(155, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"First Player :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(25, 141);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(192, 29);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Second Player :";
			// 
			// play_button
			// 
			this->play_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->play_button->Location = System::Drawing::Point(193, 210);
			this->play_button->Name = L"play_button";
			this->play_button->Size = System::Drawing::Size(151, 44);
			this->play_button->TabIndex = 3;
			this->play_button->Text = L"Play !";
			this->play_button->UseVisualStyleBackColor = true;
			this->play_button->Click += gcnew System::EventHandler(this, &MyForm1::play_button_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(235, 92);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(232, 34);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(235, 139);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(232, 34);
			this->textBox2->TabIndex = 5;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox2_TextChanged);
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBox2_KeyPress);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(541, 266);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->play_button);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Names";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) 
{
	name1 = textBox1->Text;
}

private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) 
{
	name2 = textBox2->Text;
}

public: static System::String ^setPlayer1Name()
{
	return name1;
}

public: static System::String ^setPlayer2Name()
{
	return name2;
}

private: System::Void play_button_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (name1 == "" && name2 == "")
	{
		while (name1 == "" && name2=="")
		{
			this->Hide();
			MessageBox::Show("You must enter the players' name.", "Oups");
			MyForm1 ^form = gcnew MyForm1;
			form->ShowDialog();
		}
	}
	else
	{
		if (name1 == "")
		{
			while (name1 == "")
			{
				this->Hide();
				MessageBox::Show("You must enter player 1 name.", "Oups");
				MyForm1 ^form = gcnew MyForm1;
				form->textBox2->Text = name2;
				form->ShowDialog();

			}
		}
		if (name2 == "")
		{
			while (name2 == "")
			{
				this->Hide();
				MessageBox::Show("You must enter player 2 name.", "Oups");
				MyForm1 ^form = gcnew MyForm1;
				form->textBox1->Text = name1;
				form->ShowDialog();
			}
		}
	}
	this->Hide();
}

private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) 
{
	if (e->KeyChar.ToString() == "\r")
		play_button->PerformClick();
}



};
}
