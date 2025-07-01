/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:36:12.380160517Z[Etc/UTC]
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

#include "OAIBusinessMessagesDeleted.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIBusinessMessagesDeleted::OAIBusinessMessagesDeleted(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIBusinessMessagesDeleted::OAIBusinessMessagesDeleted() {
    this->initializeModel();
}

OAIBusinessMessagesDeleted::~OAIBusinessMessagesDeleted() {}

void OAIBusinessMessagesDeleted::initializeModel() {

    m_business_connection_id_isSet = false;
    m_business_connection_id_isValid = false;

    m_chat_isSet = false;
    m_chat_isValid = false;

    m_message_ids_isSet = false;
    m_message_ids_isValid = false;
}

void OAIBusinessMessagesDeleted::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIBusinessMessagesDeleted::fromJsonObject(QJsonObject json) {

    m_business_connection_id_isValid = ::tele_rest::fromJsonValue(m_business_connection_id, json[QString("business_connection_id")]);
    m_business_connection_id_isSet = !json[QString("business_connection_id")].isNull() && m_business_connection_id_isValid;

    m_chat_isValid = ::tele_rest::fromJsonValue(m_chat, json[QString("chat")]);
    m_chat_isSet = !json[QString("chat")].isNull() && m_chat_isValid;

    m_message_ids_isValid = ::tele_rest::fromJsonValue(m_message_ids, json[QString("message_ids")]);
    m_message_ids_isSet = !json[QString("message_ids")].isNull() && m_message_ids_isValid;
}

QString OAIBusinessMessagesDeleted::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIBusinessMessagesDeleted::asJsonObject() const {
    QJsonObject obj;
    if (m_business_connection_id_isSet) {
        obj.insert(QString("business_connection_id"), ::tele_rest::toJsonValue(m_business_connection_id));
    }
    if (m_chat.isSet()) {
        obj.insert(QString("chat"), ::tele_rest::toJsonValue(m_chat));
    }
    if (m_message_ids.size() > 0) {
        obj.insert(QString("message_ids"), ::tele_rest::toJsonValue(m_message_ids));
    }
    return obj;
}

QString OAIBusinessMessagesDeleted::getBusinessConnectionId() const {
    return m_business_connection_id;
}
void OAIBusinessMessagesDeleted::setBusinessConnectionId(const QString &business_connection_id) {
    m_business_connection_id = business_connection_id;
    m_business_connection_id_isSet = true;
}

bool OAIBusinessMessagesDeleted::is_business_connection_id_Set() const{
    return m_business_connection_id_isSet;
}

bool OAIBusinessMessagesDeleted::is_business_connection_id_Valid() const{
    return m_business_connection_id_isValid;
}

OAIChat OAIBusinessMessagesDeleted::getChat() const {
    return m_chat;
}
void OAIBusinessMessagesDeleted::setChat(const OAIChat &chat) {
    m_chat = chat;
    m_chat_isSet = true;
}

bool OAIBusinessMessagesDeleted::is_chat_Set() const{
    return m_chat_isSet;
}

bool OAIBusinessMessagesDeleted::is_chat_Valid() const{
    return m_chat_isValid;
}

QList<qint32> OAIBusinessMessagesDeleted::getMessageIds() const {
    return m_message_ids;
}
void OAIBusinessMessagesDeleted::setMessageIds(const QList<qint32> &message_ids) {
    m_message_ids = message_ids;
    m_message_ids_isSet = true;
}

bool OAIBusinessMessagesDeleted::is_message_ids_Set() const{
    return m_message_ids_isSet;
}

bool OAIBusinessMessagesDeleted::is_message_ids_Valid() const{
    return m_message_ids_isValid;
}

bool OAIBusinessMessagesDeleted::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_business_connection_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_chat.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_message_ids.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIBusinessMessagesDeleted::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_business_connection_id_isValid && m_chat_isValid && m_message_ids_isValid && true;
}

} // namespace tele_rest
