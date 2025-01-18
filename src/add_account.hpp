#ifndef ADDACCOUNT_HPP
#define ADDACCOUNT_HPP

#include <QMainWindow>
#include <Qlabel>
#include <QPushButton>
#include <QLineEdit>
#include <iostream>
#include<QPlainTextEdit>
#include "main_window.hpp"

class AddAccount : public QMainWindow {
    Q_OBJECT

    public:
        explicit AddAccount (QWidget *parent = nullptr);

        ~AddAccount ();

    private:
    QLineEdit   *fieldLogin,
                *fieldPassword;

    QPushButton *btnEntry,
                *titleForgotPassword,
                *titleRegistration;

    QLabel      *titleCall;
    
    };

#endif // ADDACCOUNT