#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include <Qlabel>
#include <QPushButton>
#include <QLineEdit>
#include <iostream>
#include "add_account.hpp"

class MainWindow : public QMainWindow {
    Q_OBJECT

    public:
        explicit MainWindow (QWidget *parent = nullptr);

        ~MainWindow ();

    private:
    QLineEdit   *fieldLogin,
                *fieldPassword;

    QPushButton *btnEntry,
                *titleForgotPassword,
                *titleRegistration;

    QLabel *titleCall;
    };

#endif // MAINWINDOW