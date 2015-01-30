#ifndef SERVER_H_
#define SERVER_H_

#include "Client.h"
#include "Message.h"
#include <string>
#include <map>

class Client;


class Server
{
private:
	map<string,Client*> clients;
	bool checkIfClientExist(string name);
public:
	Server();
	bool sendMessage(Message*);
	void receiveFriendRequest(string,string);
	void addClient(Client* toBeAdded);
	void printAllClients();
};

#endif
