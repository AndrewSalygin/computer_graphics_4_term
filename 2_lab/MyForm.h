#pragma once

namespace Salygin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	float myLines[] = {
		// *голова*
		1.f, 8.5f,4.5f,12.f, // внешний носик
		4.5f, 12.f, 6.f, 12.5f, // лоб
		6.f, 12.5f, 6.8f, 12.15f, // голова
		8.f, 11.f, 7.5f, 9.5f, // затылок
		7.5f, 9.5f, 5.5f, 8.5f, // боковая челюсть
		6.f, 8.5f, 1.f, 8.5f, // нижняя челюсть
		1.5f, 9.f, 2.f, 8.5f, // носик
		4.5f, 8.5f, 6.f, 9.5f, // нижняя часть рта
		6.f, 9.5f, 6.5f, 10.f, // улыбка
		6.f, 10.5f, 7.f, 9.5f, // конец рта (который ближе к ушам Т-образная)

		// **глазки**
		//***верхний***
		//****квадратики****
		4.f, 10.5f, 4.f, 11.f,
		4.f, 11.f, 4.5f, 11.f,
		4.5f, 11.f, 4.5f, 10.5f,
		4.5f, 10.5f, 4.f, 10.5f,

		//****незакрашенные квадраты****
		4.f, 11.f, 4.5f, 11.5f,
		4.5f, 11.5f, 5.f, 11.f,
		5.f, 11.f, 4.5f, 10.5f,

		//****ресницы****
		4.5f, 11.5f, 5.f, 11.5f,
		5.f, 11.5f, 5.f, 11.f,

		//***нижний***
		4.5f, 10.f, 4.5f, 10.5f,
		4.5f, 10.5f, 5.f, 10.5f,
		5.f, 10.5f, 5.f, 10.f,
		5.f, 10.f, 4.5f, 10.f,

		//****незакрашенные квадраты****
		5.f, 11.f, 5.5f, 10.5f,
		5.5f, 10.5f, 5.f, 10.f,

		//****ресницы****
		5.f, 11.f, 5.5f, 11.f,
		5.5f, 11.f, 5.5f, 10.5f,

		// **усики**
		2.f, 9.5f, 0.5f, 11.f,
		2.f, 9.5f, 1.5f, 11.f,

		// **ушки**
		// ***левое***
		4.5f, 12.f, 4.5f, 13.f,
		4.5f, 13.f, 5.5f, 14.f,
		5.5f, 14.f, 6.5f, 13.f,
		6.5f, 13.f, 6.5f, 12.3f,

		// ***правое***
		6.5f, 12.f, 7.5f, 12.5f,
		7.5f, 12.5f, 9.f, 12.5f,
		9.f, 12.5f, 8.5f, 11.f,
		8.5f, 11.f, 7.85f, 10.5f,

		// ****внутренняя часть уха****
		8.f, 11.f, 8.5f, 12.f,
		8.5f, 12.f, 7.5f, 12.f,
		7.5f, 12.f, 8.f, 11.f,


		// *тело*
		6.5f, 9.f, 7.5f, 7.f,
		7.5f, 5.f, 7.f, 4.5f,
		7.f, 4.5f, 5.5f, 4.f,
		5.5f, 4.f, 4.5f, 4.5f,
		4.5f, 4.5f, 4.f, 5.5f,
		4.5f, 7.f, 4.5f, 7.5f,
		4.5f, 7.5f, 5.f, 8.5f,

		// *рука правая*
		5.f, 8.5f, 4.f, 7.5f,

		// *рука левая*
		5.5f, 8.f, 6.f, 7.5f,
		6.f, 7.5f, 4.5f, 6.f,
		4.5f, 6.f, 4.5f, 5.5f,
		4.5f, 5.5f, 5.5f, 5.f,
		5.5f, 5.f, 6.f, 5.5f,
		6.f, 5.5f, 6.f, 6.f,
		6.f, 5.75f, 5.825f, 5.75f,
		6.f, 6.f, 5.5f, 6.f,
		5.5f, 6.f, 6.5f, 7.f,

