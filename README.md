# C++ Qt API Client For Telegram Bot API 

The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram.
To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.

## Metadata

- API version: 9.0.0

## Requirements

Building the API client library requires:

1. CMake 3.2+
2. Qt
3. C++ Compiler

## Getting Started

example.h:
```c++

#include <iostream>
#include "../client/OAIDefaultApi.h"

using namespace test_namespace;

class Example : public QObject {
    Q_OBJECT
    qint32 create();
    QString create();
    OAIInputSticker create();
public Q_SLOTS:
   void exampleFunction1();
};

```

example.cpp:
```c++

#include "../client/OAIDefaultApi.h"
#include "example.h"
#include <QTimer>
#include <QEventLoop>

qint32 Example::create(){
    qint32 obj;
QString Example::create(){
    QString obj;
OAIInputSticker Example::create(){
    OAIInputSticker obj;
 return obj;
}

void Example::exampleFunction1(){
     OAIDefaultApi apiInstance;
     
      QEventLoop loop;
      connect(&apiInstance, &OAIDefaultApi::addStickerToSetPostSignal, [&]() {
          loop.quit();
      });
      connect(&apiInstance, &OAIDefaultApi::addStickerToSetPostSignalE, [&](QNetworkReply::NetworkError, QString error_str) {
          qDebug() << "Error happened while issuing request : " << error_str;
          loop.quit();
      });

      qint32 user_id = create(); // qint32 | User identifier of sticker set owner

      QEventLoop loop;
      connect(&apiInstance, &OAIDefaultApi::addStickerToSetPostSignal, [&]() {
          loop.quit();
      });
      connect(&apiInstance, &OAIDefaultApi::addStickerToSetPostSignalE, [&](QNetworkReply::NetworkError, QString error_str) {
          qDebug() << "Error happened while issuing request : " << error_str;
          loop.quit();
      });

      QString name = create(); // QString | Sticker set name

      QEventLoop loop;
      connect(&apiInstance, &OAIDefaultApi::addStickerToSetPostSignal, [&]() {
          loop.quit();
      });
      connect(&apiInstance, &OAIDefaultApi::addStickerToSetPostSignalE, [&](QNetworkReply::NetworkError, QString error_str) {
          qDebug() << "Error happened while issuing request : " << error_str;
          loop.quit();
      });

      OAIInputSticker sticker = create(); // OAIInputSticker | 
      apiInstance.addStickerToSetPost(user_idnamesticker);
      QTimer::singleShot(5000, &loop, &QEventLoop::quit);
      loop.exec();
  }

```

## Documentation for Servers

Parameterized Servers are supported. Define a server in the API for each endpoint with arbitrary numbers of variables:

```yaml
servers:
- url: http://{server}:{port}/{basePath}
  description: Description of the Server
  variables:
    server:
        enum:
          - 'petstore'
          - 'qa-petstore'
          - 'dev-petstore'
        default: 'petstore'
    port:
      enum:
        - '3000'
        - '1000'
      default: '3000'
    basePath:
      default: v1
```
To change the default variable, use this function in each Api:
```c++
int setDefaultServerValue(int serverIndex,const QString &operation, const QString &variable,const QString &val);
```
The parameter "serverIndex" will choose a server from the server list for each endpoint. There is always at least one server with index 0. The Parameter "operation" should be the desired endpoint operationid.
Variable is the name of the variable you wish to change and the value is the new default Value.
The function will return -1 when the variable does not exists, -2 if value is not defined in the variable enum and -3 if the operation is not found.

If your endpoint has multiple server objects in the servers array, you can set the server that will be used with this function:
```c++
void setServerIndex(const QString &operation, int serverIndex);
```
Parameter "operation" should be your operationid. "serverIndex" is the index you want to set as your default server. The function will check if there is a server with your index.
Here is an example of multiple servers in the servers array. The first server will have index 0 and the second will have index 1.
```yaml
servers:
- url: http://{server}:8080/
  description: Description of the Server
  variables:
    server:
        enum:
          - 'petstore'
          - 'qa-petstore'
          - 'dev-petstore'
        default: 'petstore'
- url: https://localhost:8080/v1
```

## Documentation for Authorization

All endpoints do not require authorization.
Authentication schemes defined for the API:

## Author

gitctrlx@gmail.com


## License

Apache-2.0 for more information visit [Apache-2.0](https://www.apache.org/licenses/LICENSE-2.0.html)