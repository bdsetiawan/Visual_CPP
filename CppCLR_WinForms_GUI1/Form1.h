#pragma once

// uncomment to execute the rk1-utils:
//    #include "rk1_Utils_demo.h"  // shows how the rk1-utils can be used

#include "Form1.h"
#include "Header1.h"
#include "Header2.h"
//#include <ctime>
#include <iomanip>
#include <iostream>
#include <time.h>
//#include "date.h"
#include <chrono>
#include <thread>
#include <cstdio>
#include <ctime>


//delay in belum bisa dipanggil
namespace Wait_Function {
    void Delay(double dblsecs) {
        const double onesec = 1.0 / (1440.0 * 60.0);
        std::chrono::duration<double> waitTime(onesec + dblsecs);
        auto endTime = std::chrono::system_clock::now() + waitTime;
        while (std::chrono::system_clock::now() <= endTime) {
            // Do nothing
            //Application::DoEvents();
        }
    }
}


namespace CppCLRWinFormsProject {

  using namespace System;
  using namespace System::ComponentModel;
  using namespace System::Collections;
  using namespace System::Windows::Forms;
  using namespace System::Data;
  using namespace System::Drawing;
  using namespace System::IO::Ports;

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

      // uncomment to execute the rk1-utils:
      //    N_rk1_Utils_demo::execute(); // shows how the rk1-utils can be used
      this->comboBoxBR->Text = "9600";

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
  private: System::Windows::Forms::TextBox^ out_textBox;
  private: System::Windows::Forms::TextBox^ in_textBox;


  private: System::Windows::Forms::Button^ button1;
  private: System::Windows::Forms::Button^ button2;
  private: System::Windows::Forms::Button^ test1;
  private: System::Windows::Forms::ListBox^ listBox1;
  private: System::Windows::Forms::RichTextBox^ richTextBox1;
  private: System::Windows::Forms::Button^ test2;
  private: System::Windows::Forms::DataGridView^ dataGridView1;
  private: System::Windows::Forms::ComboBox^ comboBoxCOM;

  private: System::Windows::Forms::Button^ getCOM;

  private: System::IO::Ports::SerialPort^ serialPort1;
  private: System::Windows::Forms::RichTextBox^ richTextBoxWRITE;
  private: System::Windows::Forms::Button^ SENDbutton;
  private: System::Windows::Forms::RichTextBox^ richTextBoxREAD;

  private: System::Windows::Forms::Button^ READbutton;
  private: System::Windows::Forms::Button^ openCOMbtn;
  private: System::Windows::Forms::ComboBox^ comboBoxBR;
  private: System::Windows::Forms::Timer^ timer1;
  private: System::Windows::Forms::Label^ label1;
  private: System::Windows::Forms::Button^ CloseCOMbtn;
  private: System::Windows::Forms::Button^ ConDisc_COM;
  private: System::Windows::Forms::Button^ button3;
  private: System::Windows::Forms::Timer^ timerClock;
  private: System::Windows::Forms::Label^ label2;




  private: System::ComponentModel::IContainer^ components;


  protected:

