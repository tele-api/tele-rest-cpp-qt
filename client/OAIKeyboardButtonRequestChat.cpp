/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-02T09:16:57.652454639Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Telegram Bot API service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

#include "OAIKeyboardButtonRequestChat.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIKeyboardButtonRequestChat::OAIKeyboardButtonRequestChat(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIKeyboardButtonRequestChat::OAIKeyboardButtonRequestChat() {
    this->initializeModel();
}

OAIKeyboardButtonRequestChat::~OAIKeyboardButtonRequestChat() {}

void OAIKeyboardButtonRequestChat::initializeModel() {

    m_request_id_isSet = false;
    m_request_id_isValid = false;

    m_chat_is_channel_isSet = false;
    m_chat_is_channel_isValid = false;

    m_chat_is_forum_isSet = false;
    m_chat_is_forum_isValid = false;

    m_chat_has_username_isSet = false;
    m_chat_has_username_isValid = false;

    m_chat_is_created_isSet = false;
    m_chat_is_created_isValid = false;

    m_user_administrator_rights_isSet = false;
    m_user_administrator_rights_isValid = false;

    m_bot_administrator_rights_isSet = false;
    m_bot_administrator_rights_isValid = false;

    m_bot_is_member_isSet = false;
    m_bot_is_member_isValid = false;

    m_request_title_isSet = false;
    m_request_title_isValid = false;

    m_request_username_isSet = false;
    m_request_username_isValid = false;

    m_request_photo_isSet = false;
    m_request_photo_isValid = false;
}

void OAIKeyboardButtonRequestChat::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIKeyboardButtonRequestChat::fromJsonObject(QJsonObject json) {

    m_request_id_isValid = ::tele_rest::fromJsonValue(m_request_id, json[QString("request_id")]);
    m_request_id_isSet = !json[QString("request_id")].isNull() && m_request_id_isValid;

    m_chat_is_channel_isValid = ::tele_rest::fromJsonValue(m_chat_is_channel, json[QString("chat_is_channel")]);
    m_chat_is_channel_isSet = !json[QString("chat_is_channel")].isNull() && m_chat_is_channel_isValid;

    m_chat_is_forum_isValid = ::tele_rest::fromJsonValue(m_chat_is_forum, json[QString("chat_is_forum")]);
    m_chat_is_forum_isSet = !json[QString("chat_is_forum")].isNull() && m_chat_is_forum_isValid;

    m_chat_has_username_isValid = ::tele_rest::fromJsonValue(m_chat_has_username, json[QString("chat_has_username")]);
    m_chat_has_username_isSet = !json[QString("chat_has_username")].isNull() && m_chat_has_username_isValid;

    m_chat_is_created_isValid = ::tele_rest::fromJsonValue(m_chat_is_created, json[QString("chat_is_created")]);
    m_chat_is_created_isSet = !json[QString("chat_is_created")].isNull() && m_chat_is_created_isValid;

    m_user_administrator_rights_isValid = ::tele_rest::fromJsonValue(m_user_administrator_rights, json[QString("user_administrator_rights")]);
    m_user_administrator_rights_isSet = !json[QString("user_administrator_rights")].isNull() && m_user_administrator_rights_isValid;

    m_bot_administrator_rights_isValid = ::tele_rest::fromJsonValue(m_bot_administrator_rights, json[QString("bot_administrator_rights")]);
    m_bot_administrator_rights_isSet = !json[QString("bot_administrator_rights")].isNull() && m_bot_administrator_rights_isValid;

    m_bot_is_member_isValid = ::tele_rest::fromJsonValue(m_bot_is_member, json[QString("bot_is_member")]);
    m_bot_is_member_isSet = !json[QString("bot_is_member")].isNull() && m_bot_is_member_isValid;

    m_request_title_isValid = ::tele_rest::fromJsonValue(m_request_title, json[QString("request_title")]);
    m_request_title_isSet = !json[QString("request_title")].isNull() && m_request_title_isValid;

    m_request_username_isValid = ::tele_rest::fromJsonValue(m_request_username, json[QString("request_username")]);
    m_request_username_isSet = !json[QString("request_username")].isNull() && m_request_username_isValid;

    m_request_photo_isValid = ::tele_rest::fromJsonValue(m_request_photo, json[QString("request_photo")]);
    m_request_photo_isSet = !json[QString("request_photo")].isNull() && m_request_photo_isValid;
}

