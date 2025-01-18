#ifndef ADDACCOUNT_HPP
#define ADDACCOUNT_HPP

#include <QMainWindow>
#include <Qlabel>
#include <QPushButton>
#include <QLineEdit>
#include <iostream>
#include<QPlainTextEdit>
#include<QFile>
#include<QVariantMap>
#include<QJsonDocument>
#include<QJsonObject>
#include<QByteArray>
#include<QJsonArray>
#include "main_window.hpp"

class AddAccount : public QMainWindow {
    Q_OBJECT

    public:
        explicit AddAccount (QWidget *parent = nullptr);

        ~AddAccount ();

    private:
    QLineEdit   *fieldLogin,
                *fieldPassword,
                *fieldTitleOfAccountLine,
                *fieldUserNameLine,
                *fieldPaswordLine,
                *fieldSiteLine;

    QPlainTextEdit *fieldNotesLine;

    QPushButton *btnEntry,
                *titleForgotPassword,
                *titleRegistration;

    QLabel      *titleCall;
    
    };

#endif // ADDACCOUNT