  private:
    /// <summary>
    /// Required designer variable.
    /// </summary>


#pragma region Windows Form Designer generated code
    /// <summary>
    /// Required method for Designer support - do not modify
    /// the contents of this method with the code editor.
    /// </summary>
    void InitializeComponent(void)
    {
        this->components = (gcnew System::ComponentModel::Container());
        this->out_textBox = (gcnew System::Windows::Forms::TextBox());
        this->in_textBox = (gcnew System::Windows::Forms::TextBox());
        this->button1 = (gcnew System::Windows::Forms::Button());
        this->button2 = (gcnew System::Windows::Forms::Button());
        this->test1 = (gcnew System::Windows::Forms::Button());
        this->listBox1 = (gcnew System::Windows::Forms::ListBox());
        this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
        this->test2 = (gcnew System::Windows::Forms::Button());
        this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
        this->comboBoxCOM = (gcnew System::Windows::Forms::ComboBox());
        this->getCOM = (gcnew System::Windows::Forms::Button());
        this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
        this->richTextBoxWRITE = (gcnew System::Windows::Forms::RichTextBox());
        this->SENDbutton = (gcnew System::Windows::Forms::Button());
        this->richTextBoxREAD = (gcnew System::Windows::Forms::RichTextBox());
        this->READbutton = (gcnew System::Windows::Forms::Button());
        this->openCOMbtn = (gcnew System::Windows::Forms::Button());
        this->comboBoxBR = (gcnew System::Windows::Forms::ComboBox());
        this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
        this->label1 = (gcnew System::Windows::Forms::Label());
        this->CloseCOMbtn = (gcnew System::Windows::Forms::Button());
        this->ConDisc_COM = (gcnew System::Windows::Forms::Button());
        this->button3 = (gcnew System::Windows::Forms::Button());
        this->timerClock = (gcnew System::Windows::Forms::Timer(this->components));
        this->label2 = (gcnew System::Windows::Forms::Label());
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
        this->SuspendLayout();
        // 
        // out_textBox
        // 
        this->out_textBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
            | System::Windows::Forms::AnchorStyles::Left)
            | System::Windows::Forms::AnchorStyles::Right));
        this->out_textBox->Location = System::Drawing::Point(12, 38);
        this->out_textBox->Multiline = true;
        this->out_textBox->Name = L"out_textBox";
        this->out_textBox->Size = System::Drawing::Size(279, 240);
        this->out_textBox->TabIndex = 0;
        // 
        // in_textBox
        // 
        this->in_textBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
        this->in_textBox->Location = System::Drawing::Point(548, 38);
        this->in_textBox->Name = L"in_textBox";
        this->in_textBox->Size = System::Drawing::Size(138, 20);
        this->in_textBox->TabIndex = 1;
        // 
        // button1
        // 
        this->button1->Location = System::Drawing::Point(548, 78);
        this->button1->Name = L"button1";
        this->button1->Size = System::Drawing::Size(75, 23);
        this->button1->TabIndex = 4;
        this->button1->Text = L"button1";
        this->button1->UseVisualStyleBackColor = true;
        this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
        // 
        // button2
        // 
        this->button2->Location = System::Drawing::Point(548, 125);
        this->button2->Name = L"button2";
        this->button2->Size = System::Drawing::Size(75, 23);
        this->button2->TabIndex = 5;
        this->button2->Text = L"clear all";
        this->button2->UseVisualStyleBackColor = true;
        this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
        // 
        // test1
        // 
        this->test1->Location = System::Drawing::Point(297, 38);
        this->test1->Name = L"test1";
        this->test1->Size = System::Drawing::Size(75, 23);
        this->test1->TabIndex = 6;
        this->test1->Text = L"test1";
        this->test1->UseVisualStyleBackColor = true;
        this->test1->Click += gcnew System::EventHandler(this, &Form1::test1_Click);
        // 
        // listBox1
        // 
        this->listBox1->FormattingEnabled = true;
        this->listBox1->Location = System::Drawing::Point(392, 38);
        this->listBox1->Name = L"listBox1";
        this->listBox1->Size = System::Drawing::Size(120, 95);
        this->listBox1->TabIndex = 7;
        // 
        // richTextBox1
        // 
        this->richTextBox1->Location = System::Drawing::Point(392, 143);
        this->richTextBox1->Name = L"richTextBox1";
        this->richTextBox1->Size = System::Drawing::Size(120, 96);
        this->richTextBox1->TabIndex = 8;
        this->richTextBox1->Text = L"";
        // 
        // test2
        // 
        this->test2->Location = System::Drawing::Point(297, 143);
        this->test2->Name = L"test2";
        this->test2->Size = System::Drawing::Size(75, 23);
        this->test2->TabIndex = 9;
        this->test2->Text = L"test2";
        this->test2->UseVisualStyleBackColor = true;
        this->test2->Click += gcnew System::EventHandler(this, &Form1::test2_Click);
        // 
        // dataGridView1
        // 
        this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
        this->dataGridView1->Location = System::Drawing::Point(718, 38);
        this->dataGridView1->Name = L"dataGridView1";
        this->dataGridView1->RowHeadersWidth = 51;
        this->dataGridView1->Size = System::Drawing::Size(334, 219);
        this->dataGridView1->TabIndex = 10;
        this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick);
        // 
        // comboBoxCOM
        // 
        this->comboBoxCOM->FormattingEnabled = true;
        this->comboBoxCOM->Location = System::Drawing::Point(29, 318);
        this->comboBoxCOM->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
        this->comboBoxCOM->Name = L"comboBoxCOM";
        this->comboBoxCOM->Size = System::Drawing::Size(92, 21);
        this->comboBoxCOM->TabIndex = 11;
        // 
        // getCOM
        // 
        this->getCOM->Location = System::Drawing::Point(152, 318);
        this->getCOM->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
        this->getCOM->Name = L"getCOM";
        this->getCOM->Size = System::Drawing::Size(56, 19);
        this->getCOM->TabIndex = 12;
        this->getCOM->Text = L"get COM";
        this->getCOM->UseVisualStyleBackColor = true;
        this->getCOM->Click += gcnew System::EventHandler(this, &Form1::getCOM_Click);
        // 
        // richTextBoxWRITE
        // 
        this->richTextBoxWRITE->Location = System::Drawing::Point(373, 539);
        this->richTextBoxWRITE->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
        this->richTextBoxWRITE->Name = L"richTextBoxWRITE";
        this->richTextBoxWRITE->Size = System::Drawing::Size(500, 44);
        this->richTextBoxWRITE->TabIndex = 13;
        this->richTextBoxWRITE->Text = L"";
        // 
        // SENDbutton
        // 
        this->SENDbutton->Location = System::Drawing::Point(904, 539);
        this->SENDbutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
        this->SENDbutton->Name = L"SENDbutton";
        this->SENDbutton->Size = System::Drawing::Size(81, 19);
        this->SENDbutton->TabIndex = 14;
        this->SENDbutton->Text = L"SEND";
        this->SENDbutton->UseVisualStyleBackColor = true;
        this->SENDbutton->Click += gcnew System::EventHandler(this, &Form1::SENDbutton_Click);
        // 
        // richTextBoxREAD
        // 
        this->richTextBoxREAD->Location = System::Drawing::Point(374, 275);
        this->richTextBoxREAD->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
        this->richTextBoxREAD->Name = L"richTextBoxREAD";
        this->richTextBoxREAD->Size = System::Drawing::Size(499, 238);
        this->richTextBoxREAD->TabIndex = 15;
        this->richTextBoxREAD->Text = L"";
        // 
        // READbutton
        // 
        this->READbutton->Location = System::Drawing::Point(904, 275);
        this->READbutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
        this->READbutton->Name = L"READbutton";
        this->READbutton->Size = System::Drawing::Size(81, 19);
        this->READbutton->TabIndex = 16;
        this->READbutton->Text = L"READ";
        this->READbutton->UseVisualStyleBackColor = true;
        // 
        // openCOMbtn
        // 
        this->openCOMbtn->Location = System::Drawing::Point(152, 362);
        this->openCOMbtn->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
        this->openCOMbtn->Name = L"openCOMbtn";
        this->openCOMbtn->Size = System::Drawing::Size(56, 19);
        this->openCOMbtn->TabIndex = 17;
        this->openCOMbtn->Text = L"Open COM";
        this->openCOMbtn->UseVisualStyleBackColor = true;
        this->openCOMbtn->Click += gcnew System::EventHandler(this, &Form1::openCOMbtn_Click);
        // 
        // comboBoxBR
        // 
        this->comboBoxBR->FormattingEnabled = true;
        this->comboBoxBR->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"9600", L"115200" });
        this->comboBoxBR->Location = System::Drawing::Point(29, 361);
        this->comboBoxBR->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
        this->comboBoxBR->Name = L"comboBoxBR";
        this->comboBoxBR->Size = System::Drawing::Size(92, 21);
        this->comboBoxBR->TabIndex = 18;
        // 
        // timer1
        // 
        this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
        // 
        // label1
        // 
        this->label1->AutoSize = true;
        this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label1->Location = System::Drawing::Point(10, 510);
        this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label1->Name = L"label1";
        this->label1->Size = System::Drawing::Size(0, 31);
        this->label1->TabIndex = 19;
        // 
        // CloseCOMbtn
        // 
        this->CloseCOMbtn->Location = System::Drawing::Point(152, 397);
        this->CloseCOMbtn->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
        this->CloseCOMbtn->Name = L"CloseCOMbtn";
        this->CloseCOMbtn->Size = System::Drawing::Size(56, 19);
        this->CloseCOMbtn->TabIndex = 20;
        this->CloseCOMbtn->Text = L"Close COM";
        this->CloseCOMbtn->UseVisualStyleBackColor = true;
        this->CloseCOMbtn->Click += gcnew System::EventHandler(this, &Form1::CloseCOMbtn_Click);
        // 
        // ConDisc_COM
        // 
        this->ConDisc_COM->Location = System::Drawing::Point(152, 443);
        this->ConDisc_COM->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
        this->ConDisc_COM->Name = L"ConDisc_COM";
        this->ConDisc_COM->Size = System::Drawing::Size(92, 19);
        this->ConDisc_COM->TabIndex = 21;
        this->ConDisc_COM->Text = L"Connect COM";
        this->ConDisc_COM->UseVisualStyleBackColor = true;
        this->ConDisc_COM->Click += gcnew System::EventHandler(this, &Form1::ConDisc_COM_Click);
        // 
        // button3
        // 
        this->button3->Location = System::Drawing::Point(152, 479);
        this->button3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
        this->button3->Name = L"button3";
        this->button3->Size = System::Drawing::Size(92, 19);
        this->button3->TabIndex = 22;
        this->button3->Text = L"start Clock";
        this->button3->UseVisualStyleBackColor = true;
        this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
        // 
        // timerClock
        // 
        this->timerClock->Tick += gcnew System::EventHandler(this, &Form1::timerClock_Tick);
        // 
        // label2
        // 
        this->label2->AutoSize = true;
        this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label2->Location = System::Drawing::Point(10, 556);
        this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label2->Name = L"label2";
        this->label2->Size = System::Drawing::Size(0, 31);
        this->label2->TabIndex = 23;
        // 
        // Form1
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->BackColor = System::Drawing::SystemColors::HotTrack;
        this->ClientSize = System::Drawing::Size(1081, 615);
        this->Controls->Add(this->label2);
        this->Controls->Add(this->button3);
        this->Controls->Add(this->ConDisc_COM);
        this->Controls->Add(this->CloseCOMbtn);
        this->Controls->Add(this->label1);
        this->Controls->Add(this->comboBoxBR);
        this->Controls->Add(this->openCOMbtn);
        this->Controls->Add(this->READbutton);
        this->Controls->Add(this->richTextBoxREAD);
        this->Controls->Add(this->SENDbutton);
        this->Controls->Add(this->richTextBoxWRITE);
        this->Controls->Add(this->getCOM);
        this->Controls->Add(this->comboBoxCOM);
        this->Controls->Add(this->dataGridView1);
        this->Controls->Add(this->test2);
        this->Controls->Add(this->richTextBox1);
        this->Controls->Add(this->listBox1);
        this->Controls->Add(this->test1);
        this->Controls->Add(this->button2);
        this->Controls->Add(this->button1);
        this->Controls->Add(this->in_textBox);
        this->Controls->Add(this->out_textBox);
        this->Name = L"Form1";
        this->Text = L"Visual C++";
        this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
        this->ResumeLayout(false);
        this->PerformLayout();

    }
