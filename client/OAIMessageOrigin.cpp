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

#include "OAIMessageOrigin.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIMessageOrigin::OAIMessageOrigin(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIMessageOrigin::OAIMessageOrigin() {
    this->initializeModel();
}

OAIMessageOrigin::~OAIMessageOrigin() {}

void OAIMessageOrigin::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_date_isSet = false;
    m_date_isValid = false;

    m_sender_user_isSet = false;
    m_sender_user_isValid = false;

    m_sender_user_name_isSet = false;
    m_sender_user_name_isValid = false;

    m_sender_chat_isSet = false;
    m_sender_chat_isValid = false;

    m_chat_isSet = false;
    m_chat_isValid = false;

    m_message_id_isSet = false;
    m_message_id_isValid = false;

    m_author_signature_isSet = false;
    m_author_signature_isValid = false;
}

void OAIMessageOrigin::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIMessageOrigin::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::tele_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_date_isValid = ::tele_rest::fromJsonValue(m_date, json[QString("date")]);
    m_date_isSet = !json[QString("date")].isNull() && m_date_isValid;

    m_sender_user_isValid = ::tele_rest::fromJsonValue(m_sender_user, json[QString("sender_user")]);
    m_sender_user_isSet = !json[QString("sender_user")].isNull() && m_sender_user_isValid;

    m_sender_user_name_isValid = ::tele_rest::fromJsonValue(m_sender_user_name, json[QString("sender_user_name")]);
    m_sender_user_name_isSet = !json[QString("sender_user_name")].isNull() && m_sender_user_name_isValid;

    m_sender_chat_isValid = ::tele_rest::fromJsonValue(m_sender_chat, json[QString("sender_chat")]);
    m_sender_chat_isSet = !json[QString("sender_chat")].isNull() && m_sender_chat_isValid;

    m_chat_isValid = ::tele_rest::fromJsonValue(m_chat, json[QString("chat")]);
    m_chat_isSet = !json[QString("chat")].isNull() && m_chat_isValid;

    m_message_id_isValid = ::tele_rest::fromJsonValue(m_message_id, json[QString("message_id")]);
    m_message_id_isSet = !json[QString("message_id")].isNull() && m_message_id_isValid;

    m_author_signature_isValid = ::tele_rest::fromJsonValue(m_author_signature, json[QString("author_signature")]);
    m_author_signature_isSet = !json[QString("author_signature")].isNull() && m_author_signature_isValid;
}

QString OAIMessageOrigin::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIMessageOrigin::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::tele_rest::toJsonValue(m_type));
    }
    if (m_date_isSet) {
        obj.insert(QString("date"), ::tele_rest::toJsonValue(m_date));
    }
    if (m_sender_user.isSet()) {
        obj.insert(QString("sender_user"), ::tele_rest::toJsonValue(m_sender_user));
    }
    if (m_sender_user_name_isSet) {
        obj.insert(QString("sender_user_name"), ::tele_rest::toJsonValue(m_sender_user_name));
    }
    if (m_sender_chat.isSet()) {
        obj.insert(QString("sender_chat"), ::tele_rest::toJsonValue(m_sender_chat));
    }
    if (m_chat.isSet()) {
        obj.insert(QString("chat"), ::tele_rest::toJsonValue(m_chat));
    }
    if (m_message_id_isSet) {
        obj.insert(QString("message_id"), ::tele_rest::toJsonValue(m_message_id));
    }
    if (m_author_signature_isSet) {
        obj.insert(QString("author_signature"), ::tele_rest::toJsonValue(m_author_signature));
    }
    return obj;
}

QString OAIMessageOrigin::getType() const {
    return m_type;
}
void OAIMessageOrigin::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIMessageOrigin::is_type_Set() const{
    return m_type_isSet;
}

bool OAIMessageOrigin::is_type_Valid() const{
    return m_type_isValid;
}

qint32 OAIMessageOrigin::getDate() const {
    return m_date;
}
void OAIMessageOrigin::setDate(const qint32 &date) {
    m_date = date;
    m_date_isSet = true;
}

bool OAIMessageOrigin::is_date_Set() const{
    return m_date_isSet;
}

bool OAIMessageOrigin::is_date_Valid() const{
    return m_date_isValid;
}

OAIUser OAIMessageOrigin::getSenderUser() const {
    return m_sender_user;
}
void OAIMessageOrigin::setSenderUser(const OAIUser &sender_user) {
    m_sender_user = sender_user;
    m_sender_user_isSet = true;
}

bool OAIMessageOrigin::is_sender_user_Set() const{
    return m_sender_user_isSet;
}

bool OAIMessageOrigin::is_sender_user_Valid() const{
    return m_sender_user_isValid;
}

QString OAIMessageOrigin::getSenderUserName() const {
    return m_sender_user_name;
}
void OAIMessageOrigin::setSenderUserName(const QString &sender_user_name) {
    m_sender_user_name = sender_user_name;
    m_sender_user_name_isSet = true;
}

bool OAIMessageOrigin::is_sender_user_name_Set() const{
    return m_sender_user_name_isSet;
}

bool OAIMessageOrigin::is_sender_user_name_Valid() const{
    return m_sender_user_name_isValid;
}

OAIChat OAIMessageOrigin::getSenderChat() const {
    return m_sender_chat;
}
void OAIMessageOrigin::setSenderChat(const OAIChat &sender_chat) {
    m_sender_chat = sender_chat;
    m_sender_chat_isSet = true;
}

bool OAIMessageOrigin::is_sender_chat_Set() const{
    return m_sender_chat_isSet;
}

bool OAIMessageOrigin::is_sender_chat_Valid() const{
    return m_sender_chat_isValid;
}

OAIChat OAIMessageOrigin::getChat() const {
    return m_chat;
}
void OAIMessageOrigin::setChat(const OAIChat &chat) {
    m_chat = chat;
    m_chat_isSet = true;
}

bool OAIMessageOrigin::is_chat_Set() const{
    return m_chat_isSet;
}

bool OAIMessageOrigin::is_chat_Valid() const{
    return m_chat_isValid;
}

qint32 OAIMessageOrigin::getMessageId() const {
    return m_message_id;
}
void OAIMessageOrigin::setMessageId(const qint32 &message_id) {
    m_message_id = message_id;
    m_message_id_isSet = true;
}

bool OAIMessageOrigin::is_message_id_Set() const{
    return m_message_id_isSet;
}

bool OAIMessageOrigin::is_message_id_Valid() const{
    return m_message_id_isValid;
}

QString OAIMessageOrigin::getAuthorSignature() const {
    return m_author_signature;
}
void OAIMessageOrigin::setAuthorSignature(const QString &author_signature) {
    m_author_signature = author_signature;
    m_author_signature_isSet = true;
}

bool OAIMessageOrigin::is_author_signature_Set() const{
    return m_author_signature_isSet;
}

bool OAIMessageOrigin::is_author_signature_Valid() const{
    return m_author_signature_isValid;
}

bool OAIMessageOrigin::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_date_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_sender_user.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_sender_user_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_sender_chat.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_chat.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_message_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_author_signature_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIMessageOrigin::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && m_date_isValid && m_sender_user_isValid && m_sender_user_name_isValid && m_sender_chat_isValid && m_chat_isValid && m_message_id_isValid && true;
}

} // namespace tele_rest
