#include <QApplication>
#include <QLabel>
#include <QWidget>
#include "QtWebSockets/qwebsocket.h"
#include "QtWebSockets/qwebsocketserver.h"

//program headers
#include "./websocket_manager/websocket_manager.h"

#include "./websocket_manager/websocket_manager.cpp"


int main(int argc, char *argv[ ])
{

QCoreApplication app(argc, argv);

websocket_manager * ws_manager;
ws_manager = new websocket_manager();
ws_manager->initialize();

return app.exec();

}