#pragma endregion

   // You can call the functions at a button click. If you prefer, 
    // you can call them by clicking a menu item.
void main()
  {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew Form1());
  }

private: System::Void button_plus_1_Click(System::Object^ sender, System::EventArgs^ e)
  {
    int n = Convert::ToInt32(in_textBox->Text);
    int result = N_header_1::plus_1(n);
    out_textBox->AppendText(String::Format("plus_1({0})={1}\r\n", n, result));
  }

private: System::Void button_plus_2_Click(System::Object^ sender, System::EventArgs^ e)
  {
    N_header_2::plus_2_Click(in_textBox, out_textBox);
  }

         System::Double angka1;
         System::Double angka2;
         System::Double hasil;


  private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
  {


      out_textBox->Clear();

      angka1 = 100;
      angka2 = 200;
      hasil = angka1 + angka2;

      out_textBox->Text = hasil.ToString();



  }
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
    out_textBox->Clear();
    richTextBox1->Clear();
    listBox1->Items->Clear();
}
private: System::Void test1_Click(System::Object^ sender, System::EventArgs^ e) 
{
    listBox1->Items->Clear();
    listBox1->Items->Add(5 + 2);
    listBox1->Items->Add(3 + 2);
}
private: System::Void test2_Click(System::Object^ sender, System::EventArgs^ e) 
{
    richTextBox1->Clear();

    angka1 = 500;
    angka2 = 800;
    hasil = angka1 + angka2;

    richTextBox1->Text = hasil.ToString();
}
private:Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
}


       //build data gridview
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e)
{
    dataGridView1->RowHeadersVisible = false;
    dataGridView1->Columns->Add("Data_1", "Data1");
    dataGridView1->Columns->Add("Data_2", "Data2");
    dataGridView1->Columns->Add("Data_3", "Data3");
    dataGridView1->Columns->Add("Data_4", "Data4");
}



