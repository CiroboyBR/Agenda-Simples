/***************************************************************
 * Name:      AgendaMain.h
 * Purpose:   Defines Application Frame
 * Author:    Ciro Meneses (ciroccuva@hotmail.com)
 * Created:   2015-10-18
 * Copyright: Ciro Meneses (www.programacaopradiversao.blogspot.com.br)
 * License:
 **************************************************************/

#ifndef AGENDAMAIN_H
#define AGENDAMAIN_H

//(*Headers(AgendaFrame)
#include <wx/stattext.h>
#include <wx/menu.h>
#include <wx/textctrl.h>
#include <wx/sashwin.h>
#include <wx/laywin.h>
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
//*)

class AgendaFrame: public wxFrame
{
    public:

        AgendaFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~AgendaFrame();

    private:

        //(*Handlers(AgendaFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnButton2Click(wxCommandEvent& event);
        void OnButton1Click1(wxCommandEvent& event);
        void OnButton3Click(wxCommandEvent& event);
        //*)

        //(*Identifiers(AgendaFrame)
        static const long ID_BUTTON1;
        static const long ID_BUTTON2;
        static const long ID_BUTTON3;
        static const long ID_STATICTEXT1;
        static const long ID_TEXTCTRL1;
        static const long ID_STATICTEXT2;
        static const long ID_TEXTCTRL2;
        static const long ID_TEXTCTRL3;
        static const long ID_SASHLAYOUTWINDOW1;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(AgendaFrame)
        wxStaticText* StaticText2;
        wxSashLayoutWindow* SashLayoutWindow1;
        wxButton* Button1;
        wxStaticText* StaticText1;
        wxButton* Button2;
        wxButton* Button3;
        wxStatusBar* StatusBar1;
        wxTextCtrl* TextCtrl2;
        wxTextCtrl* TextCtrl1;
        wxTextCtrl* TextCtrl3;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // AGENDAMAIN_H