QString OAIKeyboardButtonRequestChat::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIKeyboardButtonRequestChat::asJsonObject() const {
    QJsonObject obj;
    if (m_request_id_isSet) {
        obj.insert(QString("request_id"), ::tele_rest::toJsonValue(m_request_id));
    }
    if (m_chat_is_channel_isSet) {
        obj.insert(QString("chat_is_channel"), ::tele_rest::toJsonValue(m_chat_is_channel));
    }
    if (m_chat_is_forum_isSet) {
        obj.insert(QString("chat_is_forum"), ::tele_rest::toJsonValue(m_chat_is_forum));
    }
    if (m_chat_has_username_isSet) {
        obj.insert(QString("chat_has_username"), ::tele_rest::toJsonValue(m_chat_has_username));
    }
    if (m_chat_is_created_isSet) {
        obj.insert(QString("chat_is_created"), ::tele_rest::toJsonValue(m_chat_is_created));
    }
    if (m_user_administrator_rights.isSet()) {
        obj.insert(QString("user_administrator_rights"), ::tele_rest::toJsonValue(m_user_administrator_rights));
    }
    if (m_bot_administrator_rights.isSet()) {
        obj.insert(QString("bot_administrator_rights"), ::tele_rest::toJsonValue(m_bot_administrator_rights));
    }
    if (m_bot_is_member_isSet) {
        obj.insert(QString("bot_is_member"), ::tele_rest::toJsonValue(m_bot_is_member));
    }
    if (m_request_title_isSet) {
        obj.insert(QString("request_title"), ::tele_rest::toJsonValue(m_request_title));
    }
    if (m_request_username_isSet) {
        obj.insert(QString("request_username"), ::tele_rest::toJsonValue(m_request_username));
    }
    if (m_request_photo_isSet) {
        obj.insert(QString("request_photo"), ::tele_rest::toJsonValue(m_request_photo));
    }
    return obj;
}

qint32 OAIKeyboardButtonRequestChat::getRequestId() const {
    return m_request_id;
}
void OAIKeyboardButtonRequestChat::setRequestId(const qint32 &request_id) {
    m_request_id = request_id;
    m_request_id_isSet = true;
}

bool OAIKeyboardButtonRequestChat::is_request_id_Set() const{
    return m_request_id_isSet;
}

bool OAIKeyboardButtonRequestChat::is_request_id_Valid() const{
    return m_request_id_isValid;
}

bool OAIKeyboardButtonRequestChat::isChatIsChannel() const {
    return m_chat_is_channel;
}
void OAIKeyboardButtonRequestChat::setChatIsChannel(const bool &chat_is_channel) {
    m_chat_is_channel = chat_is_channel;
    m_chat_is_channel_isSet = true;
}

bool OAIKeyboardButtonRequestChat::is_chat_is_channel_Set() const{
    return m_chat_is_channel_isSet;
}

bool OAIKeyboardButtonRequestChat::is_chat_is_channel_Valid() const{
    return m_chat_is_channel_isValid;
}

bool OAIKeyboardButtonRequestChat::isChatIsForum() const {
    return m_chat_is_forum;
}
void OAIKeyboardButtonRequestChat::setChatIsForum(const bool &chat_is_forum) {
    m_chat_is_forum = chat_is_forum;
    m_chat_is_forum_isSet = true;
}

bool OAIKeyboardButtonRequestChat::is_chat_is_forum_Set() const{
    return m_chat_is_forum_isSet;
}

bool OAIKeyboardButtonRequestChat::is_chat_is_forum_Valid() const{
    return m_chat_is_forum_isValid;
}

bool OAIKeyboardButtonRequestChat::isChatHasUsername() const {
    return m_chat_has_username;
}
void OAIKeyboardButtonRequestChat::setChatHasUsername(const bool &chat_has_username) {
    m_chat_has_username = chat_has_username;
    m_chat_has_username_isSet = true;
}

bool OAIKeyboardButtonRequestChat::is_chat_has_username_Set() const{
    return m_chat_has_username_isSet;
}

bool OAIKeyboardButtonRequestChat::is_chat_has_username_Valid() const{
    return m_chat_has_username_isValid;
}

