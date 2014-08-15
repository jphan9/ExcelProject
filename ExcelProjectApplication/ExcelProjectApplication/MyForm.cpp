#include "MyForm.h"

namespace ExcelProjectApplication {    // Change this!!
    using namespace System;
    using namespace System::Windows::Forms;

    [STAThread]
    int main(array<System::String ^> ^args)
    {
        Application::EnableVisualStyles();
        Application::SetCompatibleTextRenderingDefault(false); 
        Application::Run(gcnew MyForm());
        return 0;
    }
}