//-------------------------------SERIAL PORT-------------------------------------------------
private: System::Void getCOM_Click(System::Object^ sender, System::EventArgs^ e)
{
    findPorts();
    //timing();
}
       


//private: void Form1::findPorts(void)
//private: void findPorts(void)
private: void findPorts()
{
           // get port names
           array<Object^>^ objectArray = SerialPort::GetPortNames();
           // add string array to combobox
           this->comboBoxCOM->Items->AddRange(objectArray);
}

       //write/send to serial
private: System::Void SENDbutton_Click(System::Object^ sender, System::EventArgs^ e)
{
    // add sender name
    String^ name = this->serialPort1->PortName;
    // grab text and store in send buffer
    String^ message = this->richTextBoxWRITE->Text;
    // write to serial
    if (this->serialPort1->IsOpen) 
    {
        //this->_serialPort->WriteLine(String::Format("<{0}>: {1}",name,message));
        this->serialPort1->WriteLine(message);
        //this->richTextBoxREAD->Text += this->serialPort1->ReadExisting(); 
        //this->richTextBoxREAD->Text = this->serialPort1->ReadLine();
    }
    else
    {
        this->richTextBoxWRITE->Text = "Port Not Opened";
    }

}

       //read from serial
private: System::Void READbutton_Click(System::Object^ sender, System::EventArgs^ e) {

    // check if port is ready for reading
    if (this->serialPort1->IsOpen) 
    {
        // Reset the text in the result label.
        this->richTextBoxREAD->Text = String::Empty;

        // this will read manually
        try {
            //this->richTextBoxREAD->Text = this->serialPort1->ReadLine();
            this->richTextBoxREAD->Text = this->serialPort1->ReadExisting();
        }
        catch (TimeoutException^) {
            this->richTextBoxREAD->Text = "Timeout Exception";
        }
        // Disable the init button
        // the asynchronous operation is done.
        this->button1->Enabled = false;
    }
    else
        // give error warning
        this->richTextBoxREAD->Text = "Port Not Opened";


}