bool OAIKeyboardButtonRequestChat::isChatIsCreated() const {
    return m_chat_is_created;
}
void OAIKeyboardButtonRequestChat::setChatIsCreated(const bool &chat_is_created) {
    m_chat_is_created = chat_is_created;
    m_chat_is_created_isSet = true;
}

bool OAIKeyboardButtonRequestChat::is_chat_is_created_Set() const{
    return m_chat_is_created_isSet;
}

bool OAIKeyboardButtonRequestChat::is_chat_is_created_Valid() const{
    return m_chat_is_created_isValid;
}

OAIChatAdministratorRights OAIKeyboardButtonRequestChat::getUserAdministratorRights() const {
    return m_user_administrator_rights;
}
void OAIKeyboardButtonRequestChat::setUserAdministratorRights(const OAIChatAdministratorRights &user_administrator_rights) {
    m_user_administrator_rights = user_administrator_rights;
    m_user_administrator_rights_isSet = true;
}

bool OAIKeyboardButtonRequestChat::is_user_administrator_rights_Set() const{
    return m_user_administrator_rights_isSet;
}

bool OAIKeyboardButtonRequestChat::is_user_administrator_rights_Valid() const{
    return m_user_administrator_rights_isValid;
}

OAIChatAdministratorRights OAIKeyboardButtonRequestChat::getBotAdministratorRights() const {
    return m_bot_administrator_rights;
}
void OAIKeyboardButtonRequestChat::setBotAdministratorRights(const OAIChatAdministratorRights &bot_administrator_rights) {
    m_bot_administrator_rights = bot_administrator_rights;
    m_bot_administrator_rights_isSet = true;
}

bool OAIKeyboardButtonRequestChat::is_bot_administrator_rights_Set() const{
    return m_bot_administrator_rights_isSet;
}

bool OAIKeyboardButtonRequestChat::is_bot_administrator_rights_Valid() const{
    return m_bot_administrator_rights_isValid;
}

bool OAIKeyboardButtonRequestChat::isBotIsMember() const {
    return m_bot_is_member;
}
void OAIKeyboardButtonRequestChat::setBotIsMember(const bool &bot_is_member) {
    m_bot_is_member = bot_is_member;
    m_bot_is_member_isSet = true;
}

bool OAIKeyboardButtonRequestChat::is_bot_is_member_Set() const{
    return m_bot_is_member_isSet;
}

bool OAIKeyboardButtonRequestChat::is_bot_is_member_Valid() const{
    return m_bot_is_member_isValid;
}

bool OAIKeyboardButtonRequestChat::isRequestTitle() const {
    return m_request_title;
}
void OAIKeyboardButtonRequestChat::setRequestTitle(const bool &request_title) {
    m_request_title = request_title;
    m_request_title_isSet = true;
}

bool OAIKeyboardButtonRequestChat::is_request_title_Set() const{
    return m_request_title_isSet;
}

bool OAIKeyboardButtonRequestChat::is_request_title_Valid() const{
    return m_request_title_isValid;
}

bool OAIKeyboardButtonRequestChat::isRequestUsername() const {
    return m_request_username;
}
void OAIKeyboardButtonRequestChat::setRequestUsername(const bool &request_username) {
    m_request_username = request_username;
    m_request_username_isSet = true;
}

bool OAIKeyboardButtonRequestChat::is_request_username_Set() const{
    return m_request_username_isSet;
}

bool OAIKeyboardButtonRequestChat::is_request_username_Valid() const{
    return m_request_username_isValid;
}

bool OAIKeyboardButtonRequestChat::isRequestPhoto() const {
    return m_request_photo;
}
void OAIKeyboardButtonRequestChat::setRequestPhoto(const bool &request_photo) {
    m_request_photo = request_photo;
    m_request_photo_isSet = true;
}

bool OAIKeyboardButtonRequestChat::is_request_photo_Set() const{
    return m_request_photo_isSet;
}

bool OAIKeyboardButtonRequestChat::is_request_photo_Valid() const{
    return m_request_photo_isValid;
}

bool OAIKeyboardButtonRequestChat::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_request_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_chat_is_channel_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_chat_is_forum_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_chat_has_username_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_chat_is_created_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_user_administrator_rights.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_bot_administrator_rights.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_bot_is_member_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_request_title_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_request_username_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_request_photo_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIKeyboardButtonRequestChat::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_request_id_isValid && m_chat_is_channel_isValid && true;
}

} // namespace tele_rest
