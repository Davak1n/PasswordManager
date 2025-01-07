#ifndef ENTRYWINDOW_HPP
#define ENTRYWINDOW_HPP

#include <QMainWindow>
#include <Qlabel>
#include <QPushButton>
#include <QLineEdit>
#include <QCheckBox>

#include <fstream>
#include <nlohmann/json.hpp>

class EntryWindow : public QMainWindow {
    Q_OBJECT

    public:
        explicit EntryWindow (QWidget *parent = nullptr);

        ~EntryWindow ();

    private:
    QLineEdit *fieldLogin,
              *fieldPassword;

    QPushButton *btnEntry,
                *titleForgotPassword,
                *titleRegistration;

    QLabel *titleCall;
            
        int processEntry ();
        void createFieldInputs ();

    QCheckBox *btnStayOnline;
};

#endif // ENTRYWINDOW