		// *хвост*
		7.75f, 5.65f, 9.f, 3.5f,
		9.f, 3.5f, 8.5f, 2.5f,
		8.5f, 2.5f, 6.5f, 1.5f,
		6.5f, 1.5f, 5.f, 1.5f,
		5.f, 1.5f, 3.5f, 1.f,
		3.5f, 1.f, 1.5f, 1.f,
		5.f, 2.5f, 7.f, 3.5f,
		7.f, 3.5f, 7.5f, 4.5f,
		7.5f, 4.5f, 7.5f, 5.5f,

		// **кончик хвоста**
		1.5f, 1.f, 3.f, 2.f,
		3.f, 2.f, 4.f, 2.5f,
		4.f, 2.5f, 5.5f, 2.5f,
		5.5f, 2.5f, 5.5f, 2.f,
		5.5f, 2.f, 6.f, 2.f,
		6.f, 2.f, 6.f, 1.5f,

		// *правая нога*
		7.f, 4.5f, 7.f, 3.5f,
		7.5f, 2.f, 8.f, 1,
		8.f, 1.f, 6.f, 0.5f,
		6.f, 0.5f, 5.f, 0.5f,
		5.f, 0.5f, 5.f, 1.5f,
		5.f, 1.5f, 6.5f, 1.5f,
		6.5f, 1.5f, 7.5f, 2.f,
		5.5f, 4.f, 6.f, 3.f,

		// *левая нога*
		4.5f, 4.5f, 4.f, 2.5f, 
		2.5f, 1.f, 3.f, 0.5f,
		3.f, 0.5f, 5.f, 1.f,
		5.f, 1.f, 5.5f, 1.5f,
		5.f, 2.5f, 5.5f, 4.f,

		// *петух*
		// **голова**
		4.f, 7.5f, 2.5f, 7.f,
		2.5f, 7.f, 2.5f, 6.5f,
		2.5f, 6.5f, 3.f, 6.f,
		3.f, 6.f, 4.f, 6.5f,

		// ***клюв***
		2.5f, 6.5f, 2.5f, 5.5f,
		2.5f, 5.5f, 3.f, 6.f,
		3.f, 6.f, 3.5f, 5.5f,
		3.5f, 5.5f, 4.f, 6.5f,

		// **грудь петуха**
		4.f, 6.5f, 4.f, 5.5f,
		4.f, 5.5f, 4.5f, 4.5f,
		
		// **спинка**
		4.f, 7.5f, 4.5f, 7.f,
		4.5f, 7.f, 5.125f, 6.625f,
		5.85f, 6.35f, 7.f, 6.f,
		7.f, 6.f, 7.f, 5.5f,
		7.f, 5.5f, 7.5f, 5.5f,

		// **хвост петуха**
		7.f, 6.f, 8.f, 8.f,
		8.f, 8.f, 9.f, 8.f, 
		9.f, 8.f, 9.5f, 7.f,
		9.5f, 7.f, 9.f, 7.5f,
		9.f, 7.5f, 8.f, 7.5f,
		8.f, 7.5f, 7.f, 5.5f,
		7.f, 5.5f, 7.5f, 6.f,
		7.5f, 6.f, 8.f, 7.f,
		8.f, 7.f, 9.f, 6.5f,
		9.f, 6.5f, 9.5f, 6.f,
		9.5f, 6.f, 9.f, 7.f,
		9.f, 7.f, 8.f, 7.5f,
		7.5f, 6.f, 8.5f, 6.5f,
		8.5f, 6.5f, 9.f, 5.5f,
		9.f, 5.5f, 8.f, 4.5f,
		8.f, 4.5f, 8.5f, 5.5f,
		8.5f, 5.5f, 8.5f, 6.f,
		8.5f, 6.f, 7.5f, 5.5f,
		
		// **крылышко**
		4.5f, 6.5f, 5.f, 6.5f,
		4.5f, 6.5f, 4.5f, 5.f,
		4.5f, 5.f, 6.5f, 4.5f,
		6.5f, 4.5f, 5.5f, 5.5f,
		6.5f, 4.5f, 6.5f, 5.5f,
		6.5f, 5.f, 6.f, 5.5f,
		6.5f, 5.5f, 5.75f, 6.25f,

