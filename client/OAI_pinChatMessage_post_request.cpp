/**
 * Telegram Bot API - REST API Client
 * Auto-generated OpenAPI schema
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:14:29.176360440Z[Etc/UTC]
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

#include "OAI_pinChatMessage_post_request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAI_pinChatMessage_post_request::OAI_pinChatMessage_post_request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAI_pinChatMessage_post_request::OAI_pinChatMessage_post_request() {
    this->initializeModel();
}

OAI_pinChatMessage_post_request::~OAI_pinChatMessage_post_request() {}

void OAI_pinChatMessage_post_request::initializeModel() {

    m_chat_id_isSet = false;
    m_chat_id_isValid = false;

    m_message_id_isSet = false;
    m_message_id_isValid = false;

    m_business_connection_id_isSet = false;
    m_business_connection_id_isValid = false;

    m_disable_notification_isSet = false;
    m_disable_notification_isValid = false;
}

void OAI_pinChatMessage_post_request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAI_pinChatMessage_post_request::fromJsonObject(QJsonObject json) {

    m_chat_id_isValid = ::tele_rest::fromJsonValue(m_chat_id, json[QString("chat_id")]);
    m_chat_id_isSet = !json[QString("chat_id")].isNull() && m_chat_id_isValid;

    m_message_id_isValid = ::tele_rest::fromJsonValue(m_message_id, json[QString("message_id")]);
    m_message_id_isSet = !json[QString("message_id")].isNull() && m_message_id_isValid;

    m_business_connection_id_isValid = ::tele_rest::fromJsonValue(m_business_connection_id, json[QString("business_connection_id")]);
    m_business_connection_id_isSet = !json[QString("business_connection_id")].isNull() && m_business_connection_id_isValid;

    m_disable_notification_isValid = ::tele_rest::fromJsonValue(m_disable_notification, json[QString("disable_notification")]);
    m_disable_notification_isSet = !json[QString("disable_notification")].isNull() && m_disable_notification_isValid;
}

QString OAI_pinChatMessage_post_request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAI_pinChatMessage_post_request::asJsonObject() const {
    QJsonObject obj;
    if (m_chat_id.isSet()) {
        obj.insert(QString("chat_id"), ::tele_rest::toJsonValue(m_chat_id));
    }
    if (m_message_id_isSet) {
        obj.insert(QString("message_id"), ::tele_rest::toJsonValue(m_message_id));
    }
    if (m_business_connection_id_isSet) {
        obj.insert(QString("business_connection_id"), ::tele_rest::toJsonValue(m_business_connection_id));
    }
    if (m_disable_notification_isSet) {
        obj.insert(QString("disable_notification"), ::tele_rest::toJsonValue(m_disable_notification));
    }
    return obj;
}

OAI_sendMessage_post_request_chat_id OAI_pinChatMessage_post_request::getChatId() const {
    return m_chat_id;
}
void OAI_pinChatMessage_post_request::setChatId(const OAI_sendMessage_post_request_chat_id &chat_id) {
    m_chat_id = chat_id;
    m_chat_id_isSet = true;
}

bool OAI_pinChatMessage_post_request::is_chat_id_Set() const{
    return m_chat_id_isSet;
}

bool OAI_pinChatMessage_post_request::is_chat_id_Valid() const{
    return m_chat_id_isValid;
}

qint32 OAI_pinChatMessage_post_request::getMessageId() const {
    return m_message_id;
}
void OAI_pinChatMessage_post_request::setMessageId(const qint32 &message_id) {
    m_message_id = message_id;
    m_message_id_isSet = true;
}

bool OAI_pinChatMessage_post_request::is_message_id_Set() const{
    return m_message_id_isSet;
}

bool OAI_pinChatMessage_post_request::is_message_id_Valid() const{
    return m_message_id_isValid;
}

QString OAI_pinChatMessage_post_request::getBusinessConnectionId() const {
    return m_business_connection_id;
}
void OAI_pinChatMessage_post_request::setBusinessConnectionId(const QString &business_connection_id) {
    m_business_connection_id = business_connection_id;
    m_business_connection_id_isSet = true;
}

bool OAI_pinChatMessage_post_request::is_business_connection_id_Set() const{
    return m_business_connection_id_isSet;
}

bool OAI_pinChatMessage_post_request::is_business_connection_id_Valid() const{
    return m_business_connection_id_isValid;
}

bool OAI_pinChatMessage_post_request::isDisableNotification() const {
    return m_disable_notification;
}
void OAI_pinChatMessage_post_request::setDisableNotification(const bool &disable_notification) {
    m_disable_notification = disable_notification;
    m_disable_notification_isSet = true;
}

bool OAI_pinChatMessage_post_request::is_disable_notification_Set() const{
    return m_disable_notification_isSet;
}

bool OAI_pinChatMessage_post_request::is_disable_notification_Valid() const{
    return m_disable_notification_isValid;
}

bool OAI_pinChatMessage_post_request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_chat_id.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_message_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_business_connection_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_disable_notification_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAI_pinChatMessage_post_request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_chat_id_isValid && m_message_id_isValid && true;
}

} // namespace tele_rest
