#ifndef ADDACCOUNT_HPP
#define ADDACCOUNT_HPP

#include <QMainWindow>
#include <QLabel>
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

        void openFileWrite(QString title, QString username, QString password, QString site, QString notes);

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