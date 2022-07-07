#ifndef WEBSOCKET_MANAGER_H
#define WEBSOCKET_MANAGER_H

#include <QObject>
#include <QList>
#include <QtWebSockets/QtWebSockets>
#include <QWebSocketServer>
class websocket_manager : public QObject
{
    Q_OBJECT
	public:
    explicit websocket_manager(QObject *parent = nullptr);
    void initialize();
		
	private:
		QWebSocketServer * ws_server;
		
		QList<QWebSocket *> clients;
		QWebSocket * client;
		
	signals:
		void new_connection();
		
		void new_text_message();
};

#endif // WEBSOCKET_MANAGER_H
