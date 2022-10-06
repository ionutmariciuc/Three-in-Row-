//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Server.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfServer *fServer;
//---------------------------------------------------------------------------
__fastcall TfServer::TfServer(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfServer::btnExitClick(TObject *Sender)
{
   exit(0);
}
//---------------------------------------------------------------------------