private: System::Void openCOMbtn_Click(System::Object^ sender, System::EventArgs^ e) 
{
    this->richTextBoxREAD->Text = String::Empty;
    if (this->comboBoxCOM->Text == String::Empty || this->comboBoxBR->Text == String::Empty)
        this->richTextBoxREAD->Text = "Please Select Port Settings";
    else 
    {
        try 
        {
            // make sure port isn't open	
            if (!this->serialPort1->IsOpen) 
            {
                this->serialPort1->PortName = this->comboBoxCOM->Text;
                //this->textBox1->Text=this->comboBoxCOM->Text;
                this->serialPort1->BaudRate = Int32::Parse(this->comboBoxBR->Text);
                //this->textBox1->Text=this->comboBoxBR->Text;
                this->richTextBoxWRITE->Text = "Enter Message Here";
                //open serial port 
                this->serialPort1->Open();
                //this->progressBar1->Value = 100;
            }
            else
                this->richTextBoxWRITE->Text = "Port isn't openned";
        }
        catch (UnauthorizedAccessException^) 
        {
            this->richTextBoxWRITE->Text = "UnauthorizedAccess";
        }
    }

}


       System::Int64 Second;
       System::Int64 Minute;
       System::Int64 Sec;
       System::Int64 Min;




//int main()
private: void  timing()
{
           std::time_t now = std::time(nullptr);
           std::tm* localTime = std::localtime(&now);
           char buffer[13];
           std::strftime(buffer, sizeof(buffer), "%I.%M.%S.%f %p", localTime);
           std::cout << "The formatted time is " << buffer << std::endl;
           //this->label1->Text = buffer
           //return 0;
}

       // Get current date/time, format is YYYY-MM-DD.HH:mm:ss       
const std::string currentDateTime()  //function
       {
           time_t     now = time(0);
           struct tm  tstruct;
           char       buf[80];
           tstruct = *localtime(&now);
           // Visit http://en.cppreference.com/w/cpp/chrono/c/strftime
           // for more information about date/time format
           strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);

           return buf;
       }




std::chrono::system_clock::time_point Now() //function
{
    return std::chrono::system_clock::now();
}








private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) 
{
   // label1->Text = datetime()
    //this->timer1->Enabled = true;
    //this->timer1->Interval = 500;

    //main();

    //this->richTextBoxREAD->Text += this->serialPort1->ReadLine();
    this->richTextBoxREAD->Text += this->serialPort1->ReadExisting();


 
}



