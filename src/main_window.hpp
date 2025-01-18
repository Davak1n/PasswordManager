#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include <Qlabel>
#include <QPushButton>
#include <QLineEdit>
#include <iostream>
#include<QWidget>
#include<QString>
#include "add_account.hpp"
#include "entry_window.hpp"

class MainWindow : public QMainWindow {
    Q_OBJECT

    public:
        explicit MainWindow (QWidget *parent = nullptr);

        ~MainWindow ();

    private:
    void updateMainWindow();

    QWidget     *widgetAccounts;

    QLineEdit   *fieldLogin,
                *fieldPassword;

    QPushButton *btnEntry,
                *titleForgotPassword,
                *titleRegistration;

    QLabel *titleCall;
    };

#endif // MAINWINDOW