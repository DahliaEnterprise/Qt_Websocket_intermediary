#include <QApplication>
#include <QLabel>
#include <QWidget>
#include "QtWebSockets/qwebsocket.h"
#include "QtWebSockets/qwebsocketserver.h"

//program headers
#include "./websocket_manager/websocket_manager.h"



int main(int argc, char *argv[ ])
{

QApplication app(argc, argv);



return app.exec();

}
