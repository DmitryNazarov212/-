#pragma once
#include <iostream> 
#include <vector>
#include <memory>
#include "user.h"
#include "message.h"
class Chat
{
private:
	std::vector<std::shared_ptr<Message>> message;
public:
	void sendMessage(std::shared_ptr<User> sender, std::shared_ptr<User> reciever, std::string text);
	void getHistory(int senderIndex, int recieverIndex);
};






























//class Message
//{
//private:
//    std::shared_ptr<User> sender; // �������� �� shared_ptr  
//    std::shared_ptr<User> receiver; // �������� �� shared_ptr  
//    std::string text;
//
//public:
//    Message(std::shared_ptr<User> sender, const std::string& text, std::shared_ptr<User> receiver = nullptr)
//        : sender(sender), receiver(receiver), text(text) {}
//};
//
//class LocalChat {
//private:
//    std::vector<std::shared_ptr<Message>> messages; // ������ ��������� � ����  
//
//public:
//    // ����� ��� �������� ���������  
//    void sendMessage(std::shared_ptr<User> sender, std::shared_ptr<User> receiver, const std::string& text);
//
//    // ����� ��� ��������� ���� ���������  
//    const std::vector<std::shared_ptr<Message>>& getMessages() const;
//};
//
//class GroupChat
//{
//private:
//	std::vector<std::shared_ptr<User>> participants;
//public:
//	void addParticipant(std::vector<std::shared_ptr<User>> users); //���������� ���� ������������������ �������������
//};