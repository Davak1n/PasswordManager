#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QMainWindow>
#include "entry_window.hpp"

int 
main( int argc, char *argv[] )
{

    QApplication app ( argc, argv );

    EntryWindow win;// экземпляр главного окна 

    win.show(); // показать главное окно 
    
        
    return app.exec ();
}