		// **глаз**
		3.f, 6.5f, 3.f, 7.f,
		3.f, 7.f, 3.5f, 7.f,
		3.5f, 7.f, 3.5f, 6.5f,
		3.5f, 6.5f, 3.f, 6.5f,
		3.f, 7.f, 3.5f, 6.5f,

		// **гребешок**
		2.5f, 7.f, 2.f, 7.5f,
		2.f, 7.5f, 2.5f, 7.5f,
		2.5f, 7.5f, 3.f, 8.f,
		3.f, 8.f, 3.f, 7.5f,
		3.f, 7.5f, 3.5f, 8.f,
		3.5f, 8.f, 3.5f, 7.5f,
		3.5f, 7.5f, 4.f, 8.f,
		4.f, 8.f, 4.f, 7.5f,
		3.5f, 8.f, 2.5f, 9.f,
		2.5f, 9.f, 4.5f, 8.f,

		//*миска*
		1.f, 2.5f, 1.5f, 3.f,
		1.5f, 3.f, 0.5f, 3.5f,
		0.5f, 3.5f, 0.5f, 4.f,
		0.5f, 4.f, 2.f, 4.5f,
		2.f, 4.5f, 2.5f, 4.5f,
		2.5f, 4.5f, 4.f, 4.f,
		4.f, 4.f, 4.f, 3.5f,
		4.f, 3.5f, 3.f, 3.f,
		3.f, 3.f, 3.5f, 2.5f,
		3.5f, 2.5f, 1.f, 2.5f,

