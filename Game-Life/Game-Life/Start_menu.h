#pragma once
#include "Blocks.h"

namespace GameLife {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Start_menu
	/// </summary>
	public ref class Start_menu : public System::Windows::Forms::Form
	{
	public:
		Start_menu(void)
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
		~Start_menu()
		{
			if (components)
			{
				delete components;
			}
			this->Close();
		}
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(140, 131);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(173, 101);
			this->button1->TabIndex = 0;
			this->button1->Text = L"PLAY";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Start_menu::button1_Click);
			// 
			// Start_menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(462, 371);
			this->Controls->Add(this->button1);
			this->Name = L"Start_menu";
			this->Text = L"Start_menu";
			this->Load += gcnew System::EventHandler(this, &Start_menu::Start_menu_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Start_menu_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Blocks^ form_block = gcnew Blocks();
		this->Hide();
		form_block->Show();
	}
	};
}
