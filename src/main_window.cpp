#include "main_window.hpp"


MainWindow::MainWindow(QWidget *parent) :QMainWindow(parent) 
{
        this->setFixedSize(840, 806);
        this->setWindowIcon(QIcon(QPixmap("img/password.svg")));
        this->setWindowTitle("                                                                                                              Password manager");
        this->setStyleSheet(
        "QMainWindow{"
        "background-color:#282828;"
        "}"
        );

        QWidget *widgetPanelControl = new QWidget (this);
        widgetPanelControl->setGeometry(30, 685, 780, 100);
        widgetPanelControl->setStyleSheet(
            "QWidget {"
            "background-color:#2F2F2F;"
            "border-radius: 10px;"
            "}"
        );
        QPushButton *btnAddAccount = new QPushButton (widgetPanelControl);
        btnAddAccount->setGeometry(25, 15, 70, 70);
        btnAddAccount->setCursor(Qt::PointingHandCursor);
        btnAddAccount->setStyleSheet(
        "QPushButton {"                  
                
                "   background-image: url(img/iconAddAccount.png);"
                "   background-position: center;"
                "   background-repeat: no-repeat;"
                "   border-radius: 10px;"
            "}"
        "QPushButton:hover {"   
                "   background-color: #424242;"
                "   background-image:url(img/iconAddAccount.png);"
                "   background-position: center;"
                "   background-repeat: no-repeat;"
                "   border-radius: 10px;"
                "}"
        );
        connect (btnAddAccount, &QPushButton::clicked, [this]()
        {
            this->close();

            AddAccount *win = new AddAccount();
            win->show();
        });
        QPushButton *btniconLockingApp = new QPushButton (widgetPanelControl);
        btniconLockingApp->setCursor(Qt::PointingHandCursor);
        btniconLockingApp->setGeometry(355, 15, 70, 70);
        btniconLockingApp->setStyleSheet(
        "QPushButton {"                  
                
                "   background-image: url(img/iconLockingApp.png);"
                "   background-position: center;"
                "   background-repeat: no-repeat;"
                "   border-radius: 10px;"
            "}"
            "QPushButton:hover {"   
                "   background-color: #424242;"
                "   background-image:url(img/iconLockingApp.png);"
                "   background-position: center;"
                "   background-repeat: no-repeat;"
                "   border-radius: 10px;"
                "}"
        );
        connect (btniconLockingApp, &QPushButton::clicked, [this]()
        {
            this->close();

            EntryWindow *win = new EntryWindow();
            win->show();
        });
        QPushButton *btniconSettings = new QPushButton (widgetPanelControl);
        btniconSettings->setCursor(Qt::PointingHandCursor);
        btniconSettings->setGeometry(685, 15, 70, 70);
        btniconSettings->setStyleSheet(
            "QPushButton {"                  
               
                "   border: none;"
                "   background-image: url(img/iconSettings.png);"
                "   background-position: center;"
                "   background-repeat: no-repeat;"
                "   border-radius: 10px;"
            "}"
            "QPushButton:hover {"   
                "   background-color: #424242;"
                "   background-image:url(img/iconSettings.png);"
                "   background-position: center;"
                "   background-repeat: no-repeat;"
                "   border-radius: 10px;"
                "}"
        );
        QLabel *labelTitleOfAccount = new QLabel("Password & Details",this);
        labelTitleOfAccount->setGeometry(289, 52, 262, 36);
        labelTitleOfAccount->setStyleSheet(
            "QLabel {"
            "color: white;"
            "font-size: 30px;"
            "}"
        );
        
        QPushButton *btnSort = new  QPushButton(this);
        btnSort->setCursor(Qt::PointingHandCursor);
        btnSort->setGeometry(20,29,54,54);
        btnSort->setStyleSheet(
            "QPushButton {"
            "   background-image: url(img/iconSort.png);"
            "   background-color: #2F2F2F;"
            "   border-radius: 5.4px;"
            "   background-position: center;"
            "   background-repeat: no-repeat;"
            "}"
            "QPushButton:hover {"   
                "   background-color: #424242;"
                "   background-image:url(img/iconSort.png);"
                "   background-position: center;"
                "   background-repeat: no-repeat;"
                "   border-radius: 5.4px;"
                "}"
        );

        widgetAccounts = new QWidget (this);
        widgetAccounts->setCursor(Qt::PointingHandCursor);
        widgetAccounts->setGeometry(20,103,800,541);
        widgetAccounts->setStyleSheet(
        "QWidget {"
        "background-color: transparent;"
        "}"
        );
        updateMainWindow ();
}        
void MainWindow::updateMainWindow () {
    std::ifstream inputFile("../data.json");

    nlohmann::json_abi_v3_11_3::json data;
    inputFile >> data;

    for ( const auto& item : data ) {
        if ( item.is_object() ) {
            for ( const auto& [key, value] : item.items() ) {
               // if ( key != "login" ) {
                    QPushButton *btnAccount = new QPushButton ("Hi", widgetAccounts);
                    btnAccount->setGeometry ( 0, 0, 800, 100 );
                    btnAccount->setStyleSheet (
                        "QPushButton {"
                        "   background-color: #414141;"
                        "   color: white;"
                        "   font-size: 35px;"
                        "}"
                    );
                    btnAccount->show();
               // }
            }
        }
    }
}


MainWindow::~MainWindow() {}