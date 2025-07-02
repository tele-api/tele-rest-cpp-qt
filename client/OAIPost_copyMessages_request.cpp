/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-02T07:03:12.172160579Z[Etc/UTC]
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

#include "OAIPost_copyMessages_request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIPost_copyMessages_request::OAIPost_copyMessages_request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPost_copyMessages_request::OAIPost_copyMessages_request() {
    this->initializeModel();
}

OAIPost_copyMessages_request::~OAIPost_copyMessages_request() {}

void OAIPost_copyMessages_request::initializeModel() {

    m_chat_id_isSet = false;
    m_chat_id_isValid = false;

    m_from_chat_id_isSet = false;
    m_from_chat_id_isValid = false;

    m_message_ids_isSet = false;
    m_message_ids_isValid = false;

    m_message_thread_id_isSet = false;
    m_message_thread_id_isValid = false;

    m_disable_notification_isSet = false;
    m_disable_notification_isValid = false;

    m_protect_content_isSet = false;
    m_protect_content_isValid = false;

    m_remove_caption_isSet = false;
    m_remove_caption_isValid = false;
}

void OAIPost_copyMessages_request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPost_copyMessages_request::fromJsonObject(QJsonObject json) {

    m_chat_id_isValid = ::tele_rest::fromJsonValue(m_chat_id, json[QString("chat_id")]);
    m_chat_id_isSet = !json[QString("chat_id")].isNull() && m_chat_id_isValid;

    m_from_chat_id_isValid = ::tele_rest::fromJsonValue(m_from_chat_id, json[QString("from_chat_id")]);
    m_from_chat_id_isSet = !json[QString("from_chat_id")].isNull() && m_from_chat_id_isValid;

    m_message_ids_isValid = ::tele_rest::fromJsonValue(m_message_ids, json[QString("message_ids")]);
    m_message_ids_isSet = !json[QString("message_ids")].isNull() && m_message_ids_isValid;

    m_message_thread_id_isValid = ::tele_rest::fromJsonValue(m_message_thread_id, json[QString("message_thread_id")]);
    m_message_thread_id_isSet = !json[QString("message_thread_id")].isNull() && m_message_thread_id_isValid;

    m_disable_notification_isValid = ::tele_rest::fromJsonValue(m_disable_notification, json[QString("disable_notification")]);
    m_disable_notification_isSet = !json[QString("disable_notification")].isNull() && m_disable_notification_isValid;

    m_protect_content_isValid = ::tele_rest::fromJsonValue(m_protect_content, json[QString("protect_content")]);
    m_protect_content_isSet = !json[QString("protect_content")].isNull() && m_protect_content_isValid;

    m_remove_caption_isValid = ::tele_rest::fromJsonValue(m_remove_caption, json[QString("remove_caption")]);
    m_remove_caption_isSet = !json[QString("remove_caption")].isNull() && m_remove_caption_isValid;
}

QString OAIPost_copyMessages_request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPost_copyMessages_request::asJsonObject() const {
    QJsonObject obj;
    if (m_chat_id.isSet()) {
        obj.insert(QString("chat_id"), ::tele_rest::toJsonValue(m_chat_id));
    }
    if (m_from_chat_id.isSet()) {
        obj.insert(QString("from_chat_id"), ::tele_rest::toJsonValue(m_from_chat_id));
    }
    if (m_message_ids.size() > 0) {
        obj.insert(QString("message_ids"), ::tele_rest::toJsonValue(m_message_ids));
    }
    if (m_message_thread_id_isSet) {
        obj.insert(QString("message_thread_id"), ::tele_rest::toJsonValue(m_message_thread_id));
    }
    if (m_disable_notification_isSet) {
        obj.insert(QString("disable_notification"), ::tele_rest::toJsonValue(m_disable_notification));
    }
    if (m_protect_content_isSet) {
        obj.insert(QString("protect_content"), ::tele_rest::toJsonValue(m_protect_content));
    }
    if (m_remove_caption_isSet) {
        obj.insert(QString("remove_caption"), ::tele_rest::toJsonValue(m_remove_caption));
    }
    return obj;
}

