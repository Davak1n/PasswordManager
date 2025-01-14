#include "add_account.hpp"


    AddAccount::AddAccount(QWidget *parent):QMainWindow(parent) {
     
          this->setFixedSize(740, 970);
          this->setWindowIcon(QIcon(QPixmap("img/password.svg")));
          this->setWindowTitle("                                                                                                  Password manager");
          this->setStyleSheet(
                "QMainWindow{"
                "background-color:#282828;"
                "}"
          );
            QPushButton *fieldTitleOfAccount = new QPushButton("Title of account", this);
            fieldTitleOfAccount->setCursor(Qt::PointingHandCursor);
            fieldTitleOfAccount->setGeometry(25, 20, 690, 78.86);
            fieldTitleOfAccount->setStyleSheet(
               "QPushButton {" 
               "background-color:#282828;" // цвет фона
               "border-radius: 9.86px;"
               "border: 2.5px solid white;" // закругление углов
               "color: white;" // цвет вводимого текста
               "text-align: left;"
               "padding-left: 12px;" //отступ вводимого текста
               "font-size: 34.5px;"
               ""
               "}"
               "QPushButton:hover {"
               "background-color: white;"
               "color:black;"
               "border-radius: 9.86px;"
               "padding-left: 12px;"
               "font-size: 34.5px;"
               "}"
            );
            connect(fieldTitleOfAccount, &QPushButton::clicked, this, [this](){
               fieldTitleOfAccount->hide();
               QLineEdit *fieldTitleOfAccountLine = new  QLineEdit("Title of account", this);
               fieldTitleOfAccountLine->setCursor(Qt::PointingHandCursor);
               fieldTitleOfAccountLine->setGeometry(25, 20, 690, 78.86);
               fieldTitleOfAccountLine->setStyleSheet(
                  "QLineEdit {" 
                  "background-color: white;"
                  "color:black;"
                  "border-radius: 9.86px;"
                  "padding-left: 13px;"//отступ вводимого текста
                  "font-size: 34.5px;"
                  "}"
                  );
                  fieldTitleOfAccountLine->setFocus();
                  fieldTitleOfAccountLine->show();
            });

            QPushButton *fieldUserName = new QPushButton("Username", this);
            fieldUserName->setCursor(Qt::PointingHandCursor);
            fieldUserName->setGeometry(25, 199, 690, 78.86);
            fieldUserName->setStyleSheet(
               "QLineEdit {" 
               "background-color:#282828;" // цвет фона
               "border-radius: 9.86px;"
               "border: 2.5px solid white;" // закругление углов
               "color: white;" // цвет вводимого текста
               "padding-left: 12px;" //отступ вводимого текста
               "font-size: 34.5px;"
               ""
               "}"
               "QLineEdit:hover {"
               "background-color: white;"
               "color:black;"
               "border-radius: 9.86px;"
               "padding-left: 12px;"
               "font-size: 34.5px;"
               "}"
            );
            connect(fieldUserName, &QPushButton::clicked, this, [this](){
               fieldUserName->hide();
               QLineEdit *fieldUserNameLine = new  QLineEdit("Username", this);
               fieldUserNameLine->setCursor(Qt::PointingHandCursor);
               fieldUserNameLine->setGeometry(25, 199, 690, 78.86);
               fieldUserNameLine->setStyleSheet(
                  "QLineEdit {" 
                  "background-color: white;"
                  "color:black;"
                  "border-radius: 9.86px;"
                  "padding-left: 13px;"       //отступ вводимого текста
                  "font-size: 34.5px;"
                  "}"
                  );
                  fieldUserNameLine->setFocus();
                  fieldUserNameLine->show();
            });

            QLineEdit *fieldPasword = new QLineEdit("Password", this);
            fieldPasword->setReadOnly(1);
            connect(fieldPasword, &QLineEdit::selectionChanged, [=]() {fieldPasword->setSelection(0, 0);
            });
            fieldPasword->setCursor(Qt::PointingHandCursor);
            fieldPasword->setGeometry(25, 299.86, 690, 78.86);
            fieldPasword->setStyleSheet(
               "QLineEdit {" 
               "background-color:#282828;" // цвет фона
               "border-radius: 9.86px;"
               "border: 2.5px solid white;" // закругление углов
               "color: white;" // цвет вводимого текста
               "padding-left: 12px;" //отступ вводимого текста
               "font-size: 34.5px;"
               ""
               "}"
               "QLineEdit:hover {"
               "background-color: white;"
               "color:black;"
               "border-radius: 9.86px;"
               "padding-left: 12px;"
               "font-size: 34.5px;"
               "}"
            );
            QLineEdit *fieldSite = new QLineEdit("Site", this);
            fieldSite->setReadOnly(1);
            connect(fieldSite, &QLineEdit::selectionChanged, [=]() {fieldSite->setSelection(0, 0);
            });
            fieldSite->setCursor(Qt::PointingHandCursor);
            fieldSite->setGeometry(25, 477, 690, 78.86);
            fieldSite->setStyleSheet(
               "QLineEdit {" 
               "background-color:#282828;" // цвет фона
               "border-radius: 9.86px;"
               "padding-bottom: 5px;" 
               "border: 2.5px solid white;" // закругление углов
               "color: white;" // цвет вводимого текста
               "padding-left: 12px;" //отступ вводимого текста
               "font-size: 34.5px;"
               ""
               "}"
               "QLineEdit:hover {"
               "background-color: white;"
               "color:black;"
               "border-radius: 9.86px;"
               "padding-bottom: 5px;" 
               "padding-left: 12px;"
               "font-size: 34.5px;"
               "}"
            );
            QLineEdit *fieldNotes = new QLineEdit("Notes", this);
            fieldNotes->setReadOnly(1);
            connect(fieldNotes, &QLineEdit::selectionChanged, [=]() {fieldNotes->setSelection(0, 0);
            });
            fieldNotes->setCursor(Qt::PointingHandCursor);
            fieldNotes->setGeometry(25, 656, 690, 197.14);
            fieldNotes->setStyleSheet(
               "QLineEdit {" 
               "background-color:#282828;" // цвет фона
               "border-radius: 9.86px;"
               "border: 2.5px solid white;" // закругление углов
               "color: white;" // цвет вводимого текста
               "padding-left: 12px;" //отступ вводимого текста
               "padding-bottom: 146px;"  
               "font-size: 34.5px;"
               ""
               "}"
               "QLineEdit:hover {"
               "background-color: white;"
               "color:black;"
               "padding-bottom: 146px;" 
               "border-radius: 9.86px;"
               "padding-left: 12px;"
               "font-size: 34.5px;"
               "}"
            );
        QPushButton *btnEntrySave = new QPushButton("Save",this);
        btnEntrySave->setCursor(Qt::PointingHandCursor);
        btnEntrySave->setGeometry(160, 900, 200, 50);
        btnEntrySave->setStyleSheet(
        " QPushButton{"
        "background-color: #424242;"
        "color: white;"
        "border: 2.5px solid white;"
        "font-size: 30px;"
        "border-radius: 25px;"
        "}"
        "QPushButton:hover {"  
        "color:black;"
        "background-color: #5CB4C7;"
        "border: none;"
        "}"
        );
        connect (btnEntrySave, &QPushButton::clicked, [this]()
        {
            this->close();

            MainWindow *win = new MainWindow();
            win->show();
        });
        QPushButton *btnEntryCancel = new QPushButton("Cancel",this);
        btnEntryCancel->setCursor(Qt::PointingHandCursor);
        btnEntryCancel->setGeometry(380, 900, 200, 50);
        btnEntryCancel->setStyleSheet(
        " QPushButton{"
        "background-color: #424242;"
        "border: 2.5px solid white;"
        "color: white;"
        "font-size: 30px;"
        "border-radius: 25px;"
        "}"  
        "QPushButton:hover {"  
        "background-color: white;"
        "color:black;"
        "}"
        );
        connect (btnEntryCancel, &QPushButton::clicked, [this]()
        {
            this->close();

            MainWindow *win = new MainWindow();
            win->show();
        });



}
AddAccount::~AddAccount() {}