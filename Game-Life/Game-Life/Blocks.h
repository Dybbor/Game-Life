#pragma once
//#include "Start_menu.h"
#include <iostream>
namespace GameLife {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;	

	/// <summary>
	/// Summary for Blocks
	/// </summary>
	public ref class Blocks : public System::Windows::Forms::Form
	{
		//Start_menu^ form_menu;
	public:
		Blocks(void)
		{
			InitializeComponent();
			//
			mas = new bool*[10];
			for (int i = 0; i < 10; ++i)
				mas[i]   = new bool[10];
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		bool **mas;
		void Test(bool** mas) 
		{
			system("cls");
			for (int i = 0; i < 10; i++)
			{
				for (int j = 0; j < 10; j++)
					if (mas[i][j] == true)
						std::cout << "1" << " ";
					else
						std::cout << "0" << " ";
				std::cout << std::endl;
			}
		}
		/// </summary>
		~Blocks()
		{
			if (components)
			{
				delete components;
			}

			for (int i = 0; i < 10; ++i)
				delete mas[i];
			delete[] mas;
			Application::Exit();
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button00;
	private: System::Windows::Forms::Button^  button01;
	private: System::Windows::Forms::Button^  button02;
	private: System::Windows::Forms::Button^  button03;
	private: System::Windows::Forms::Button^  button04;
	private: System::Windows::Forms::Button^  button05;
	private: System::Windows::Forms::Button^  button06;
	private: System::Windows::Forms::Button^  button07;
	private: System::Windows::Forms::Button^  button08;
	private: System::Windows::Forms::Button^  button09;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::Button^  button34;
	private: System::Windows::Forms::Button^  button35;
	private: System::Windows::Forms::Button^  button36;
	private: System::Windows::Forms::Button^  button37;
	private: System::Windows::Forms::Button^  button38;
	private: System::Windows::Forms::Button^  button39;
	private: System::Windows::Forms::Button^  button40;
	private: System::Windows::Forms::Button^  button41;
	private: System::Windows::Forms::Button^  button42;
	private: System::Windows::Forms::Button^  button43;
	private: System::Windows::Forms::Button^  button44;
	private: System::Windows::Forms::Button^  button45;
	private: System::Windows::Forms::Button^  button46;
	private: System::Windows::Forms::Button^  button47;
	private: System::Windows::Forms::Button^  button48;
	private: System::Windows::Forms::Button^  button49;
	private: System::Windows::Forms::Button^  button50;
	private: System::Windows::Forms::Button^  button51;
	private: System::Windows::Forms::Button^  button52;
	private: System::Windows::Forms::Button^  button53;
	private: System::Windows::Forms::Button^  button54;
	private: System::Windows::Forms::Button^  button55;
	private: System::Windows::Forms::Button^  button56;
	private: System::Windows::Forms::Button^  button57;
	private: System::Windows::Forms::Button^  button58;
	private: System::Windows::Forms::Button^  button59;
	private: System::Windows::Forms::Button^  button60;
	private: System::Windows::Forms::Button^  button61;
	private: System::Windows::Forms::Button^  button62;
	private: System::Windows::Forms::Button^  button63;
	private: System::Windows::Forms::Button^  button64;
	private: System::Windows::Forms::Button^  button65;
	private: System::Windows::Forms::Button^  button66;
	private: System::Windows::Forms::Button^  button67;
	private: System::Windows::Forms::Button^  button68;
private: System::Windows::Forms::Button^  button69;
private: System::Windows::Forms::Button^  button70;
private: System::Windows::Forms::Button^  button71;
private: System::Windows::Forms::Button^  button72;
private: System::Windows::Forms::Button^  button73;
private: System::Windows::Forms::Button^  button74;
private: System::Windows::Forms::Button^  button75;
private: System::Windows::Forms::Button^  button76;
private: System::Windows::Forms::Button^  button77;
private: System::Windows::Forms::Button^  button78;
private: System::Windows::Forms::Button^  button79;
private: System::Windows::Forms::Button^  button80;
private: System::Windows::Forms::Button^  button81;
private: System::Windows::Forms::Button^  button82;
private: System::Windows::Forms::Button^  button83;
private: System::Windows::Forms::Button^  button84;
private: System::Windows::Forms::Button^  button85;
private: System::Windows::Forms::Button^  button86;
private: System::Windows::Forms::Button^  button87;
private: System::Windows::Forms::Button^  button88;
private: System::Windows::Forms::Button^  button89;
private: System::Windows::Forms::Button^  button90;
private: System::Windows::Forms::Button^  button91;
private: System::Windows::Forms::Button^  button92;
private: System::Windows::Forms::Button^  button93;
private: System::Windows::Forms::Button^  button94;
private: System::Windows::Forms::Button^  button95;
private: System::Windows::Forms::Button^  button96;
private: System::Windows::Forms::Button^  button97;
private: System::Windows::Forms::Button^  button98;
private: System::Windows::Forms::Button^  button99;


























































































private: System::Windows::Forms::Button^  button1;
	protected:

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
			this->button00 = (gcnew System::Windows::Forms::Button());
			this->button01 = (gcnew System::Windows::Forms::Button());
			this->button02 = (gcnew System::Windows::Forms::Button());
			this->button03 = (gcnew System::Windows::Forms::Button());
			this->button04 = (gcnew System::Windows::Forms::Button());
			this->button05 = (gcnew System::Windows::Forms::Button());
			this->button06 = (gcnew System::Windows::Forms::Button());
			this->button07 = (gcnew System::Windows::Forms::Button());
			this->button08 = (gcnew System::Windows::Forms::Button());
			this->button09 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->button56 = (gcnew System::Windows::Forms::Button());
			this->button57 = (gcnew System::Windows::Forms::Button());
			this->button58 = (gcnew System::Windows::Forms::Button());
			this->button59 = (gcnew System::Windows::Forms::Button());
			this->button60 = (gcnew System::Windows::Forms::Button());
			this->button61 = (gcnew System::Windows::Forms::Button());
			this->button62 = (gcnew System::Windows::Forms::Button());
			this->button63 = (gcnew System::Windows::Forms::Button());
			this->button64 = (gcnew System::Windows::Forms::Button());
			this->button65 = (gcnew System::Windows::Forms::Button());
			this->button66 = (gcnew System::Windows::Forms::Button());
			this->button67 = (gcnew System::Windows::Forms::Button());
			this->button68 = (gcnew System::Windows::Forms::Button());
			this->button69 = (gcnew System::Windows::Forms::Button());
			this->button70 = (gcnew System::Windows::Forms::Button());
			this->button71 = (gcnew System::Windows::Forms::Button());
			this->button72 = (gcnew System::Windows::Forms::Button());
			this->button73 = (gcnew System::Windows::Forms::Button());
			this->button74 = (gcnew System::Windows::Forms::Button());
			this->button75 = (gcnew System::Windows::Forms::Button());
			this->button76 = (gcnew System::Windows::Forms::Button());
			this->button77 = (gcnew System::Windows::Forms::Button());
			this->button78 = (gcnew System::Windows::Forms::Button());
			this->button79 = (gcnew System::Windows::Forms::Button());
			this->button80 = (gcnew System::Windows::Forms::Button());
			this->button81 = (gcnew System::Windows::Forms::Button());
			this->button82 = (gcnew System::Windows::Forms::Button());
			this->button83 = (gcnew System::Windows::Forms::Button());
			this->button84 = (gcnew System::Windows::Forms::Button());
			this->button85 = (gcnew System::Windows::Forms::Button());
			this->button86 = (gcnew System::Windows::Forms::Button());
			this->button87 = (gcnew System::Windows::Forms::Button());
			this->button88 = (gcnew System::Windows::Forms::Button());
			this->button89 = (gcnew System::Windows::Forms::Button());
			this->button90 = (gcnew System::Windows::Forms::Button());
			this->button91 = (gcnew System::Windows::Forms::Button());
			this->button92 = (gcnew System::Windows::Forms::Button());
			this->button93 = (gcnew System::Windows::Forms::Button());
			this->button94 = (gcnew System::Windows::Forms::Button());
			this->button95 = (gcnew System::Windows::Forms::Button());
			this->button96 = (gcnew System::Windows::Forms::Button());
			this->button97 = (gcnew System::Windows::Forms::Button());
			this->button98 = (gcnew System::Windows::Forms::Button());
			this->button99 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(167, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(435, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Выбери стартовые ячейки";
			// 
			// button00
			// 
			this->button00->BackColor = System::Drawing::Color::White;
			this->button00->Location = System::Drawing::Point(94, 62);
			this->button00->Name = L"button00";
			this->button00->Size = System::Drawing::Size(50, 50);
			this->button00->TabIndex = 1;
			this->button00->Text = L"\r\n";
			this->button00->UseVisualStyleBackColor = false;
			this->button00->Click += gcnew System::EventHandler(this, &Blocks::button00_Click);
			// 
			// button01
			// 
			this->button01->BackColor = System::Drawing::Color::White;
			this->button01->Location = System::Drawing::Point(150, 62);
			this->button01->Name = L"button01";
			this->button01->Size = System::Drawing::Size(50, 50);
			this->button01->TabIndex = 1;
			this->button01->UseVisualStyleBackColor = false;
			this->button01->Click += gcnew System::EventHandler(this, &Blocks::button01_Click);
			// 
			// button02
			// 
			this->button02->BackColor = System::Drawing::Color::White;
			this->button02->Location = System::Drawing::Point(206, 62);
			this->button02->Name = L"button02";
			this->button02->Size = System::Drawing::Size(50, 50);
			this->button02->TabIndex = 1;
			this->button02->UseVisualStyleBackColor = false;
			this->button02->Click += gcnew System::EventHandler(this, &Blocks::button02_Click);
			// 
			// button03
			// 
			this->button03->BackColor = System::Drawing::Color::White;
			this->button03->Location = System::Drawing::Point(262, 62);
			this->button03->Name = L"button03";
			this->button03->Size = System::Drawing::Size(50, 50);
			this->button03->TabIndex = 1;
			this->button03->UseVisualStyleBackColor = false;
			this->button03->Click += gcnew System::EventHandler(this, &Blocks::button03_Click);
			// 
			// button04
			// 
			this->button04->BackColor = System::Drawing::Color::White;
			this->button04->Location = System::Drawing::Point(318, 62);
			this->button04->Name = L"button04";
			this->button04->Size = System::Drawing::Size(50, 50);
			this->button04->TabIndex = 1;
			this->button04->UseVisualStyleBackColor = false;
			this->button04->Click += gcnew System::EventHandler(this, &Blocks::button04_Click);
			// 
			// button05
			// 
			this->button05->BackColor = System::Drawing::Color::White;
			this->button05->Location = System::Drawing::Point(374, 62);
			this->button05->Name = L"button05";
			this->button05->Size = System::Drawing::Size(50, 50);
			this->button05->TabIndex = 1;
			this->button05->UseVisualStyleBackColor = false;
			this->button05->Click += gcnew System::EventHandler(this, &Blocks::button05_Click);
			// 
			// button06
			// 
			this->button06->BackColor = System::Drawing::Color::White;
			this->button06->Location = System::Drawing::Point(430, 62);
			this->button06->Name = L"button06";
			this->button06->Size = System::Drawing::Size(50, 50);
			this->button06->TabIndex = 1;
			this->button06->UseVisualStyleBackColor = false;
			this->button06->Click += gcnew System::EventHandler(this, &Blocks::button06_Click);
			// 
			// button07
			// 
			this->button07->BackColor = System::Drawing::Color::White;
			this->button07->Location = System::Drawing::Point(486, 62);
			this->button07->Name = L"button07";
			this->button07->Size = System::Drawing::Size(50, 50);
			this->button07->TabIndex = 1;
			this->button07->UseVisualStyleBackColor = false;
			this->button07->Click += gcnew System::EventHandler(this, &Blocks::button07_Click);
			// 
			// button08
			// 
			this->button08->BackColor = System::Drawing::Color::White;
			this->button08->Location = System::Drawing::Point(542, 62);
			this->button08->Name = L"button08";
			this->button08->Size = System::Drawing::Size(50, 50);
			this->button08->TabIndex = 1;
			this->button08->UseVisualStyleBackColor = false;
			this->button08->Click += gcnew System::EventHandler(this, &Blocks::button08_Click);
			// 
			// button09
			// 
			this->button09->BackColor = System::Drawing::Color::White;
			this->button09->Location = System::Drawing::Point(598, 62);
			this->button09->Name = L"button09";
			this->button09->Size = System::Drawing::Size(50, 50);
			this->button09->TabIndex = 1;
			this->button09->UseVisualStyleBackColor = false;
			this->button09->Click += gcnew System::EventHandler(this, &Blocks::button09_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(94, 118);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(50, 50);
			this->button10->TabIndex = 1;
			this->button10->Text = L"\r\n";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Blocks::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::White;
			this->button11->Location = System::Drawing::Point(150, 118);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(50, 50);
			this->button11->TabIndex = 1;
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Blocks::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::White;
			this->button12->Location = System::Drawing::Point(206, 118);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(50, 50);
			this->button12->TabIndex = 1;
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &Blocks::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::White;
			this->button13->Location = System::Drawing::Point(262, 118);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(50, 50);
			this->button13->TabIndex = 1;
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &Blocks::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::White;
			this->button14->Location = System::Drawing::Point(318, 118);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(50, 50);
			this->button14->TabIndex = 1;
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &Blocks::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::White;
			this->button15->Location = System::Drawing::Point(374, 118);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(50, 50);
			this->button15->TabIndex = 1;
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &Blocks::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::White;
			this->button16->Location = System::Drawing::Point(430, 118);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(50, 50);
			this->button16->TabIndex = 1;
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &Blocks::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::White;
			this->button17->Location = System::Drawing::Point(486, 118);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(50, 50);
			this->button17->TabIndex = 1;
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &Blocks::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::White;
			this->button18->Location = System::Drawing::Point(542, 118);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(50, 50);
			this->button18->TabIndex = 1;
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &Blocks::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::White;
			this->button19->Location = System::Drawing::Point(598, 118);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(50, 50);
			this->button19->TabIndex = 1;
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &Blocks::button19_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::White;
			this->button20->Location = System::Drawing::Point(94, 174);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(50, 50);
			this->button20->TabIndex = 1;
			this->button20->Text = L"\r\n";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &Blocks::button20_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::White;
			this->button21->Location = System::Drawing::Point(150, 174);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(50, 50);
			this->button21->TabIndex = 1;
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &Blocks::button21_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::White;
			this->button22->Location = System::Drawing::Point(206, 174);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(50, 50);
			this->button22->TabIndex = 1;
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &Blocks::button22_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::White;
			this->button23->Location = System::Drawing::Point(262, 174);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(50, 50);
			this->button23->TabIndex = 1;
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &Blocks::button23_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::White;
			this->button24->Location = System::Drawing::Point(318, 174);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(50, 50);
			this->button24->TabIndex = 1;
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &Blocks::button24_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::White;
			this->button25->Location = System::Drawing::Point(374, 174);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(50, 50);
			this->button25->TabIndex = 1;
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &Blocks::button25_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::White;
			this->button26->Location = System::Drawing::Point(430, 174);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(50, 50);
			this->button26->TabIndex = 1;
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &Blocks::button26_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::White;
			this->button27->Location = System::Drawing::Point(486, 174);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(50, 50);
			this->button27->TabIndex = 1;
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &Blocks::button27_Click);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::White;
			this->button28->Location = System::Drawing::Point(542, 174);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(50, 50);
			this->button28->TabIndex = 1;
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &Blocks::button28_Click);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::White;
			this->button29->Location = System::Drawing::Point(598, 174);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(50, 50);
			this->button29->TabIndex = 1;
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &Blocks::button29_Click);
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::Color::White;
			this->button30->Location = System::Drawing::Point(94, 230);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(50, 50);
			this->button30->TabIndex = 1;
			this->button30->Text = L"\r\n";
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &Blocks::button30_Click);
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::Color::White;
			this->button31->Location = System::Drawing::Point(150, 230);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(50, 50);
			this->button31->TabIndex = 1;
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &Blocks::button31_Click);
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::Color::White;
			this->button32->Location = System::Drawing::Point(206, 230);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(50, 50);
			this->button32->TabIndex = 1;
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &Blocks::button32_Click);
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::Color::White;
			this->button33->Location = System::Drawing::Point(262, 230);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(50, 50);
			this->button33->TabIndex = 1;
			this->button33->UseVisualStyleBackColor = false;
			this->button33->Click += gcnew System::EventHandler(this, &Blocks::button33_Click);
			// 
			// button34
			// 
			this->button34->BackColor = System::Drawing::Color::White;
			this->button34->Location = System::Drawing::Point(318, 230);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(50, 50);
			this->button34->TabIndex = 1;
			this->button34->UseVisualStyleBackColor = false;
			this->button34->Click += gcnew System::EventHandler(this, &Blocks::button34_Click);
			// 
			// button35
			// 
			this->button35->BackColor = System::Drawing::Color::White;
			this->button35->Location = System::Drawing::Point(374, 230);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(50, 50);
			this->button35->TabIndex = 1;
			this->button35->UseVisualStyleBackColor = false;
			this->button35->Click += gcnew System::EventHandler(this, &Blocks::button35_Click);
			// 
			// button36
			// 
			this->button36->BackColor = System::Drawing::Color::White;
			this->button36->Location = System::Drawing::Point(430, 230);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(50, 50);
			this->button36->TabIndex = 1;
			this->button36->UseVisualStyleBackColor = false;
			this->button36->Click += gcnew System::EventHandler(this, &Blocks::button36_Click);
			// 
			// button37
			// 
			this->button37->BackColor = System::Drawing::Color::White;
			this->button37->Location = System::Drawing::Point(486, 230);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(50, 50);
			this->button37->TabIndex = 1;
			this->button37->UseVisualStyleBackColor = false;
			this->button37->Click += gcnew System::EventHandler(this, &Blocks::button37_Click);
			// 
			// button38
			// 
			this->button38->BackColor = System::Drawing::Color::White;
			this->button38->Location = System::Drawing::Point(542, 230);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(50, 50);
			this->button38->TabIndex = 1;
			this->button38->UseVisualStyleBackColor = false;
			this->button38->Click += gcnew System::EventHandler(this, &Blocks::button38_Click);
			// 
			// button39
			// 
			this->button39->BackColor = System::Drawing::Color::White;
			this->button39->Location = System::Drawing::Point(598, 230);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(50, 50);
			this->button39->TabIndex = 1;
			this->button39->UseVisualStyleBackColor = false;
			this->button39->Click += gcnew System::EventHandler(this, &Blocks::button39_Click);
			// 
			// button40
			// 
			this->button40->BackColor = System::Drawing::Color::White;
			this->button40->Location = System::Drawing::Point(94, 286);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(50, 50);
			this->button40->TabIndex = 1;
			this->button40->Text = L"\r\n";
			this->button40->UseVisualStyleBackColor = false;
			this->button40->Click += gcnew System::EventHandler(this, &Blocks::button40_Click);
			// 
			// button41
			// 
			this->button41->BackColor = System::Drawing::Color::White;
			this->button41->Location = System::Drawing::Point(150, 286);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(50, 50);
			this->button41->TabIndex = 1;
			this->button41->UseVisualStyleBackColor = false;
			this->button41->Click += gcnew System::EventHandler(this, &Blocks::button41_Click);
			// 
			// button42
			// 
			this->button42->BackColor = System::Drawing::Color::White;
			this->button42->Location = System::Drawing::Point(206, 286);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(50, 50);
			this->button42->TabIndex = 1;
			this->button42->UseVisualStyleBackColor = false;
			this->button42->Click += gcnew System::EventHandler(this, &Blocks::button42_Click);
			// 
			// button43
			// 
			this->button43->BackColor = System::Drawing::Color::White;
			this->button43->Location = System::Drawing::Point(262, 286);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(50, 50);
			this->button43->TabIndex = 1;
			this->button43->UseVisualStyleBackColor = false;
			this->button43->Click += gcnew System::EventHandler(this, &Blocks::button43_Click);
			// 
			// button44
			// 
			this->button44->BackColor = System::Drawing::Color::White;
			this->button44->Location = System::Drawing::Point(318, 286);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(50, 50);
			this->button44->TabIndex = 1;
			this->button44->UseVisualStyleBackColor = false;
			this->button44->Click += gcnew System::EventHandler(this, &Blocks::button44_Click);
			// 
			// button45
			// 
			this->button45->BackColor = System::Drawing::Color::White;
			this->button45->Location = System::Drawing::Point(374, 286);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(50, 50);
			this->button45->TabIndex = 1;
			this->button45->UseVisualStyleBackColor = false;
			this->button45->Click += gcnew System::EventHandler(this, &Blocks::button45_Click);
			// 
			// button46
			// 
			this->button46->BackColor = System::Drawing::Color::White;
			this->button46->Location = System::Drawing::Point(430, 286);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(50, 50);
			this->button46->TabIndex = 1;
			this->button46->UseVisualStyleBackColor = false;
			this->button46->Click += gcnew System::EventHandler(this, &Blocks::button46_Click);
			// 
			// button47
			// 
			this->button47->BackColor = System::Drawing::Color::White;
			this->button47->Location = System::Drawing::Point(486, 286);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(50, 50);
			this->button47->TabIndex = 1;
			this->button47->UseVisualStyleBackColor = false;
			this->button47->Click += gcnew System::EventHandler(this, &Blocks::button47_Click);
			// 
			// button48
			// 
			this->button48->BackColor = System::Drawing::Color::White;
			this->button48->Location = System::Drawing::Point(542, 286);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(50, 50);
			this->button48->TabIndex = 1;
			this->button48->UseVisualStyleBackColor = false;
			this->button48->Click += gcnew System::EventHandler(this, &Blocks::button48_Click);
			// 
			// button49
			// 
			this->button49->BackColor = System::Drawing::Color::White;
			this->button49->Location = System::Drawing::Point(598, 286);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(50, 50);
			this->button49->TabIndex = 1;
			this->button49->UseVisualStyleBackColor = false;
			this->button49->Click += gcnew System::EventHandler(this, &Blocks::button49_Click);
			// 
			// button50
			// 
			this->button50->BackColor = System::Drawing::Color::White;
			this->button50->Location = System::Drawing::Point(94, 342);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(50, 50);
			this->button50->TabIndex = 1;
			this->button50->Text = L"\r\n";
			this->button50->UseVisualStyleBackColor = false;
			// 
			// button51
			// 
			this->button51->BackColor = System::Drawing::Color::White;
			this->button51->Location = System::Drawing::Point(150, 342);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(50, 50);
			this->button51->TabIndex = 1;
			this->button51->UseVisualStyleBackColor = false;
			// 
			// button52
			// 
			this->button52->BackColor = System::Drawing::Color::White;
			this->button52->Location = System::Drawing::Point(206, 342);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(50, 50);
			this->button52->TabIndex = 1;
			this->button52->UseVisualStyleBackColor = false;
			// 
			// button53
			// 
			this->button53->BackColor = System::Drawing::Color::White;
			this->button53->Location = System::Drawing::Point(262, 342);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(50, 50);
			this->button53->TabIndex = 1;
			this->button53->UseVisualStyleBackColor = false;
			// 
			// button54
			// 
			this->button54->BackColor = System::Drawing::Color::White;
			this->button54->Location = System::Drawing::Point(318, 342);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(50, 50);
			this->button54->TabIndex = 1;
			this->button54->UseVisualStyleBackColor = false;
			// 
			// button55
			// 
			this->button55->BackColor = System::Drawing::Color::White;
			this->button55->Location = System::Drawing::Point(374, 342);
			this->button55->Name = L"button55";
			this->button55->Size = System::Drawing::Size(50, 50);
			this->button55->TabIndex = 1;
			this->button55->UseVisualStyleBackColor = false;
			// 
			// button56
			// 
			this->button56->BackColor = System::Drawing::Color::White;
			this->button56->Location = System::Drawing::Point(430, 342);
			this->button56->Name = L"button56";
			this->button56->Size = System::Drawing::Size(50, 50);
			this->button56->TabIndex = 1;
			this->button56->UseVisualStyleBackColor = false;
			// 
			// button57
			// 
			this->button57->BackColor = System::Drawing::Color::White;
			this->button57->Location = System::Drawing::Point(486, 342);
			this->button57->Name = L"button57";
			this->button57->Size = System::Drawing::Size(50, 50);
			this->button57->TabIndex = 1;
			this->button57->UseVisualStyleBackColor = false;
			// 
			// button58
			// 
			this->button58->BackColor = System::Drawing::Color::White;
			this->button58->Location = System::Drawing::Point(542, 342);
			this->button58->Name = L"button58";
			this->button58->Size = System::Drawing::Size(50, 50);
			this->button58->TabIndex = 1;
			this->button58->UseVisualStyleBackColor = false;
			// 
			// button59
			// 
			this->button59->BackColor = System::Drawing::Color::White;
			this->button59->Location = System::Drawing::Point(598, 342);
			this->button59->Name = L"button59";
			this->button59->Size = System::Drawing::Size(50, 50);
			this->button59->TabIndex = 1;
			this->button59->UseVisualStyleBackColor = false;
			// 
			// button60
			// 
			this->button60->BackColor = System::Drawing::Color::White;
			this->button60->Location = System::Drawing::Point(94, 398);
			this->button60->Name = L"button60";
			this->button60->Size = System::Drawing::Size(50, 50);
			this->button60->TabIndex = 1;
			this->button60->Text = L"\r\n";
			this->button60->UseVisualStyleBackColor = false;
			// 
			// button61
			// 
			this->button61->BackColor = System::Drawing::Color::White;
			this->button61->Location = System::Drawing::Point(150, 398);
			this->button61->Name = L"button61";
			this->button61->Size = System::Drawing::Size(50, 50);
			this->button61->TabIndex = 1;
			this->button61->UseVisualStyleBackColor = false;
			// 
			// button62
			// 
			this->button62->BackColor = System::Drawing::Color::White;
			this->button62->Location = System::Drawing::Point(206, 398);
			this->button62->Name = L"button62";
			this->button62->Size = System::Drawing::Size(50, 50);
			this->button62->TabIndex = 1;
			this->button62->UseVisualStyleBackColor = false;
			// 
			// button63
			// 
			this->button63->BackColor = System::Drawing::Color::White;
			this->button63->Location = System::Drawing::Point(262, 398);
			this->button63->Name = L"button63";
			this->button63->Size = System::Drawing::Size(50, 50);
			this->button63->TabIndex = 1;
			this->button63->UseVisualStyleBackColor = false;
			// 
			// button64
			// 
			this->button64->BackColor = System::Drawing::Color::White;
			this->button64->Location = System::Drawing::Point(318, 398);
			this->button64->Name = L"button64";
			this->button64->Size = System::Drawing::Size(50, 50);
			this->button64->TabIndex = 1;
			this->button64->UseVisualStyleBackColor = false;
			// 
			// button65
			// 
			this->button65->BackColor = System::Drawing::Color::White;
			this->button65->Location = System::Drawing::Point(374, 398);
			this->button65->Name = L"button65";
			this->button65->Size = System::Drawing::Size(50, 50);
			this->button65->TabIndex = 1;
			this->button65->UseVisualStyleBackColor = false;
			// 
			// button66
			// 
			this->button66->BackColor = System::Drawing::Color::White;
			this->button66->Location = System::Drawing::Point(430, 398);
			this->button66->Name = L"button66";
			this->button66->Size = System::Drawing::Size(50, 50);
			this->button66->TabIndex = 1;
			this->button66->UseVisualStyleBackColor = false;
			// 
			// button67
			// 
			this->button67->BackColor = System::Drawing::Color::White;
			this->button67->Location = System::Drawing::Point(486, 398);
			this->button67->Name = L"button67";
			this->button67->Size = System::Drawing::Size(50, 50);
			this->button67->TabIndex = 1;
			this->button67->UseVisualStyleBackColor = false;
			// 
			// button68
			// 
			this->button68->BackColor = System::Drawing::Color::White;
			this->button68->Location = System::Drawing::Point(542, 398);
			this->button68->Name = L"button68";
			this->button68->Size = System::Drawing::Size(50, 50);
			this->button68->TabIndex = 1;
			this->button68->UseVisualStyleBackColor = false;
			// 
			// button69
			// 
			this->button69->BackColor = System::Drawing::Color::White;
			this->button69->Location = System::Drawing::Point(598, 398);
			this->button69->Name = L"button69";
			this->button69->Size = System::Drawing::Size(50, 50);
			this->button69->TabIndex = 1;
			this->button69->UseVisualStyleBackColor = false;
			// 
			// button70
			// 
			this->button70->BackColor = System::Drawing::Color::White;
			this->button70->Location = System::Drawing::Point(94, 454);
			this->button70->Name = L"button70";
			this->button70->Size = System::Drawing::Size(50, 50);
			this->button70->TabIndex = 1;
			this->button70->Text = L"\r\n";
			this->button70->UseVisualStyleBackColor = false;
			// 
			// button71
			// 
			this->button71->BackColor = System::Drawing::Color::White;
			this->button71->Location = System::Drawing::Point(150, 454);
			this->button71->Name = L"button71";
			this->button71->Size = System::Drawing::Size(50, 50);
			this->button71->TabIndex = 1;
			this->button71->UseVisualStyleBackColor = false;
			// 
			// button72
			// 
			this->button72->BackColor = System::Drawing::Color::White;
			this->button72->Location = System::Drawing::Point(206, 454);
			this->button72->Name = L"button72";
			this->button72->Size = System::Drawing::Size(50, 50);
			this->button72->TabIndex = 1;
			this->button72->UseVisualStyleBackColor = false;
			// 
			// button73
			// 
			this->button73->BackColor = System::Drawing::Color::White;
			this->button73->Location = System::Drawing::Point(262, 454);
			this->button73->Name = L"button73";
			this->button73->Size = System::Drawing::Size(50, 50);
			this->button73->TabIndex = 1;
			this->button73->UseVisualStyleBackColor = false;
			// 
			// button74
			// 
			this->button74->BackColor = System::Drawing::Color::White;
			this->button74->Location = System::Drawing::Point(318, 454);
			this->button74->Name = L"button74";
			this->button74->Size = System::Drawing::Size(50, 50);
			this->button74->TabIndex = 1;
			this->button74->UseVisualStyleBackColor = false;
			// 
			// button75
			// 
			this->button75->BackColor = System::Drawing::Color::White;
			this->button75->Location = System::Drawing::Point(374, 454);
			this->button75->Name = L"button75";
			this->button75->Size = System::Drawing::Size(50, 50);
			this->button75->TabIndex = 1;
			this->button75->UseVisualStyleBackColor = false;
			// 
			// button76
			// 
			this->button76->BackColor = System::Drawing::Color::White;
			this->button76->Location = System::Drawing::Point(430, 454);
			this->button76->Name = L"button76";
			this->button76->Size = System::Drawing::Size(50, 50);
			this->button76->TabIndex = 1;
			this->button76->UseVisualStyleBackColor = false;
			// 
			// button77
			// 
			this->button77->BackColor = System::Drawing::Color::White;
			this->button77->Location = System::Drawing::Point(486, 454);
			this->button77->Name = L"button77";
			this->button77->Size = System::Drawing::Size(50, 50);
			this->button77->TabIndex = 1;
			this->button77->UseVisualStyleBackColor = false;
			// 
			// button78
			// 
			this->button78->BackColor = System::Drawing::Color::White;
			this->button78->Location = System::Drawing::Point(542, 454);
			this->button78->Name = L"button78";
			this->button78->Size = System::Drawing::Size(50, 50);
			this->button78->TabIndex = 1;
			this->button78->UseVisualStyleBackColor = false;
			// 
			// button79
			// 
			this->button79->BackColor = System::Drawing::Color::White;
			this->button79->Location = System::Drawing::Point(598, 454);
			this->button79->Name = L"button79";
			this->button79->Size = System::Drawing::Size(50, 50);
			this->button79->TabIndex = 1;
			this->button79->UseVisualStyleBackColor = false;
			// 
			// button80
			// 
			this->button80->BackColor = System::Drawing::Color::White;
			this->button80->Location = System::Drawing::Point(94, 510);
			this->button80->Name = L"button80";
			this->button80->Size = System::Drawing::Size(50, 50);
			this->button80->TabIndex = 1;
			this->button80->Text = L"\r\n";
			this->button80->UseVisualStyleBackColor = false;
			// 
			// button81
			// 
			this->button81->BackColor = System::Drawing::Color::White;
			this->button81->Location = System::Drawing::Point(150, 510);
			this->button81->Name = L"button81";
			this->button81->Size = System::Drawing::Size(50, 50);
			this->button81->TabIndex = 1;
			this->button81->UseVisualStyleBackColor = false;
			// 
			// button82
			// 
			this->button82->BackColor = System::Drawing::Color::White;
			this->button82->Location = System::Drawing::Point(206, 510);
			this->button82->Name = L"button82";
			this->button82->Size = System::Drawing::Size(50, 50);
			this->button82->TabIndex = 1;
			this->button82->UseVisualStyleBackColor = false;
			// 
			// button83
			// 
			this->button83->BackColor = System::Drawing::Color::White;
			this->button83->Location = System::Drawing::Point(262, 510);
			this->button83->Name = L"button83";
			this->button83->Size = System::Drawing::Size(50, 50);
			this->button83->TabIndex = 1;
			this->button83->UseVisualStyleBackColor = false;
			// 
			// button84
			// 
			this->button84->BackColor = System::Drawing::Color::White;
			this->button84->Location = System::Drawing::Point(318, 510);
			this->button84->Name = L"button84";
			this->button84->Size = System::Drawing::Size(50, 50);
			this->button84->TabIndex = 1;
			this->button84->UseVisualStyleBackColor = false;
			// 
			// button85
			// 
			this->button85->BackColor = System::Drawing::Color::White;
			this->button85->Location = System::Drawing::Point(374, 510);
			this->button85->Name = L"button85";
			this->button85->Size = System::Drawing::Size(50, 50);
			this->button85->TabIndex = 1;
			this->button85->UseVisualStyleBackColor = false;
			// 
			// button86
			// 
			this->button86->BackColor = System::Drawing::Color::White;
			this->button86->Location = System::Drawing::Point(430, 510);
			this->button86->Name = L"button86";
			this->button86->Size = System::Drawing::Size(50, 50);
			this->button86->TabIndex = 1;
			this->button86->UseVisualStyleBackColor = false;
			// 
			// button87
			// 
			this->button87->BackColor = System::Drawing::Color::White;
			this->button87->Location = System::Drawing::Point(486, 510);
			this->button87->Name = L"button87";
			this->button87->Size = System::Drawing::Size(50, 50);
			this->button87->TabIndex = 1;
			this->button87->UseVisualStyleBackColor = false;
			// 
			// button88
			// 
			this->button88->BackColor = System::Drawing::Color::White;
			this->button88->Location = System::Drawing::Point(542, 510);
			this->button88->Name = L"button88";
			this->button88->Size = System::Drawing::Size(50, 50);
			this->button88->TabIndex = 1;
			this->button88->UseVisualStyleBackColor = false;
			// 
			// button89
			// 
			this->button89->BackColor = System::Drawing::Color::White;
			this->button89->Location = System::Drawing::Point(598, 510);
			this->button89->Name = L"button89";
			this->button89->Size = System::Drawing::Size(50, 50);
			this->button89->TabIndex = 1;
			this->button89->UseVisualStyleBackColor = false;
			// 
			// button90
			// 
			this->button90->BackColor = System::Drawing::Color::White;
			this->button90->Location = System::Drawing::Point(94, 566);
			this->button90->Name = L"button90";
			this->button90->Size = System::Drawing::Size(50, 50);
			this->button90->TabIndex = 1;
			this->button90->Text = L"\r\n";
			this->button90->UseVisualStyleBackColor = false;
			// 
			// button91
			// 
			this->button91->BackColor = System::Drawing::Color::White;
			this->button91->Location = System::Drawing::Point(150, 566);
			this->button91->Name = L"button91";
			this->button91->Size = System::Drawing::Size(50, 50);
			this->button91->TabIndex = 1;
			this->button91->UseVisualStyleBackColor = false;
			// 
			// button92
			// 
			this->button92->BackColor = System::Drawing::Color::White;
			this->button92->Location = System::Drawing::Point(206, 566);
			this->button92->Name = L"button92";
			this->button92->Size = System::Drawing::Size(50, 50);
			this->button92->TabIndex = 1;
			this->button92->UseVisualStyleBackColor = false;
			// 
			// button93
			// 
			this->button93->BackColor = System::Drawing::Color::White;
			this->button93->Location = System::Drawing::Point(262, 566);
			this->button93->Name = L"button93";
			this->button93->Size = System::Drawing::Size(50, 50);
			this->button93->TabIndex = 1;
			this->button93->UseVisualStyleBackColor = false;
			// 
			// button94
			// 
			this->button94->BackColor = System::Drawing::Color::White;
			this->button94->Location = System::Drawing::Point(318, 566);
			this->button94->Name = L"button94";
			this->button94->Size = System::Drawing::Size(50, 50);
			this->button94->TabIndex = 1;
			this->button94->UseVisualStyleBackColor = false;
			// 
			// button95
			// 
			this->button95->BackColor = System::Drawing::Color::White;
			this->button95->Location = System::Drawing::Point(374, 566);
			this->button95->Name = L"button95";
			this->button95->Size = System::Drawing::Size(50, 50);
			this->button95->TabIndex = 1;
			this->button95->UseVisualStyleBackColor = false;
			// 
			// button96
			// 
			this->button96->BackColor = System::Drawing::Color::White;
			this->button96->Location = System::Drawing::Point(430, 566);
			this->button96->Name = L"button96";
			this->button96->Size = System::Drawing::Size(50, 50);
			this->button96->TabIndex = 1;
			this->button96->UseVisualStyleBackColor = false;
			// 
			// button97
			// 
			this->button97->BackColor = System::Drawing::Color::White;
			this->button97->Location = System::Drawing::Point(486, 566);
			this->button97->Name = L"button97";
			this->button97->Size = System::Drawing::Size(50, 50);
			this->button97->TabIndex = 1;
			this->button97->UseVisualStyleBackColor = false;
			// 
			// button98
			// 
			this->button98->BackColor = System::Drawing::Color::White;
			this->button98->Location = System::Drawing::Point(542, 566);
			this->button98->Name = L"button98";
			this->button98->Size = System::Drawing::Size(50, 50);
			this->button98->TabIndex = 1;
			this->button98->UseVisualStyleBackColor = false;
			// 
			// button99
			// 
			this->button99->BackColor = System::Drawing::Color::White;
			this->button99->Location = System::Drawing::Point(598, 566);
			this->button99->Name = L"button99";
			this->button99->Size = System::Drawing::Size(50, 50);
			this->button99->TabIndex = 1;
			this->button99->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(654, 24);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(54, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Blocks::button1_Click);
			// 
			// Blocks
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(720, 715);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button99);
			this->Controls->Add(this->button89);
			this->Controls->Add(this->button79);
			this->Controls->Add(this->button98);
			this->Controls->Add(this->button88);
			this->Controls->Add(this->button78);
			this->Controls->Add(this->button69);
			this->Controls->Add(this->button68);
			this->Controls->Add(this->button59);
			this->Controls->Add(this->button58);
			this->Controls->Add(this->button49);
			this->Controls->Add(this->button48);
			this->Controls->Add(this->button39);
			this->Controls->Add(this->button97);
			this->Controls->Add(this->button87);
			this->Controls->Add(this->button77);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->button67);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button57);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button47);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button96);
			this->Controls->Add(this->button86);
			this->Controls->Add(this->button76);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button66);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button56);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button46);
			this->Controls->Add(this->button09);
			this->Controls->Add(this->button95);
			this->Controls->Add(this->button85);
			this->Controls->Add(this->button75);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button65);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button55);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button45);
			this->Controls->Add(this->button08);
			this->Controls->Add(this->button94);
			this->Controls->Add(this->button84);
			this->Controls->Add(this->button74);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button64);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button54);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button44);
			this->Controls->Add(this->button07);
			this->Controls->Add(this->button93);
			this->Controls->Add(this->button83);
			this->Controls->Add(this->button73);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button63);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button53);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button43);
			this->Controls->Add(this->button06);
			this->Controls->Add(this->button92);
			this->Controls->Add(this->button82);
			this->Controls->Add(this->button72);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button62);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button52);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button42);
			this->Controls->Add(this->button05);
			this->Controls->Add(this->button91);
			this->Controls->Add(this->button81);
			this->Controls->Add(this->button71);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button61);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button51);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button90);
			this->Controls->Add(this->button41);
			this->Controls->Add(this->button80);
			this->Controls->Add(this->button04);
			this->Controls->Add(this->button70);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button60);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button50);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button40);
			this->Controls->Add(this->button03);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button02);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button01);
			this->Controls->Add(this->button00);
			this->Controls->Add(this->label1);
			this->Name = L"Blocks";
			this->Text = L"Blocks";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void button00_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button00->BackColor == System::Drawing::Color::White)
	{
		this->button00->BackColor = System::Drawing::Color::Red;
		mas[0][0] = true;
	}
	else
	{
		this->button00->BackColor = System::Drawing::Color::White;
		mas[0][0] = false;
	}
}
private: System::Void button01_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button01->BackColor == System::Drawing::Color::White)
	{
		this->button01->BackColor = System::Drawing::Color::Red;
		mas[0][1] = true;
	}
	else
	{
		this->button01->BackColor = System::Drawing::Color::White;
		mas[0][1] = false;
	}
}
private: System::Void button02_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button02->BackColor == System::Drawing::Color::White)
	{
		this->button02->BackColor = System::Drawing::Color::Red;
		mas[0][2] = true;
	}
	else
	{
		this->button02->BackColor = System::Drawing::Color::White;
		mas[0][2] = false;
	}
}
private: System::Void button03_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button03->BackColor == System::Drawing::Color::White)
	{
		this->button03->BackColor = System::Drawing::Color::Red;
		mas[0][3] = true;
	}
	else
	{
		this->button03->BackColor = System::Drawing::Color::White;
		mas[0][3] = false;
	}
}
private: System::Void button04_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button04->BackColor == System::Drawing::Color::White)
	{
		this->button04->BackColor = System::Drawing::Color::Red;
		mas[0][4] = true;
	}
	else
	{
		this->button04->BackColor = System::Drawing::Color::White;
		mas[0][4] = false;
	}
}
private: System::Void button05_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button05->BackColor == System::Drawing::Color::White)
	{
		this->button05->BackColor = System::Drawing::Color::Red; 
		mas[0][5] = true;
	}
	else
	{
		this->button05->BackColor = System::Drawing::Color::White;
		mas[0][5] = false;
	}
}
private: System::Void button06_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button06->BackColor == System::Drawing::Color::White)
	{
		this->button06->BackColor = System::Drawing::Color::Red;
		mas[0][6] = true;
	}
	else
	{
		this->button06->BackColor = System::Drawing::Color::White;
		mas[0][6] = false;
	}
}
private: System::Void button07_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button07->BackColor == System::Drawing::Color::White)
	{
		this->button07->BackColor = System::Drawing::Color::Red;
		mas[0][7] = true;
	}
	else
	{
		this->button07->BackColor = System::Drawing::Color::White;
		mas[0][7] = false;
	}
}
private: System::Void button08_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button08->BackColor == System::Drawing::Color::White)
	{
		this->button08->BackColor = System::Drawing::Color::Red;
		mas[0][8] = true;
	}
	else
	{
		this->button08->BackColor = System::Drawing::Color::White;
		mas[0][8] = false;
	}
}
private: System::Void button09_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button09->BackColor == System::Drawing::Color::White)
	{
		this->button09->BackColor = System::Drawing::Color::Red;
		mas[0][9] = true;
	}
	else
	{
		this->button09->BackColor = System::Drawing::Color::White;
		mas[0][9] = false;
	}
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button10->BackColor == System::Drawing::Color::White)
	{
		this->button10->BackColor = System::Drawing::Color::Red;
		mas[1][0] = true;
	}
	else
	{
		this->button10->BackColor = System::Drawing::Color::White;
		mas[1][0] = false;
	}
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button11->BackColor == System::Drawing::Color::White)
	{
		this->button11->BackColor = System::Drawing::Color::Red;
		mas[1][1] = true;
	}
	else
	{
		this->button11->BackColor = System::Drawing::Color::White;
		mas[1][1] = false;
	}
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button12->BackColor == System::Drawing::Color::White)
	{
		this->button12->BackColor = System::Drawing::Color::Red;
		mas[1][2] = true;
	}
	else
	{
		this->button12->BackColor = System::Drawing::Color::White;
		mas[1][2] = false;
	}

}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button13->BackColor == System::Drawing::Color::White)
	{
		this->button13->BackColor = System::Drawing::Color::Red;
		mas[1][3] = true;
	}
	else
	{
		this->button13->BackColor = System::Drawing::Color::White;
		mas[1][3] = false;
	}
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button14->BackColor == System::Drawing::Color::White)
	{
		this->button14->BackColor = System::Drawing::Color::Red;
		mas[1][4] = true;
	}
	else
	{
		this->button14->BackColor = System::Drawing::Color::White;
		mas[1][4] = false;
	}
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button15->BackColor == System::Drawing::Color::White)
	{
		this->button15->BackColor = System::Drawing::Color::Red;
		mas[1][5] = true;
	}
	else
	{
		this->button15->BackColor = System::Drawing::Color::White;
		mas[1][5] = false;
	}
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button16->BackColor == System::Drawing::Color::White)
	{
		this->button16->BackColor = System::Drawing::Color::Red;
		mas[1][6] = true;
	}
	else
	{
		this->button16->BackColor = System::Drawing::Color::White;
		mas[1][6] = false;
	}
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button17->BackColor == System::Drawing::Color::White)
	{
		this->button17->BackColor = System::Drawing::Color::Red;
		mas[1][7] = true;
	}
	else
	{
		this->button17->BackColor = System::Drawing::Color::White;
		mas[1][7] = false;
	}
}
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button18->BackColor == System::Drawing::Color::White)
	{
		this->button18->BackColor = System::Drawing::Color::Red;
		mas[1][8] = true;
	}
	else
	{
		this->button18->BackColor = System::Drawing::Color::White;
		mas[1][8] = false;
	
	}
}
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button19->BackColor == System::Drawing::Color::White)
	{
		this->button19->BackColor = System::Drawing::Color::Red;
		mas[1][9] = true;
	}
	else
	{
		this->button19->BackColor = System::Drawing::Color::White;
		mas[1][9] = false;
	}
	Test(mas);
	
}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button20->BackColor == System::Drawing::Color::White)
	{
		this->button20->BackColor = System::Drawing::Color::Red;
		mas[2][0] = true;
	}
	else
	{
		this->button20->BackColor = System::Drawing::Color::White;
		mas[2][0] = false;
	}
}
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button21->BackColor == System::Drawing::Color::White)
	{
		this->button21->BackColor = System::Drawing::Color::Red;
		mas[2][1] = true;
	}
	else
	{
		this->button21->BackColor = System::Drawing::Color::White;
		mas[2][1] = false;
	}
}
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button22->BackColor == System::Drawing::Color::White)
	{
		this->button22->BackColor = System::Drawing::Color::Red;
		mas[2][2] = true;
	}
	else
	{
		this->button22->BackColor = System::Drawing::Color::White;
		mas[2][2] = false;
	}
}
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button23->BackColor == System::Drawing::Color::White)
	{
		this->button23->BackColor = System::Drawing::Color::Red;
		mas[2][3] = true;
	}
	else
	{
		this->button23->BackColor = System::Drawing::Color::White;
		mas[2][3] = false;
	}
}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button24->BackColor == System::Drawing::Color::White)
	{
		this->button24->BackColor = System::Drawing::Color::Red;
		mas[2][4] = true;
	}
	else
	{
		this->button24->BackColor = System::Drawing::Color::White;
		mas[2][4] = false;
	}
}
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button25->BackColor == System::Drawing::Color::White)
	{
		this->button25->BackColor = System::Drawing::Color::Red;
		mas[2][5] = true;
	}
	else
	{
		this->button25->BackColor = System::Drawing::Color::White;
		mas[2][5] = false;
	}
}
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button26->BackColor == System::Drawing::Color::White)
	{
		this->button26->BackColor = System::Drawing::Color::Red;
		mas[2][6] = true;
	}
	else
	{
		this->button26->BackColor = System::Drawing::Color::White;
		mas[2][6] = false;
	}
}
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button27->BackColor == System::Drawing::Color::White)
	{
		this->button27->BackColor = System::Drawing::Color::Red;
		mas[2][7] = true;
	}
	else
	{
		this->button27->BackColor = System::Drawing::Color::White;
		mas[2][7] = false;
	}
}
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button28->BackColor == System::Drawing::Color::White)
	{
		this->button28->BackColor = System::Drawing::Color::Red;
		mas[2][8] = true;
	}
	else
	{
		this->button28->BackColor = System::Drawing::Color::White;
		mas[2][8] = false;
	}
}
private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button29->BackColor == System::Drawing::Color::White)
	{
		this->button29->BackColor = System::Drawing::Color::Red;
		mas[2][9] = true;
	}
	else
	{
		this->button29->BackColor = System::Drawing::Color::White;
		mas[2][9] = false;
	}
}
private: System::Void button30_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button30->BackColor == System::Drawing::Color::White)
	{
		this->button30->BackColor = System::Drawing::Color::Red;
		mas[3][0] = true;
	}
	else
	{
		this->button30->BackColor = System::Drawing::Color::White;
		mas[3][0] = false;
	}
}
private: System::Void button31_Click(System::Object^  sender, System::EventArgs^  e) {

	if (this->button31->BackColor == System::Drawing::Color::White)
	{
		this->button31->BackColor = System::Drawing::Color::Red;
		mas[3][1] = true;
	}
	else
	{
		this->button31->BackColor = System::Drawing::Color::White;
		mas[3][1] = false;
	}
}
private: System::Void button32_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button32->BackColor == System::Drawing::Color::White)
	{
		this->button32->BackColor = System::Drawing::Color::Red;
		mas[3][2] = true;
	}
	else
	{
		this->button32->BackColor = System::Drawing::Color::White;
		mas[3][2] = false;
	}
}
private: System::Void button33_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button33->BackColor == System::Drawing::Color::White)
	{
		this->button33->BackColor = System::Drawing::Color::Red;
		mas[3][3] = true;
	}
	else
	{
		this->button33->BackColor = System::Drawing::Color::White;
		mas[3][3] = false;
	}
}
private: System::Void button34_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button34->BackColor == System::Drawing::Color::White)
	{
		this->button34->BackColor = System::Drawing::Color::Red;
		mas[3][4] = true;
	}
	else
	{
		this->button34->BackColor = System::Drawing::Color::White;
		mas[3][4] = false;
	}
}
private: System::Void button35_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button35->BackColor == System::Drawing::Color::White)
	{
		this->button35->BackColor = System::Drawing::Color::Red;
		mas[3][5] = true;
	}
	else
	{
		this->button35->BackColor = System::Drawing::Color::White;
		mas[3][5] = false;
	}
}
private: System::Void button36_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button36->BackColor == System::Drawing::Color::White)
	{
		this->button36->BackColor = System::Drawing::Color::Red;
		mas[3][6] = true;
	}
	else
	{
		this->button36->BackColor = System::Drawing::Color::White;
		mas[3][6] = false;
	}
}
private: System::Void button37_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button37->BackColor == System::Drawing::Color::White)
	{
		this->button37->BackColor = System::Drawing::Color::Red;
		mas[3][7] = true;
	}
	else
	{
		this->button37->BackColor = System::Drawing::Color::White;
		mas[3][7] = false;
	}
}
private: System::Void button38_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button38->BackColor == System::Drawing::Color::White)
	{
		this->button38->BackColor = System::Drawing::Color::Red;
		mas[3][8] = true;
	}
	else
	{
		this->button38->BackColor = System::Drawing::Color::White;
		mas[3][8] = false;
	}
}
private: System::Void button39_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button39->BackColor == System::Drawing::Color::White)
	{
		this->button39->BackColor = System::Drawing::Color::Red;
		mas[3][9] = true;
	}
	else
	{
		this->button39->BackColor = System::Drawing::Color::White;
		mas[3][9] = false;
	}
}
private: System::Void button40_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button40->BackColor == System::Drawing::Color::White)
	{
		this->button40->BackColor = System::Drawing::Color::Red;
		mas[4][0] = true;
	}
	else
	{
		this->button40->BackColor = System::Drawing::Color::White;
		mas[4][0] = false;
	}
}
private: System::Void button41_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button41->BackColor == System::Drawing::Color::White)
	{
		this->button41->BackColor = System::Drawing::Color::Red;
		mas[4][1] = true;
	}
	else
	{
		this->button41->BackColor = System::Drawing::Color::White;
		mas[4][1] = false;
	}
}
private: System::Void button42_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button42->BackColor == System::Drawing::Color::White)
	{
		this->button42->BackColor = System::Drawing::Color::Red;
		mas[4][2] = true;
	}
	else
	{
		this->button42->BackColor = System::Drawing::Color::White;
		mas[4][2] = false;
	}
}
private: System::Void button43_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button43->BackColor == System::Drawing::Color::White)
	{
		this->button43->BackColor = System::Drawing::Color::Red;
		mas[4][3] = true;
	}
	else
	{
		this->button43->BackColor = System::Drawing::Color::White;
		mas[4][3] = false;
	}
}
private: System::Void button44_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button44->BackColor == System::Drawing::Color::White)
	{
		this->button44->BackColor = System::Drawing::Color::Red;
		mas[4][4] = true;
	}
	else
	{
		this->button44->BackColor = System::Drawing::Color::White;
		mas[4][4] = false;
	}
}
private: System::Void button45_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button45->BackColor == System::Drawing::Color::White)
	{
		this->button45->BackColor = System::Drawing::Color::Red;
		mas[4][5] = true;
	}
	else
	{
		this->button45->BackColor = System::Drawing::Color::White;
		mas[4][5] = false;
	}
}
private: System::Void button46_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button46->BackColor == System::Drawing::Color::White)
	{
		this->button46->BackColor = System::Drawing::Color::Red;
		mas[4][6] = true;
	}
	else
	{
		this->button46->BackColor = System::Drawing::Color::White;
		mas[4][6] = false;
	}
}
private: System::Void button47_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button47->BackColor == System::Drawing::Color::White)
	{
		this->button47->BackColor = System::Drawing::Color::Red;
		mas[4][7] = true;
	}
	else
	{
		this->button47->BackColor = System::Drawing::Color::White;
		mas[4][7] = false;
	}
}
private: System::Void button48_Click(System::Object^  sender, System::EventArgs^  e) {

	if (this->button48->BackColor == System::Drawing::Color::White)
	{
		this->button48->BackColor = System::Drawing::Color::Red;
		mas[4][8] = true;
	}
	else
	{
		this->button48->BackColor = System::Drawing::Color::White;
		mas[4][8] = false;
	}
}
private: System::Void button49_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->button49->BackColor == System::Drawing::Color::White)
	{
		this->button49->BackColor = System::Drawing::Color::Red;
		mas[4][9] = true;
	}
	else
	{
		this->button49->BackColor = System::Drawing::Color::White;
		mas[4][9] = false;
	}
}
};
}
