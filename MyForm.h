#pragma once

namespace MNK {

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
	private: System::Windows::Forms::TextBox^  textBoxc;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBoxd;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBoxa;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBoxb;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBoxN;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBoxAA;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart;
	private: System::Windows::Forms::TextBox^  textBoxcgrad;
	private: System::Windows::Forms::TextBox^  textBoxdgrad;


	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBoxcns;
	private: System::Windows::Forms::TextBox^  textBoxdns;



	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->textBoxc = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxd = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxa = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxb = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxN = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxAA = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button = (gcnew System::Windows::Forms::Button());
			this->chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->textBoxcgrad = (gcnew System::Windows::Forms::TextBox());
			this->textBoxdgrad = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBoxcns = (gcnew System::Windows::Forms::TextBox());
			this->textBoxdns = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->BeginInit();
			this->SuspendLayout();
			// 
			// textBoxc
			// 
			this->textBoxc->Location = System::Drawing::Point(40, 14);
			this->textBoxc->Name = L"textBoxc";
			this->textBoxc->Size = System::Drawing::Size(100, 20);
			this->textBoxc->TabIndex = 0;
			this->textBoxc->Text = L"0,1";
			this->textBoxc->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(13, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"c";
			// 
			// textBoxd
			// 
			this->textBoxd->Location = System::Drawing::Point(40, 49);
			this->textBoxd->Name = L"textBoxd";
			this->textBoxd->Size = System::Drawing::Size(100, 20);
			this->textBoxd->TabIndex = 0;
			this->textBoxd->Text = L"2";
			this->textBoxd->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"d";
			// 
			// textBoxa
			// 
			this->textBoxa->Location = System::Drawing::Point(40, 87);
			this->textBoxa->Name = L"textBoxa";
			this->textBoxa->Size = System::Drawing::Size(100, 20);
			this->textBoxa->TabIndex = 0;
			this->textBoxa->Text = L"-5";
			this->textBoxa->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 91);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"a";
			// 
			// textBoxb
			// 
			this->textBoxb->Location = System::Drawing::Point(40, 122);
			this->textBoxb->Name = L"textBoxb";
			this->textBoxb->Size = System::Drawing::Size(100, 20);
			this->textBoxb->TabIndex = 0;
			this->textBoxb->Text = L"0";
			this->textBoxb->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 126);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 1;
			this->label4->Text = L"b";
			// 
			// textBoxN
			// 
			this->textBoxN->Location = System::Drawing::Point(40, 160);
			this->textBoxN->Name = L"textBoxN";
			this->textBoxN->Size = System::Drawing::Size(100, 20);
			this->textBoxN->TabIndex = 0;
			this->textBoxN->Text = L"32";
			this->textBoxN->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(16, 164);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(15, 13);
			this->label5->TabIndex = 1;
			this->label5->Text = L"N";
			// 
			// textBoxAA
			// 
			this->textBoxAA->Location = System::Drawing::Point(40, 195);
			this->textBoxAA->Name = L"textBoxAA";
			this->textBoxAA->Size = System::Drawing::Size(100, 20);
			this->textBoxAA->TabIndex = 0;
			this->textBoxAA->Text = L"0,2";
			this->textBoxAA->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(16, 199);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(14, 13);
			this->label6->TabIndex = 1;
			this->label6->Text = L"A";
			// 
			// button
			// 
			this->button->Location = System::Drawing::Point(38, 233);
			this->button->Name = L"button";
			this->button->Size = System::Drawing::Size(102, 23);
			this->button->TabIndex = 2;
			this->button->Text = L"ПУСК";
			this->button->UseVisualStyleBackColor = true;
			this->button->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// chart
			// 
			this->chart->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			chartArea2->Name = L"ChartArea1";
			this->chart->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart->Legends->Add(legend2);
			this->chart->Location = System::Drawing::Point(171, 11);
			this->chart->Name = L"chart";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series4->Legend = L"Legend1";
			series4->LegendText = L"F(X)";
			series4->Name = L"Series1";
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series5->Legend = L"Legend1";
			series5->LegendText = L"F*(X)";
			series5->Name = L"Series2";
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series6->Legend = L"Legend1";
			series6->LegendText = L"Fgrad(X)";
			series6->Name = L"Series3";
			this->chart->Series->Add(series4);
			this->chart->Series->Add(series5);
			this->chart->Series->Add(series6);
			this->chart->Size = System::Drawing::Size(432, 363);
			this->chart->TabIndex = 3;
			this->chart->Text = L"chart1";
			// 
			// textBoxcgrad
			// 
			this->textBoxcgrad->Location = System::Drawing::Point(40, 262);
			this->textBoxcgrad->Name = L"textBoxcgrad";
			this->textBoxcgrad->Size = System::Drawing::Size(100, 20);
			this->textBoxcgrad->TabIndex = 0;
			this->textBoxcgrad->Text = L"\?";
			this->textBoxcgrad->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBoxdgrad
			// 
			this->textBoxdgrad->Location = System::Drawing::Point(40, 288);
			this->textBoxdgrad->Name = L"textBoxdgrad";
			this->textBoxdgrad->Size = System::Drawing::Size(100, 20);
			this->textBoxdgrad->TabIndex = 0;
			this->textBoxdgrad->Text = L"\?";
			this->textBoxdgrad->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(1, 265);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(37, 13);
			this->label7->TabIndex = 1;
			this->label7->Text = L"c grad";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(1, 291);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(37, 13);
			this->label8->TabIndex = 1;
			this->label8->Text = L"d grad";
			// 
			// textBoxcns
			// 
			this->textBoxcns->Location = System::Drawing::Point(40, 328);
			this->textBoxcns->Name = L"textBoxcns";
			this->textBoxcns->Size = System::Drawing::Size(100, 20);
			this->textBoxcns->TabIndex = 0;
			this->textBoxcns->Text = L"\?";
			this->textBoxcns->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBoxdns
			// 
			this->textBoxdns->Location = System::Drawing::Point(40, 354);
			this->textBoxdns->Name = L"textBoxdns";
			this->textBoxdns->Size = System::Drawing::Size(100, 20);
			this->textBoxdns->TabIndex = 0;
			this->textBoxdns->Text = L"\?";
			this->textBoxdns->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(7, 331);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(27, 13);
			this->label9->TabIndex = 1;
			this->label9->Text = L"c ns";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(7, 357);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(27, 13);
			this->label10->TabIndex = 1;
			this->label10->Text = L"d ns";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(606, 376);
			this->Controls->Add(this->chart);
			this->Controls->Add(this->button);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxAA);
			this->Controls->Add(this->textBoxN);
			this->Controls->Add(this->textBoxb);
			this->Controls->Add(this->textBoxa);
			this->Controls->Add(this->textBoxdns);
			this->Controls->Add(this->textBoxcns);
			this->Controls->Add(this->textBoxdgrad);
			this->Controls->Add(this->textBoxcgrad);
			this->Controls->Add(this->textBoxd);
			this->Controls->Add(this->textBoxc);
			this->Name = L"MyForm";
			this->Text = L"ЛАБОРАТОРНАЯ РАБОТА № 5 Вариант 15";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		double a, b, c, d, A;
		int N;
		bool success;

		double ReadDouble(TextBox^ textBox)
		{
			double result = 0;
			if (double::TryParse(textBox->Text, result))
				textBox->BackColor = Color::White;
			else
			{
				textBox->BackColor = Color::Red;
				success = false;
			}
			return result;
		}

		Random^ random = gcnew Random();

	private: System::Void button_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		//Очистить график
		chart->Series[0]->Points->Clear();
		chart->Series[1]->Points->Clear();
		chart->Series[2]->Points->Clear();

		//Получить исходные значения
		success = true;
		a = ReadDouble(textBoxa);
		b = ReadDouble(textBoxb);
		c = ReadDouble(textBoxc);
		d = ReadDouble(textBoxd);
		A = ReadDouble(textBoxAA);
		N = (int)ReadDouble(textBoxN);
		if (N <= 1)
		{
			success = false;
			textBoxN->BackColor = Color::Red;
		}

		if (a > b)
		{
			textBoxb->Text = a.ToString();
			textBoxa->Text = b.ToString();
			a = ReadDouble(textBoxa);
			b = ReadDouble(textBoxb);
		}

		if (!success) return; //Нет данных!
		//Решить задачу
		//Заполнить нужное количество значений аргументов
		array<double>^ X = gcnew array<double>(N);
		double h = (b - a) / (N - 1);
		for (int i = 0; i < N; i++)
			X[i] = a + i*h;
		//функции (с добавленными ошибками),
		array<double>^ Y = gcnew array<double>(N);
		for (int i = 0; i < N; i++)
			Y[i] = c * X[i] + d;
		for (int i = 0; i < N; i++)
			Y[i] += A * (random->NextDouble() - 0.5);

		//Найти решение градиентным методом
		double cg = 1, dg = 0;
		Gradient(cg,dg,X,Y);
		array<double>^ Ygrad = gcnew array<double>(N);
		for (int i = 0; i < N; i++) Ygrad[i] = cg * X[i] + dg;
		//Найти решение НС
		double cn = 1, dn = 1;
		NS(cn, dn, X, Y);
		array<double>^ Yns = gcnew array<double>(N);
		for (int i = 0; i < N; i++) Yns[i] = cn * X[i] + dn;

		//Вывести результат (график)

		for (int i = 0; i < N; i++)
		{
			chart->Series[0]->Points->AddXY(X[i], Y[i]);
			chart->Series[1]->Points->AddXY(X[i], Ygrad[i]);
			chart->Series[2]->Points->AddXY(X[i], Yns[i]);
		}

		//Вывести значения результатов в textBox
		textBoxcgrad->Text = cg.ToString("0.000");
		textBoxdgrad->Text = dg.ToString("0.000");
		textBoxcns->Text = cn.ToString("0.000");
		textBoxdns->Text = dn.ToString("0.000");

	}

			 //Величина квадратичного отклонения
			 double Delta(double c, double d, array<double>^ X, array<double>^ Y)
			 {
				 int N = X->Length;
				 double result = 0;
				 for (int i = 0; i < N; i++)
				 {
					 double delta = c*X[i] + d - Y[i];
					 result += delta*delta;
				 }
				 return result;
			 }

			 double epsilon = 0.0001;

			 void Gradient(double %c, double %d, array<double>^ X, array<double>^ Y)
			 {
				 while (true)
				 {
					 double d0 = Delta(c, d, X, Y); //Текущее значение функции
					 //Производная по с (точнее, конечная разность)
					 double dc = Delta(c + epsilon, d, X, Y);
					 dc -= d0;
					 //Производная по d
					 double dd = Delta(c, d + epsilon, X, Y);
					 dd -= d0;
					 //Шаг в нужном направлении
					 double r = Math::Sqrt(dd*dd) + (dc*dc); //Длина вектора -градиента
					 double ddc = -dc / r * epsilon; //Величина шага
					 double ddd = -dd / r * epsilon;
					 double d1 = Delta(c + ddc, d + ddd, X, Y);
					 //Если значение больше предыдущего - вернуть и закончить
					 if (d1 > d0) 
						 return; //Найдено
					 c += ddc;
					 d += ddd;
				 }

			 }

			 void NS(double %c, double %d, array<double>^ X, array<double>^ Y)
			 {
				 //Размах изменения аргументов
				 double hc = Math::Abs(10 * c);
				 double hd = Math::Abs(10 * d);
				 int N = 11; //Узлов в сетке
				 double p = 1.0 / (N - 1); //Шаг сетки (часть от полного диапазона)
				 while (true)
				 {
					 //Равномерно разобьем предположительные интервалы изменения искомых параметров 
					 //регрессии на двумерной сетке
					 //Вероятно, что cmax не будет больше 10*с и меньше -10*с, аналогично d
					 double cmin = c - hc;
					 double dmin = d - hd;

					 double D = Delta(c, d, X, Y);

					 //для каждого фиксированного значения "с" найти самый лучший d
					 //также применяя прямой перебор
					 for (int kc = 0; kc < N; kc++)
						 for (int kd = 0; kd < N; kd++)
						 {
							 double cc = cmin + p*kc;
							 double dd = dmin + p*kd;
							 double D1 = Delta(cc, dd, X, Y);
							 if (D1 < D)
							 {
								 D = D1;
								 c = cc;
								 d = dd;
							 }
						 }

					 hc *= p;
					 hd *= p;
					 //Уменьшить шаг
					 //Если шаги стали меньше epsilon, то процесс закончен
					 if (hc < epsilon && hd < epsilon) return;
				 }
			 }

/*
найти линейную регрессию функции c*x+d
по набору ее дискретных значений (N)
заданных равномерно на интервале (a,b)
со случайными ошибками e = A * random(-0.5..0.5)

Выполнить расчет параметров градиентным методом. 

Провести двумерный пассивный поиск оптимальных весовых коэффициентов 
нейронной сети (НС) регрессии


*/

};
}
