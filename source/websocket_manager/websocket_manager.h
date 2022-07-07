#ifndef WEBSOCKET_MANAGER_H
#define WEBSOCKET_MANAGER_H

#include <QObject>

class websocket_manager : public QObject
{
    Q_OBJECT
public:
    explicit websocket_manager(QObject *parent = nullptr);

signals:

};

#endif // WEBSOCKET_MANAGER_H
