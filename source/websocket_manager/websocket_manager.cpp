websocket_manager::websocket_manager(QObject *parent) : QObject(parent)
{

}

void websocket_manager::initialize()
{
	ws_server = new QWebSocketServer("", QWebSocketServer::NonSecureMode, nullptr);

	bool listen_success_status = ws_server->listen(QHostAddress::Any, 8080);
	if(listen_success_status == true)
	{
		connect(ws_server, SIGNAL(newConnection()), this, SLOT(new_connection()));
		
	}
	
}

void websocket_manager::new_connection()
{
	qDebug() << "new connection";
	QWebSocket * client = ws_server->nextPendingConnection();
	connect(client, SIGNAL(textMessageReceived()), this, SLOT(new_text_message()));
	
	clients << client;
}

void websocket_manager::new_text_message()
{
	
}