OAIPost_sendMessage_request_chat_id OAIPost_copyMessages_request::getChatId() const {
    return m_chat_id;
}
void OAIPost_copyMessages_request::setChatId(const OAIPost_sendMessage_request_chat_id &chat_id) {
    m_chat_id = chat_id;
    m_chat_id_isSet = true;
}

bool OAIPost_copyMessages_request::is_chat_id_Set() const{
    return m_chat_id_isSet;
}

bool OAIPost_copyMessages_request::is_chat_id_Valid() const{
    return m_chat_id_isValid;
}

OAIPost_forwardMessages_request_from_chat_id OAIPost_copyMessages_request::getFromChatId() const {
    return m_from_chat_id;
}
void OAIPost_copyMessages_request::setFromChatId(const OAIPost_forwardMessages_request_from_chat_id &from_chat_id) {
    m_from_chat_id = from_chat_id;
    m_from_chat_id_isSet = true;
}

bool OAIPost_copyMessages_request::is_from_chat_id_Set() const{
    return m_from_chat_id_isSet;
}

bool OAIPost_copyMessages_request::is_from_chat_id_Valid() const{
    return m_from_chat_id_isValid;
}

QList<qint32> OAIPost_copyMessages_request::getMessageIds() const {
    return m_message_ids;
}
void OAIPost_copyMessages_request::setMessageIds(const QList<qint32> &message_ids) {
    m_message_ids = message_ids;
    m_message_ids_isSet = true;
}

bool OAIPost_copyMessages_request::is_message_ids_Set() const{
    return m_message_ids_isSet;
}

bool OAIPost_copyMessages_request::is_message_ids_Valid() const{
    return m_message_ids_isValid;
}

qint32 OAIPost_copyMessages_request::getMessageThreadId() const {
    return m_message_thread_id;
}
void OAIPost_copyMessages_request::setMessageThreadId(const qint32 &message_thread_id) {
    m_message_thread_id = message_thread_id;
    m_message_thread_id_isSet = true;
}

bool OAIPost_copyMessages_request::is_message_thread_id_Set() const{
    return m_message_thread_id_isSet;
}

bool OAIPost_copyMessages_request::is_message_thread_id_Valid() const{
    return m_message_thread_id_isValid;
}

bool OAIPost_copyMessages_request::isDisableNotification() const {
    return m_disable_notification;
}
void OAIPost_copyMessages_request::setDisableNotification(const bool &disable_notification) {
    m_disable_notification = disable_notification;
    m_disable_notification_isSet = true;
}

bool OAIPost_copyMessages_request::is_disable_notification_Set() const{
    return m_disable_notification_isSet;
}

bool OAIPost_copyMessages_request::is_disable_notification_Valid() const{
    return m_disable_notification_isValid;
}

bool OAIPost_copyMessages_request::isProtectContent() const {
    return m_protect_content;
}
void OAIPost_copyMessages_request::setProtectContent(const bool &protect_content) {
    m_protect_content = protect_content;
    m_protect_content_isSet = true;
}

bool OAIPost_copyMessages_request::is_protect_content_Set() const{
    return m_protect_content_isSet;
}

bool OAIPost_copyMessages_request::is_protect_content_Valid() const{
    return m_protect_content_isValid;
}

bool OAIPost_copyMessages_request::isRemoveCaption() const {
    return m_remove_caption;
}
void OAIPost_copyMessages_request::setRemoveCaption(const bool &remove_caption) {
    m_remove_caption = remove_caption;
    m_remove_caption_isSet = true;
}

bool OAIPost_copyMessages_request::is_remove_caption_Set() const{
    return m_remove_caption_isSet;
}

bool OAIPost_copyMessages_request::is_remove_caption_Valid() const{
    return m_remove_caption_isValid;
}

bool OAIPost_copyMessages_request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_chat_id.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_from_chat_id.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_message_ids.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_message_thread_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_disable_notification_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_protect_content_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_remove_caption_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPost_copyMessages_request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_chat_id_isValid && m_from_chat_id_isValid && m_message_ids_isValid && true;
}

} // namespace tele_rest
