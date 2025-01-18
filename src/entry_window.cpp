#include "entry_window.hpp"
#include "main_window.hpp"

EntryWindow::EntryWindow(QWidget *parent)
            :QMainWindow(parent)
{
    
    this->setWindowIcon(QIcon(QPixmap("img/password.svg")));
    this->setWindowTitle("                                                      Password manager");
    this->setMaximumSize(500, 500);// w :h
    this->setMinimumSize(500, 500);// w :h
    
    this->setStyleSheet(
        "QMainWindow{"
        "background-color:#282828"
        "}"
    );

    createFieldInputs();
}
void 
EntryWindow::stopDelay(){
    
    titleErrorEntry->hide();
    delayErrorLabel->stop();
}
int 
EntryWindow::processEntry () {
    std::ifstream inputFile("../entry.json");

    nlohmann::json_abi_v3_11_3::json data;
    inputFile >> data; // перенаправляем содержимое в объект data

    std::string login = data["login"];
    std::string password = data["password"];

    if ( fieldLogin->text() == login && fieldPassword->text() == password ) 
        return 0;
    else
        return 1;
}

void 
EntryWindow::createFieldInputs(){

        delayErrorLabel = new QTimer (this);
        connect(delayErrorLabel, &QTimer::timeout, this, &EntryWindow::stopDelay);

        btnStayOnline = new QCheckBox("Stay online",this);
        btnStayOnline->setCursor(Qt::PointingHandCursor);
            btnStayOnline->setGeometry(50, 325, 135, 24);
             btnStayOnline->setStyleSheet (  
            "QCheckBox {"     
            "   color: #414141;"                
            "   font-size: 20px;"
            "}"

            "QCheckBox::indicator:unchecked {"
            "   margin-top: 4px;"
            "   background-color: #282828;"
            "   border: 2px solid #414141;"
            "   width: 15px;"
            "   height: 15px;"
            "   border-radius: 5px;"
            "}"

            "QCheckBox::indicator:checked {"
            "   margin-top: 4px;"
            "   background-color: white;"
            "   border: 2px solid #414141;"
            "   width: 15px;"
            "   height: 15px;"
            "   border-radius: 5px;"
            "   color: white;"
            "}"

            "QCheckBox:hover {"
            "   color: white;"
            "}"
        );
        connect ( btnStayOnline, QCheckBox::checkStateChanged, this, [this]() {
            btnStayOnline->checkState() ? btnStayOnline->setStyleSheet(
                "QCheckBox {"
                "   color: white;"
                "   font-size: 20px;"
                "}"

                "QCheckBox::indicator:checked {"
                "   margin-top: 4px;"
                "   background-color: white;"
                "   border: 2px solid #414141;"
                "   width: 15px;"
                "   height: 15px;"
                "   border-radius: 5px;"
                "   color: white;"
                "}"
            ) : btnStayOnline->setStyleSheet (
                "QCheckBox {"     
                "   color: #414141;" 
                "   font-size: 20px;"               
                "}"

                "QCheckBox::indicator:unchecked {"
                "   margin-top: 4px;"
                "   background-color: #282828;"
                "   border: 2px solid #414141;"
                "   width: 15px;"
                "   height: 15px;"
                "   border-radius: 5px;"
                "}"

                "QCheckBox:hover {"
                "   color: white;"
                "}"
            );
        });

        titleCall = new QLabel("Welcome",this);
        titleCall->setGeometry(160, 92, 178, 53);
        titleCall->setStyleSheet(
            "QLabel {"
            "color: white;"
            "font-size: 43px;"
            "}"
        );
        fieldLogin = new QLineEdit(this);
            fieldLogin->setPlaceholderText("Login");
            fieldLogin->setGeometry(50, 185, 400, 50);
            fieldLogin->setStyleSheet(
               "QLineEdit {" 
               "background-color:#1A1A1A;" // цвет фона
               "border-radius: 5px;" // закругление углов
               "color: white;" // цвет вводимого текста
               "padding-left: 12px;" //отступ вводимого текста
               "font-size: 20px;"
               "}"
            );

            fieldPassword = new QLineEdit(this);
            fieldPassword->setPlaceholderText("Password");
            fieldPassword->setGeometry(50, 265, 400, 50);
            fieldPassword->setStyleSheet(
               "QLineEdit {" 
               "background-color:#1A1A1A;"
               "border-radius: 5px;"
               "color: white;"
               "padding-left: 12px;"
               "font-size: 20px;"
               "}"
            );

        btnEntry = new QPushButton("Log in",this);
        btnEntry->setCursor(Qt::PointingHandCursor);
        btnEntry->setGeometry(160, 379, 180, 50);
        btnEntry->setStyleSheet(
        " QPushButton{"
        "background-color: #424242;"
        "color: white;"
        "font-size: 20px;"
        "border-radius: 5px;"
        "padding-bottom: 6px;"
        "}"  

        "QPushButton:hover {"  
        "background-color: #4A4A4A;"
        "font-weight: bold;"
        "}"
        );
        
        connect (btnEntry, &QPushButton::clicked, [this]()
        {
            if ( processEntry() == 0 ) {
                this->close();
                MainWindow *win = new MainWindow();
                win->show();
            }
                else{
                delayErrorLabel->start(4000);
                titleErrorEntry = new QLabel("Incorect Login or Password",this);
                titleErrorEntry->setGeometry(123, 150, 270, 30);
                titleErrorEntry->setStyleSheet(
                        "QLabel {"
                        "color: #8F1E1F;"
                        "font-size: 22px;"
                        "background-color:none;"
                        
                        "}"
                );
                titleErrorEntry->show();
                
                
                }
        }
        );
        titleForgotPassword = new QPushButton ( this );
        titleForgotPassword->setCursor(Qt::PointingHandCursor);
        titleForgotPassword->setGeometry ( 292.11, 325, 158, 40 );
        titleForgotPassword->setStyleSheet (  
            "QPushButton {"                  
                "   background-color: #282828;"  
                "   border: none;"
                "   background-image: url(img/nolink.png);"
                "   background-position: center;"
                "   background-repeat: no-repeat;"
            "}"

            "QPushButton:hover {"                  
                "   background-color: #282828;"  
                "   border: none;"
                "   background-image: url(img/link.png);"
                "   background-position: center;"
                "   background-repeat: no-repeat;"
            "}"

            
        );

            titleRegistration = new QPushButton (  this );
            titleRegistration->setCursor(Qt::PointingHandCursor);
            titleRegistration->setGeometry ( 194, 459, 112, 28 );
            titleRegistration->setStyleSheet (  
            "QPushButton {"                  
                "   background-color: #282828;"  
                "   border: none;"
                "   background-image: url(img/nolink2.png);"
                "   background-position: center;"
                "   background-repeat: no-repeat;"
            "}"

            "QPushButton:hover {"                  
                "   background-color: #282828;"  
                "   border: none;"
                "   background-image: url(img/link2.png);"
                "   background-position: center;"
                "   background-repeat: no-repeat;"
            "}"

            
        );

}

EntryWindow::~EntryWindow(){}