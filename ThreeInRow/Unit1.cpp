//---------------------------------------------------------------------------

#include <vcl.h>

#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

class Table{
    public:
        char adrese_Tabla[3][3];
        TImage *imagini_Tabla[3][3];
        Table()
        {
        }

};


class Player{
 public:
    char playerx;
    char playero;

    void setPlayer(int val){
        if(val == 0)
        {
        playerx ='a';
        playero ='n';

        }
        else
        {
         playerx ='n';
         playero ='a';
        }
    }
    Player()
    {
    }
};

class JOC{

 public:
        Table tablaDeJoc;
        Player jucatori;
        int changeValue;



        char Verificari(){

            if(tablaDeJoc.adrese_Tabla[0][0]==tablaDeJoc.adrese_Tabla[1][0]==tablaDeJoc.adrese_Tabla[2][0]=='x') return 'x';
           else  if(tablaDeJoc.adrese_Tabla[0][1]==tablaDeJoc.adrese_Tabla[1][1]==tablaDeJoc.adrese_Tabla[2][1]=='x') return 'x';
           else  if(tablaDeJoc.adrese_Tabla[0][2]==tablaDeJoc.adrese_Tabla[1][2]==tablaDeJoc.adrese_Tabla[2][2]=='x') return 'x';
           else  if(tablaDeJoc.adrese_Tabla[0][0]==tablaDeJoc.adrese_Tabla[0][1]==tablaDeJoc.adrese_Tabla[0][2]=='x') return 'x';
           else  if(tablaDeJoc.adrese_Tabla[1][0]==tablaDeJoc.adrese_Tabla[1][1]==tablaDeJoc.adrese_Tabla[1][2]=='x') return 'x';
           else  if(tablaDeJoc.adrese_Tabla[2][0]==tablaDeJoc.adrese_Tabla[2][1]==tablaDeJoc.adrese_Tabla[2][2]=='x') return 'x';
           else  if(tablaDeJoc.adrese_Tabla[0][0]==tablaDeJoc.adrese_Tabla[1][1]==tablaDeJoc.adrese_Tabla[2][2]=='x') return 'x';
           else  if(tablaDeJoc.adrese_Tabla[0][2]==tablaDeJoc.adrese_Tabla[1][1]==tablaDeJoc.adrese_Tabla[2][0]=='x') return 'x';

            if(tablaDeJoc.adrese_Tabla[0][0]==tablaDeJoc.adrese_Tabla[1][0]==tablaDeJoc.adrese_Tabla[2][0]=='o') return 'o';
          else if(tablaDeJoc.adrese_Tabla[0][1]==tablaDeJoc.adrese_Tabla[1][1]==tablaDeJoc.adrese_Tabla[2][1]=='o') return 'o';
          else  if(tablaDeJoc.adrese_Tabla[0][2]==tablaDeJoc.adrese_Tabla[1][2]==tablaDeJoc.adrese_Tabla[2][2]=='o') return 'o';
          else  if(tablaDeJoc.adrese_Tabla[0][0]==tablaDeJoc.adrese_Tabla[0][1]==tablaDeJoc.adrese_Tabla[0][2]=='o') return 'o';
          else   if(tablaDeJoc.adrese_Tabla[1][0]==tablaDeJoc.adrese_Tabla[1][1]==tablaDeJoc.adrese_Tabla[1][2]=='o') return 'o';
          else   if(tablaDeJoc.adrese_Tabla[2][0]==tablaDeJoc.adrese_Tabla[2][1]==tablaDeJoc.adrese_Tabla[2][2]=='o') return 'o';
          else   if(tablaDeJoc.adrese_Tabla[0][0]==tablaDeJoc.adrese_Tabla[1][1]==tablaDeJoc.adrese_Tabla[2][2]=='o') return 'o';
          else   if(tablaDeJoc.adrese_Tabla[0][2]==tablaDeJoc.adrese_Tabla[1][1]==tablaDeJoc.adrese_Tabla[2][0]=='o') return 'o';

        }

