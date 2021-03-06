#pragma once

namespace form {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for testform
	/// </summary>
	public ref class testform : public System::Windows::Forms::Form
	{
	public:
		testform(void)
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
		~testform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(testform::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->button1->Location = System::Drawing::Point(17, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(225, 75);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Click!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &testform::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F));
			this->label1->Location = System::Drawing::Point(12, 114);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 26);
			this->label1->TabIndex = 1;
			this->label1->Text = L"CPS";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F));
			this->label2->Location = System::Drawing::Point(12, 214);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 26);
			this->label2->TabIndex = 2;
			this->label2->Text = L"TC";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->label3->Location = System::Drawing::Point(15, 169);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(21, 29);
			this->label3->TabIndex = 3;
			this->label3->Text = L"-";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->label4->Location = System::Drawing::Point(12, 257);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(21, 29);
			this->label4->TabIndex = 4;
			this->label4->Text = L"-";
			// 
			// testform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(254, 327);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"testform";
			this->Text = L"Click Test";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: void check(double x);
	public: double cps(int x);
	public: void click();
	public: void start();
	public: bool begin = 0;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (begin)
			click();
		else
		{
			start(); begin = 1;
		}
	}
};
}