private: System::Void CloseCOMbtn_Click(System::Object^ sender, System::EventArgs^ e) 
{
    //close serialPort
    this->serialPort1->Close();
    // update progress bar
    //this->progressBar1->Value = 0;
    // Enable read button
    //this->button4->Enabled = true;
    // Enable the init button
    //this->button1->Enabled = true;
}
  private: System::Void ConDisc_COM_Click(System::Object^ sender, System::EventArgs^ e)
  {
      try
      {
          if (ConDisc_COM->Text == "Connect COM")
          {
              if (serialPort1->IsOpen)
              {
                  serialPort1->Close();
              }
              serialPort1->PortName = comboBoxCOM->Text;
              serialPort1->BaudRate = Int32::Parse(comboBoxBR->Text); //convert dari text to number
              serialPort1->Open();
              ConDisc_COM->Text = "Disconnect COM";
              //this->timer1->Enabled = true;
              this->timer1->Interval = 100;
          }
          else if (ConDisc_COM->Text == "Disconnect COM")
          {
              serialPort1->Close();
              ConDisc_COM->Text = "Connect COM";
              this->timer1->Enabled = false;

          }


      }
      catch (...)
      {
          MessageBox::Show("Something is error");
      }
  }




private: System::Void serialPort1_DataReceived(System::Object^ sender, System::IO::Ports::SerialDataReceivedEventArgs^ e)
  {
      //this->richTextBoxREAD->Text = this->serialPort1->ReadExisting();
      richTextBoxREAD->AppendText(serialPort1->ReadLine() + "\n");
      //ReceivedText(serialPort1->ReadExisting());
  }

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) //start clock
{
    this->timerClock->Enabled = true;
}

       //delay ok tp agak frezee
void Delay(double dblsecs) {
    const double onesec = 1.0 / (1440.0 * 60.0);
           std::chrono::duration<double> waitTime(onesec + dblsecs);
           auto endTime = std::chrono::system_clock::now() + waitTime;
           while (std::chrono::system_clock::now() <= endTime) {
               // Do nothing
               //Application::DoEvents();
           }
       }


private: System::Void timerClock_Tick(System::Object^ sender, System::EventArgs^ e) 
{
    // current date and time on the current system
    time_t now = time(0);

    // convert now to string form
    char* date_time = ctime(&now); //convert datetime to string
    
    //string output = $"{n.CreatedDate.ToString("yyyy - MM - dd HH : mm:ss")} ...";
    //Date_Label.Text = DateString
    //this->label1->Text = TimeString;
    //String now_timex = currentDateTime();
    //this->label1->Text = gcnew System::String(currentDateTime());
    //https://stackoverflow.com/questions/59596962/cpp-visual-studio-2017-clr-form-label-wont-take-my-string
    this->label1->Text = gcnew System::String(date_time);  //cara spy bisa muncul sebagai label/richtext OK
    //--------------------------------------------------------


    //https://www.codeproject.com/Questions/465452/DateTime-Format-in-Cplusplus-WinForm
    DateTime^ dt = DateTime::Now;  //ok define variable dengan ^
    //this->label2->Text = dt->ToString("ddd/MMMM/yy, hh:mm:ss tt");  //ok
    //this->label2->Text = dt->ToString("hh:mm:ss tt");  //ok  berdasarkan AM PM
    
    
    //Delay(2); //ok
    this->label2->Text = dt->ToString("HH:mm:ss");  //ok  24H ??
    //Delay(3);
    //this->label2->Text = dt->ToString("hh:mm:ss tt");  //ok  
    

    //auto local = zoned_time{ current_zone(), system_clock::now() };
    //this->label1->Text = Time.Format(Now, "HH:mm:ss");
    //this->label1->Text = DateTime(Now, "HH:mm:ss");

    //COleDateTime timeNow;
    //timeNow = COleDateTime::GetCurrentTime();

    //this->label1->Text = ctime(time_t time);
    //Time.Format(Now, "HH:mm:ss")


    //Second = 0;
   // Minute = 0;

    //to be executed on pressing the Start Button

    //Second++;

    //if (Second == 60)
    //{
     //   Second = 0;
     //   Minute++;
    //}
    //Sec = Convert::ToString(Second);
    //Min = Convert::ToString(Minute);
    //label1->Text = Min + ":" + Sec;

    //std::string afisaj = "You have reached elapsed time";
    //std::string info = "Paused";

}
}; // end of class Form1
} // end of namespace CppCLRWinFormsProject