        int ChangePlayerTemp(){
        changeValue = 0;
         return changeValue;
        }
        void ChangePlayer(int changeValue){
          jucatori.setPlayer(changeValue);
        }



};



TForm1 *Form1;
JOC joc_propriu;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
         getImages(joc_propriu.tablaDeJoc.imagini_Tabla);
          joc_propriu.ChangePlayerTemp();



}

//---------------------------------------------------------------------------




void __fastcall TForm1::Image9Click(TObject *Sender)
{
char verif;
  if(joc_propriu.changeValue==0){
        joc_propriu.ChangePlayer(joc_propriu.changeValue);
        if(joc_propriu.jucatori.playerx=='a'){
          joc_propriu.tablaDeJoc.adrese_Tabla[0][0] = 'x';
          Image9->Picture->Bitmap->LoadFromFile("C:\\Users\\maric\\Desktop\\ThreeInRow\\x130x130.bmp") ;
        verif = joc_propriu.Verificari();
          joc_propriu.changeValue=1;

        }
  }
  else{
     if(joc_propriu.changeValue==1){
        joc_propriu.ChangePlayer(joc_propriu.changeValue);
        if(joc_propriu.jucatori.playero=='a'){
        joc_propriu.tablaDeJoc.adrese_Tabla[0][0] = 'o';
          Image9->Picture->Bitmap->LoadFromFile("C:\\Users\\maric\\Desktop\\ThreeInRow\\130x130.bmp");
         verif=  joc_propriu.Verificari();
          joc_propriu.changeValue=0;
  }
  }
  }
  if(verif =='x') { Label1->Caption="X winer";    }
  if(verif == 'o')  Label1->Caption="O winer";
  if(verif == 'n')  Label1->Caption="NO winer";

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image8Click(TObject *Sender)
{       char verif;
if(joc_propriu.changeValue==0){
        joc_propriu.ChangePlayer(joc_propriu.changeValue);
        if(joc_propriu.jucatori.playerx=='a'){
          joc_propriu.tablaDeJoc.adrese_Tabla[0][1] = 'x';
          Image8->Picture->Bitmap->LoadFromFile("C:\\Users\\maric\\Desktop\\ThreeInRow\\x130x130.bmp") ;
         verif=  joc_propriu.Verificari();
          joc_propriu.changeValue=1;

        }
  }
  else{
     if(joc_propriu.changeValue==1){
        joc_propriu.ChangePlayer(joc_propriu.changeValue);
        if(joc_propriu.jucatori.playero=='a'){
        joc_propriu.tablaDeJoc.adrese_Tabla[0][1] = 'o';
          Image8->Picture->Bitmap->LoadFromFile("C:\\Users\\maric\\Desktop\\ThreeInRow\\130x130.bmp");
         verif=  joc_propriu.Verificari();
          joc_propriu.changeValue=0;
  }
  }
  }
   if(verif =='x')  Label1->Caption="X winer";
  if(verif == 'o')  Label1->Caption="O winer";
  if(verif == 'n')  Label1->Caption="NO winer";




}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image7Click(TObject *Sender)
{      char verif;
if(joc_propriu.changeValue==0){
        joc_propriu.ChangePlayer(joc_propriu.changeValue);

        if(joc_propriu.jucatori.playerx=='a'){
          joc_propriu.tablaDeJoc.adrese_Tabla[0][2] = 'x';
          Image7->Picture->Bitmap->LoadFromFile("C:\\Users\\maric\\Desktop\\ThreeInRow\\x130x130.bmp") ;
         verif= joc_propriu.Verificari();
          joc_propriu.changeValue=1;
        }
  }
  else{
     if(joc_propriu.changeValue==1){
        joc_propriu.ChangePlayer(joc_propriu.changeValue);

        if(joc_propriu.jucatori.playero=='a'){
        joc_propriu.tablaDeJoc.adrese_Tabla[0][2] = 'o';
          Image7->Picture->Bitmap->LoadFromFile("C:\\Users\\maric\\Desktop\\ThreeInRow\\130x130.bmp");
           verif=joc_propriu.Verificari();
          joc_propriu.changeValue=0;
  }
  }
  }
  if(verif =='x')  Label1->Caption="X winer";
  if(verif == 'o')  Label1->Caption="O winer";
  if(verif == 'n')  Label1->Caption="NO winer";



}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image6Click(TObject *Sender)
{     char verif;
if(joc_propriu.changeValue==0){
        joc_propriu.ChangePlayer(joc_propriu.changeValue);
        if(joc_propriu.jucatori.playerx=='a'){
          joc_propriu.tablaDeJoc.adrese_Tabla[1][0] = 'x';
          Image6->Picture->Bitmap->LoadFromFile("C:\\Users\\maric\\Desktop\\ThreeInRow\\x130x130.bmp") ;
         verif=  joc_propriu.Verificari();
          joc_propriu.changeValue=1;
        }
  }
  else{
     if(joc_propriu.changeValue==1){
        joc_propriu.ChangePlayer(joc_propriu.changeValue);
        if(joc_propriu.jucatori.playero=='a'){
        joc_propriu.tablaDeJoc.adrese_Tabla[1][0] = 'o';
          Image6->Picture->Bitmap->LoadFromFile("C:\\Users\\maric\\Desktop\\ThreeInRow\\130x130.bmp");
         verif=    joc_propriu.Verificari();
          joc_propriu.changeValue=0;
  }
  }
  }
  if(verif =='x')  Label1->Caption="X winer";
  if(verif == 'o')  Label1->Caption="O winer";
  if(verif == 'n')  Label1->Caption="NO winer";


}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image5Click(TObject *Sender)
{  char verif;
if(joc_propriu.changeValue==0){
        joc_propriu.ChangePlayer(joc_propriu.changeValue);
        if(joc_propriu.jucatori.playerx=='a'){
          joc_propriu.tablaDeJoc.adrese_Tabla[1][1] = 'x';
          Image5->Picture->Bitmap->LoadFromFile("C:\\Users\\maric\\Desktop\\ThreeInRow\\x130x130.bmp") ;
          verif=  joc_propriu.Verificari();
          joc_propriu.changeValue=1;
        }
  }
  else{
     if(joc_propriu.changeValue==1){
        joc_propriu.ChangePlayer(joc_propriu.changeValue);
        if(joc_propriu.jucatori.playero=='a'){
        joc_propriu.tablaDeJoc.adrese_Tabla[1][1] = 'o';
          Image5->Picture->Bitmap->LoadFromFile("C:\\Users\\maric\\Desktop\\ThreeInRow\\130x130.bmp");
         verif=    joc_propriu.Verificari();
          joc_propriu.changeValue=0;
  }
  }
  }
  if(verif =='x')  Label1->Caption="X winer";
  if(verif == 'o')  Label1->Caption="O winer";
  if(verif == 'n')  Label1->Caption="NO winer";

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image4Click(TObject *Sender)
{     char verif;
if(joc_propriu.changeValue==0){
        joc_propriu.ChangePlayer(joc_propriu.changeValue);
        if(joc_propriu.jucatori.playerx=='a'){
          joc_propriu.tablaDeJoc.adrese_Tabla[1][2] = 'x';
          Image4->Picture->Bitmap->LoadFromFile("C:\\Users\\maric\\Desktop\\ThreeInRow\\x130x130.bmp") ;
         verif=   joc_propriu.Verificari();
          joc_propriu.changeValue=1;
        }
  }
  else{
     if(joc_propriu.changeValue==1){
        joc_propriu.ChangePlayer(joc_propriu.changeValue);
        if(joc_propriu.jucatori.playero=='a'){
        joc_propriu.tablaDeJoc.adrese_Tabla[1][2] = 'o';
          Image4->Picture->Bitmap->LoadFromFile("C:\\Users\\maric\\Desktop\\ThreeInRow\\130x130.bmp");
         verif=    joc_propriu.Verificari();
          joc_propriu.changeValue=0;
  }
  }
  }
  if(verif =='x')  Label1->Caption="X winer";
  if(verif == 'o')  Label1->Caption="O winer";
  if(verif == 'n')  Label1->Caption="NO winer";

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image1Click(TObject *Sender)
{        char verif;
if(joc_propriu.changeValue==0){
        joc_propriu.ChangePlayer(joc_propriu.changeValue);
        if(joc_propriu.jucatori.playerx=='a'){
          joc_propriu.tablaDeJoc.adrese_Tabla[2][0] = 'x';
          Image1->Picture->Bitmap->LoadFromFile("C:\\Users\\maric\\Desktop\\ThreeInRow\\x130x130.bmp") ;
          verif=  joc_propriu.Verificari();
          joc_propriu.changeValue=1;
        }
  }
  else{
     if(joc_propriu.changeValue==1){
        joc_propriu.ChangePlayer(joc_propriu.changeValue);
        if(joc_propriu.jucatori.playero=='a'){
        joc_propriu.tablaDeJoc.adrese_Tabla[2][0] = 'o';
          Image1->Picture->Bitmap->LoadFromFile("C:\\Users\\maric\\Desktop\\ThreeInRow\\130x130.bmp");
          verif=   joc_propriu.Verificari();
          joc_propriu.changeValue=0;
  }
  }
  }
   if(verif =='x')  Label1->Caption="X winer";
  if(verif == 'o')  Label1->Caption="O winer";
  if(verif == 'n')  Label1->Caption="NO winer";


}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image2Click(TObject *Sender)
{     char verif;
if(joc_propriu.changeValue==0){
        joc_propriu.ChangePlayer(joc_propriu.changeValue);
        if(joc_propriu.jucatori.playerx=='a'){
          joc_propriu.tablaDeJoc.adrese_Tabla[2][1] = 'x';
          Image2->Picture->Bitmap->LoadFromFile("C:\\Users\\maric\\Desktop\\ThreeInRow\\x130x130.bmp") ;
        verif=   joc_propriu.Verificari();
          joc_propriu.changeValue=1;
        }
  }
  else{
     if(joc_propriu.changeValue==1){
        joc_propriu.ChangePlayer(joc_propriu.changeValue);
        if(joc_propriu.jucatori.playero=='a'){
        joc_propriu.tablaDeJoc.adrese_Tabla[2][1] = 'o';
          Image2->Picture->Bitmap->LoadFromFile("C:\\Users\\maric\\Desktop\\ThreeInRow\\130x130.bmp");
          verif=   joc_propriu.Verificari();
          joc_propriu.changeValue=0;
  }
  }
  }
   if(verif =='x')  Label1->Caption="X winer";
  if(verif == 'o')  Label1->Caption="O winer";
  if(verif == 'n')  Label1->Caption="NO winer";

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image3Click(TObject *Sender)
{     char verif;
if(joc_propriu.changeValue==0){
        joc_propriu.ChangePlayer(joc_propriu.changeValue);
        if(joc_propriu.jucatori.playerx=='a'){
          joc_propriu.tablaDeJoc.adrese_Tabla[2][2] = 'x';
          Image3->Picture->Bitmap->LoadFromFile("C:\\Users\\maric\\Desktop\\ThreeInRow\\x130x130.bmp") ;
         verif=   joc_propriu.Verificari();
          joc_propriu.changeValue=1;

        }
  }
  else{
     if(joc_propriu.changeValue==1){
        joc_propriu.ChangePlayer(joc_propriu.changeValue);
        if(joc_propriu.jucatori.playero=='a'){
        joc_propriu.tablaDeJoc.adrese_Tabla[2][2] = 'o';
          Image3->Picture->Bitmap->LoadFromFile("C:\\Users\\maric\\Desktop\\ThreeInRow\\130x130.bmp");
          verif=   joc_propriu.Verificari();
          joc_propriu.changeValue=0;

  }
  }
  }
  if(verif =='x')  Label1->Caption="X winer";
  if(verif == 'o')  Label1->Caption="O winer";
  if(verif == 'n')  Label1->Caption="NO winer";
}
//---------------------------------------------------------------------------

