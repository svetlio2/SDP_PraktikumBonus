#include "Message.h"



Message::Message(string _sender, string _recipient, string _message):sender(_sender),
														    recipient(_recipient),
														    data(_message){}
void Message::markAsReaded()
{
	isRead=true;
}		

void Message::printMessage()
{
	cout<<"From:"<<recipient<<endl
		<<data;
}