		// **внутренность**
		0.5f, 4.f, 1.5f, 3.5f,
		1.5f, 3.5f, 3.f, 3.5f,
		3.f, 3.5f, 4.f, 4.f,
	};
	float lines[] = {
		// голова
		0.5f,3.f,1.f,4.5f, // от левой щеки вверх до уха
		1.f,4.5f,0.5f,6.f, // левое ухо слева снизу вверх
		0.5f,6.f,0.5f, 7.5f, // левое ухо слева
		0.5f, 7.5f,1.f,8.f, // левое ухо верх слева
		1.f,8.f,1.5f,8.f, // левое ухо верх середина
		1.5f,8.f,2.f,7.5f, // левое ухо верх справа
		2.f,7.5f,1.5f, 6.f, // левое ухо справа сверху вниз
		1.5f, 6.f,1.5f,4.5f, // левое ухо справа до макушки
		1.5f,4.5f,3.f,4.5f, // макушка
		3.f,4.5f,3.f,6.f, // правое ухо слева снизу вверх
		3.f,6.f,2.5f,7.5f, // правое ухо слева
		2.5f,7.5f,3.f,8.f, // правое ухо верх слева
		3.f,8.f,3.5f,8.f, // правое ухо верх середина
		3.5f,8.f,4.f,7.5f, // правое ухо верх справа
		4.f,7.5f,4.f,6.f, // правое ухо сверху вниз
		4.f,6.f,3.5f,4.5f, // правое ухо справа
		3.5f,4.5f,4.f,3.f, // от правого уха вниз до щеки
		4.f,3.f,3.5f,1.5f, // правая скула
		3.5f,1.5f,2.5f,1.f, // подбородок справа
		2.5f,1.f,2.f,1.f, // подбородок снизу
		2.f,1.f,1.f,1.5f, // подбородок слева
		1.f,1.5f,0.5f,3.f, // левая скула
		// туловище
		4.f,3.f,5.5f,3.5f, // спина от головы вправо
		5.5f,3.5f,7.f,3.5f, // спина верх
		7.f,3.5f,7.5f,2.5f, // спина сверху до хвоста
		7.5f,2.5f,8.f,2.5f, // хвост сверху
		8.f,2.5f,8.f,2.f, // хвост справа
		8.f,2.f,7.5f,2.f, // хвост низ справа налево
		7.5f,2.f,7.5f,0.5f, // задняя нога справа сверху вниз
		7.5f,0.5f,6.5f,0.5f, // задняя нога низ
		6.5f,0.5f,6.5f,1.f, // задняя нога слева
		6.5f,1.f,6.f,1.f, // между задних ног
		6.f,1.f,6.f,0.5f, // левая задняя нога справа
		6.f,0.5f,5.f,0.5f, // левая задняя нога низ
		5.f,0.5f,5.f,1.f, // левая задняя нога слева
		5.f,1.f,4.f,1.f, // между задними и передними ногами
		4.f,1.f,4.f,0.5f, // правая передняя нога справа
		4.f,0.5f,3.f,0.5f, // правая передняя нога низ
		3.f,0.5f,3.f,1.f, // правая передняя нога слева
		3.f,1.f,2.5f,1.f, // между передних ног
		2.5f,1.f,2.5f,0.5f, // передняя нога справа
		2.5f,0.5f,1.5f,0.5f, // передняя нога низ
		1.5f,0.5f,1.5f,1.25f, // передняя нога слева
		// левый глаз
		1.5f,3.5f,1.5f,3.f, // левый глаз слева сверху вниз
		1.5f,3.f,2.f,3.f, // левый глаз низ
		2.f, 3.f,2.f,3.5f, // левый глаз справа
		2.f,3.5f,1.5f,3.5f, // левый глаз верх
		// правый глаз
		2.5f,3.5f,2.5f,3.f, // правый глаз слева
		2.5f,3.f,3.f, 3.f, // правый глаз снизу
		3.f,3.f,3.f,3.5f, // правый глаз справа
		3.f,3.5f,2.5f,3.5f, // правый глаз сверху
		// ушные раковины
		1.f,5.5f,1.f,7.f, // левая ушная раковина
		3.5f,5.5f,3.5f,7.f, // правая ушная раковина
		// нос
		2.f,2.5f,2.5f,2.5f, // нос сверху
		2.5f,2.5f,2.25f,2.f, // нос справа
		2.25f,2.f,2.f,2.5f // нос слева
	};

	float Vx;
	float Vy;
	float* image;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
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
			this->SuspendLayout();
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284.f, 262);
			this->DoubleBuffered = true;
			this->Name = L"MyForm";
			this->Text = L"Salygin";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MyForm_Paint);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->Resize += gcnew System::EventHandler(this, &MyForm::MyForm_Resize);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: bool keepAspectRatio; bool myPicture;
	private: System::Void MyForm_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^ e) {
		float Wx = ClientRectangle.Width;
		float Wy = ClientRectangle.Height;
		unsigned int arrayLength;


		System::Drawing::Graphics^ g = e->Graphics;
		Pen^ pen;
		if (myPicture) {
			Vx = 10.f;
			Vy = 14.5f;
			image = myLines;
			arrayLength = sizeof(myLines) / sizeof(float);
			g->Clear(Color::White);
			pen = gcnew Pen(Color::DarkRed, 2);
		}
		else {
			g->Clear(Color::Aquamarine);
			pen = gcnew Pen(Color::Black, 2);
			Vx = 8.5f;
			Vy = 8.5f;
			image = lines;
			arrayLength = sizeof(lines) / sizeof(float);
		}

		float aspectFig = Vx / Vy;
		float aspectForm = Wx / Wy;

		float Sx, Sy;
		if (keepAspectRatio) {
			Sx = Sy = aspectFig < aspectForm ? Wy / Vy : Wx / Vx;
		}
		else {
			Sx = Wx / Vx;
			Sy = Wy / Vy;
		}

		float Ty = Sy * Vy;

		for (int i = 0; i < arrayLength; i += 4) {
			g->DrawLine(pen, Sx * image[i], Ty - Sy * image[i + 1], Sx * image[i + 2], Ty - Sy * image[i + 3]);
		}
	}
	private: System::Void MyForm_Resize(System::Object^  sender, System::EventArgs^  e) {
		Refresh();
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		keepAspectRatio = true;
		myPicture = false;
	}
	private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		switch (e->KeyCode) {
		case Keys::M:
			keepAspectRatio = !keepAspectRatio;
			break;
		case Keys::N:
			myPicture = !myPicture;
			break;
		default:
			break;
		}
		Refresh();
	}
	};
}
