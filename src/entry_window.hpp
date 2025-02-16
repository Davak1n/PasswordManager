#ifndef ENTRYWINDOW_HPP
#define ENTRYWINDOW_HPP

#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QCheckBox>
#include <QTimer>

#include <fstream>

class EntryWindow : public QMainWindow {
    Q_OBJECT

    public:
        explicit EntryWindow (QWidget *parent = nullptr);

        ~EntryWindow ();

    private:
    QLineEdit *fieldLogin,
              *fieldPassword;

    QPushButton *btnEntry;
    

    QLabel *titleCall,
            *titleForgotPassword,
            *titleRegistration;
            
        int processEntry ();
        void createFieldInputs ();
    QLabel *titleErrorEntry;

    QCheckBox *btnStayOnline;

    QTimer *delayErrorLabel;
    
    private slots:
        void stopDelay();
};

#endif // ENTRYWINDOW