#pragma once
#include "DMRouter.h"

#define MSG_CFG_FILE_PATH "./"

class ProxyRouter:public DMRouter
{
public:
    ProxyRouter(){};

	//添加路由消息到客户端的能力,服务器间路由基类实现
	virtual void route(DMMessage& message) override
	{
		//throw std::exception("The method or operation is not implemented.");
	}

protected:
private:
};