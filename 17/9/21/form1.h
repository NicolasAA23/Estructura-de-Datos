#pragma once

#include <iostream>
#include <string>
#include "Vector.h"
#include <msclr\marshal_cppstd.h>


namespace EjArreglo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
    using namespace msclr::interop;
	// Variable Global
	Vector arreglo_reg_notas;
	int pos=0;
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  grilla_nota;
	protected: 

	protected: 

	private: System::Windows::Forms::TextBox^  txtNota;
	protected: 

	protected: 


	private: System::Windows::Forms::Button^  btnIngresar;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  btnTamano;
	private: System::Windows::Forms::TextBox^  txtTamano;
	private: System::Windows::Forms::Button^  btnEliminar;




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
			this->grilla_nota = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtNota = (gcnew System::Windows::Forms::TextBox());
			this->btnIngresar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnTamano = (gcnew System::Windows::Forms::Button());
			this->txtTamano = (gcnew System::Windows::Forms::TextBox());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla_nota))->BeginInit();
			this->SuspendLayout();
			// 
			// grilla_nota
			// 
			this->grilla_nota->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grilla_nota->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) {this->Column1});
			this->grilla_nota->Location = System::Drawing::Point(58, 122);
			this->grilla_nota->Name = L"grilla_nota";
			this->grilla_nota->Size = System::Drawing::Size(240, 150);
			this->grilla_nota->TabIndex = 0;
			this->grilla_nota->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Nota";
			this->Column1->Name = L"Column1";
			// 
			// txtNota
			// 
			this->txtNota->Location = System::Drawing::Point(58, 72);
			this->txtNota->Name = L"txtNota";
			this->txtNota->Size = System::Drawing::Size(65, 20);
			this->txtNota->TabIndex = 1;
			// 
			// btnIngresar
			// 
			this->btnIngresar->Location = System::Drawing::Point(129, 73);
			this->btnIngresar->Name = L"btnIngresar";
			this->btnIngresar->Size = System::Drawing::Size(79, 27);
			this->btnIngresar->TabIndex = 2;
			this->btnIngresar->Text = L"Ingresar";
			this->btnIngresar->UseVisualStyleBackColor = true;
			this->btnIngresar->Click += gcnew System::EventHandler(this, &Form1::btnIngresar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 74);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(30, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Nota";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Tamaño";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// btnTamano
			// 
			this->btnTamano->Location = System::Drawing::Point(129, 27);
			this->btnTamano->Name = L"btnTamano";
			this->btnTamano->Size = System::Drawing::Size(79, 27);
			this->btnTamano->TabIndex = 5;
			this->btnTamano->Text = L"Definir";
			this->btnTamano->UseVisualStyleBackColor = true;
			this->btnTamano->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// txtTamano
			// 
			this->txtTamano->Location = System::Drawing::Point(58, 26);
			this->txtTamano->Name = L"txtTamano";
			this->txtTamano->Size = System::Drawing::Size(65, 20);
			this->txtTamano->TabIndex = 4;
			this->txtTamano->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// btnEliminar
			// 
			this->btnEliminar->Location = System::Drawing::Point(219, 73);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(79, 27);
			this->btnEliminar->TabIndex = 7;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &Form1::btnEliminar_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(330, 316);
			this->Controls->Add(this->btnEliminar);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnTamano);
			this->Controls->Add(this->txtTamano);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnIngresar);
			this->Controls->Add(this->txtNota);
			this->Controls->Add(this->grilla_nota);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla_nota))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			 }
	private: System::Void btnIngresar_Click(System::Object^  sender, System::EventArgs^  e) {
			 int elemento;
			 elemento=System::Convert::ToInt32(txtNota->Text);
			 if (arreglo_reg_notas.Insertar(elemento,pos)) {
				pos++;
				// Despliegue del Vector
				grilla_nota->ColumnCount=1;
				grilla_nota->RowCount=arreglo_reg_notas.Get_tamano();
				int i=0, nota;
				for (i=0;i<arreglo_reg_notas.Get_tamano();i++)
				{
				nota=arreglo_reg_notas.Get_vector(i);
				grilla_nota->Rows[i]->Cells[0]->Value=System::Convert::ToInt32(nota);
				}
			 }
		
			 }
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 int tam;
			 tam=System::Convert::ToInt32(txtTamano->Text);
			 arreglo_reg_notas.Set_tamano(tam);
			 grilla_nota->RowCount=arreglo_reg_notas.Get_tamano();
			 pos=0;
			 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void btnEliminar_Click(System::Object^  sender, System::EventArgs^  e) {
			 int elemento;
			 elemento=System::Convert::ToInt32(txtNota->Text);
			 if (arreglo_reg_notas.Eliminar(elemento)) {
				// Despliegue del Vector
				grilla_nota->ColumnCount=1;
				pos--;
				if (grilla_nota->RowCount==1)
					grilla_nota->Rows[0]->Cells[0]->Value="";
				else
				{
					grilla_nota->RowCount=arreglo_reg_notas.Get_tamano();
					int i=0, nota;
					for (i=0;i<arreglo_reg_notas.Get_tamano();i++)
					{
					nota=arreglo_reg_notas.Get_vector(i);
					grilla_nota->Rows[i]->Cells[0]->Value=System::Convert::ToInt32(nota);
					}
				}
			 }
			 else
				 MessageBox::Show("No existe el dato");
		
		 }
};
}
