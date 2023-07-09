#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdio>
#include "../Protobuf/Request.h"
#include "../Protobuf/Response.h"
#include "../Socket/TcpServer.h"
#include "../Socket/TcpSocket.h"
#include "../MemoryShare/MemoryShare.h"
#include "../MemoryShare/ClientMemShare.h"
#include "../OpenSSL/Encrypt.h"
#include "../OpenSSL/RsaEncrypt.h"
#include "../JsonCpp/ClientJsonCpp.h"
#include "../Factory/CodecFactory.h"
#include "../Factory/ReqCodecFactory.h"
#include "../Factory/RespCodecFactory.h"
#include <Windows.h>

using namespace std;

/*�����ģ�����							**/
void funcThreadCodecTest();
void funcModelRequestCodecTest();
void funcModelResponseCodecTest();

/*Socketģ�����							**/
void funcThreadSocketTest();
void funcModelTcpServerTest();
void funcModelTcpClientTest();

/*�����ڴ�ģ�����							**/
void funcMemoryShareTest();
void funcModelMemoryShareWriteTest();
void funcModelMemoryShareReadTest();
void funModelClientMemoryShareTest();

/*����ģ�����								**/
void funcEncryptTest();
void funcRsaEncryptTest();

/*json��ȡ����ģ�����						**/
void funcClientJsonConfTest();

/*����ģ�����								**/
void funcFactoryTest();