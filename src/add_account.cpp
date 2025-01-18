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
            connect(fieldTitleOfAccount, &QPushButton::clicked, this, [=](){
               fieldTitleOfAccount->hide();
               fieldTitleOfAccountLine = new  QLineEdit("Title of account", this);
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
               "QPushButton {" 
               "background-color:#282828;" // цвет фона
               "border-radius: 9.86px;"
               "border: 2.5px solid white;" // закругление углов
               "color: white;" // цвет вводимого текста
               "padding-left: 12px;" //отступ вводимого текста
               "font-size: 34.5px;"
               "text-align: left;"
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
            connect(fieldUserName, &QPushButton::clicked, this, [=](){
               fieldUserName->hide();
               fieldUserNameLine = new  QLineEdit("Username", this);
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

            QPushButton *fieldPasword = new QPushButton("Password", this);
            fieldPasword->setCursor(Qt::PointingHandCursor);
            fieldPasword->setGeometry(25, 299.86, 690, 78.86);
            fieldPasword->setStyleSheet(
               "QPushButton {" 
               "background-color:#282828;" // цвет фона
               "border-radius: 9.86px;"
               "border: 2.5px solid white;" // закругление углов
               "color: white;" // цвет вводимого текста
               "padding-left: 12px;" //отступ вводимого текста
               "font-size: 34.5px;"
               "text-align: left;"
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
            connect(fieldPasword, &QPushButton::clicked, this, [=](){
            fieldPasword->hide();
            fieldPaswordLine = new  QLineEdit("Password", this);
            fieldPaswordLine->setCursor(Qt::PointingHandCursor);
            fieldPaswordLine->setGeometry(25, 299.86, 690, 78.86);
            fieldPaswordLine->setStyleSheet(
               "QLineEdit {" 
               "background-color: white;"
               "color:black;"
               "border-radius: 9.86px;"
               "padding-left: 13px;"//отступ вводимого текста
               "font-size: 34.5px;"
               "}"
               );
               fieldPaswordLine->setFocus();
               fieldPaswordLine->show();
               });
            QPushButton *fieldSite = new QPushButton("Site", this);
            fieldSite->setCursor(Qt::PointingHandCursor);
            fieldSite->setGeometry(25, 477, 690, 78.86);
            fieldSite->setStyleSheet(
               " QPushButton {" 
               "background-color:#282828;" // цвет фона
               "border-radius: 9.86px;"
               "padding-bottom: 5px;" 
               "border: 2.5px solid white;" // закругление углов
               "color: white;" // цвет вводимого текста
               "padding-left: 12px;" //отступ вводимого текста
               "font-size: 34.5px;"
               "text-align: left;"
               ""
               "}"
               " QPushButton:hover {"
               "background-color: white;"
               "color:black;"
               "border-radius: 9.86px;"
               "padding-bottom: 5px;" 
               "padding-left: 12px;"
               "font-size: 34.5px;"
               "}"
            );
            connect(fieldSite, &QPushButton::clicked, this, [=](){
            fieldSite->hide();
            fieldSiteLine = new  QLineEdit("Site", this);
            fieldSiteLine->setCursor(Qt::PointingHandCursor);
            fieldSiteLine->setGeometry(25, 477, 690, 78.86);
            fieldSiteLine->setStyleSheet(
               "QLineEdit {" 
               "background-color: white;"
               "color:black;"
               "border-radius: 9.86px;"
               "padding-left: 13px;" //отступ вводимого текста
               "padding-bottom: 5px;" 
               "font-size: 34.5px;"
               "}"
               );
               fieldSiteLine->setFocus();
               fieldSiteLine->show();
               });
            QPushButton *fieldNotes = new QPushButton("Notes", this);
            fieldNotes->setCursor(Qt::PointingHandCursor);
            fieldNotes->setGeometry(25, 656, 690, 197.14);
            fieldNotes->setStyleSheet(
               "QPushButton {" 
               "background-color:#282828;" // цвет фона
               "border-radius: 9.86px;"
               "border: 2.5px solid white;" // закругление углов
               "color: white;" // цвет вводимого текста
               "padding-left: 12px;" //отступ вводимого текста
               "padding-bottom: 146px;"  
               "font-size: 34.5px;"
               "text-align: left;"
               ""
               "}"
               "QPushButton:hover {"
               "background-color: white;"
               "color:black;"
               "padding-bottom: 146px;" 
               "border-radius: 9.86px;"
               "padding-left: 12px;"
               "font-size: 34.5px;"
               "}"
            );
            connect(fieldNotes, &QPushButton::clicked, this, [=](){
            fieldNotes->hide();
            fieldNotesLine = new  QPlainTextEdit("Notes", this);
            fieldNotesLine->setCursor(Qt::PointingHandCursor);
            fieldNotesLine->moveCursor(QTextCursor::End);
            fieldNotesLine->setGeometry(25, 656, 690, 197.14);
            fieldNotesLine->setStyleSheet(
               "QPlainTextEdit {" 
               "background-color: white;"
               "color:black;"
               "border-radius: 9.86px;"
               "padding-left: 12px;"//отступ вводимого текста
               "font-size: 34.5px;"
               "text-align: left;"
               "}"
               );
               fieldNotesLine->setFocus();
               fieldNotesLine->show();
               });
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
               QString filePath = "../data.json";
               QJsonObject newData;
                           newData["title"] = fieldTitleOfAccountLine->text();
                           newData["username"] = fieldUserNameLine->text();
                           newData["password"] = fieldPaswordLine->text();
                           newData["site"] = fieldSiteLine->text();
                           newData["notes"] = fieldNotesLine->toPlainText();

               QFile file(filePath);
            if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
                  qWarning() << "1:" << file.errorString();
            return;
    }

    // Читаем содержимое файла
    QByteArray jsonData = file.readAll();
    file.close();

    // Парсим JSON данные
    QJsonDocument jsonDoc = QJsonDocument::fromJson(jsonData);
    if (jsonDoc.isNull()) {
        qWarning() << "2";
        return;
    }
   

    // Получаем массив
    QJsonArray jsonArray = jsonDoc.array();

    // Добавляем новый объект в массив
    jsonArray.append(newData);

    // Создаем новый JSON документ с измененным массивом
    QJsonDocument newJsonDoc(jsonArray);

    // Открываем файл для записи
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qWarning() << "4" << file.errorString();
        return;
    }

    // Записываем измененные данные обратно в файл
    file.write(newJsonDoc.toJson());
    file.close();

               
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