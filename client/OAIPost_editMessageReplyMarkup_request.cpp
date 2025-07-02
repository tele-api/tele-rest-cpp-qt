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

#include "OAIPost_editMessageReplyMarkup_request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIPost_editMessageReplyMarkup_request::OAIPost_editMessageReplyMarkup_request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPost_editMessageReplyMarkup_request::OAIPost_editMessageReplyMarkup_request() {
    this->initializeModel();
}

OAIPost_editMessageReplyMarkup_request::~OAIPost_editMessageReplyMarkup_request() {}

void OAIPost_editMessageReplyMarkup_request::initializeModel() {

    m_business_connection_id_isSet = false;
    m_business_connection_id_isValid = false;

    m_chat_id_isSet = false;
    m_chat_id_isValid = false;

    m_message_id_isSet = false;
    m_message_id_isValid = false;

    m_inline_message_id_isSet = false;
    m_inline_message_id_isValid = false;

    m_reply_markup_isSet = false;
    m_reply_markup_isValid = false;
}

void OAIPost_editMessageReplyMarkup_request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPost_editMessageReplyMarkup_request::fromJsonObject(QJsonObject json) {

    m_business_connection_id_isValid = ::tele_rest::fromJsonValue(m_business_connection_id, json[QString("business_connection_id")]);
    m_business_connection_id_isSet = !json[QString("business_connection_id")].isNull() && m_business_connection_id_isValid;

    m_chat_id_isValid = ::tele_rest::fromJsonValue(m_chat_id, json[QString("chat_id")]);
    m_chat_id_isSet = !json[QString("chat_id")].isNull() && m_chat_id_isValid;

    m_message_id_isValid = ::tele_rest::fromJsonValue(m_message_id, json[QString("message_id")]);
    m_message_id_isSet = !json[QString("message_id")].isNull() && m_message_id_isValid;

    m_inline_message_id_isValid = ::tele_rest::fromJsonValue(m_inline_message_id, json[QString("inline_message_id")]);
    m_inline_message_id_isSet = !json[QString("inline_message_id")].isNull() && m_inline_message_id_isValid;

    m_reply_markup_isValid = ::tele_rest::fromJsonValue(m_reply_markup, json[QString("reply_markup")]);
    m_reply_markup_isSet = !json[QString("reply_markup")].isNull() && m_reply_markup_isValid;
}

QString OAIPost_editMessageReplyMarkup_request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPost_editMessageReplyMarkup_request::asJsonObject() const {
    QJsonObject obj;
    if (m_business_connection_id_isSet) {
        obj.insert(QString("business_connection_id"), ::tele_rest::toJsonValue(m_business_connection_id));
    }
    if (m_chat_id.isSet()) {
        obj.insert(QString("chat_id"), ::tele_rest::toJsonValue(m_chat_id));
    }
    if (m_message_id_isSet) {
        obj.insert(QString("message_id"), ::tele_rest::toJsonValue(m_message_id));
    }
    if (m_inline_message_id_isSet) {
        obj.insert(QString("inline_message_id"), ::tele_rest::toJsonValue(m_inline_message_id));
    }
    if (m_reply_markup.isSet()) {
        obj.insert(QString("reply_markup"), ::tele_rest::toJsonValue(m_reply_markup));
    }
    return obj;
}

QString OAIPost_editMessageReplyMarkup_request::getBusinessConnectionId() const {
    return m_business_connection_id;
}
void OAIPost_editMessageReplyMarkup_request::setBusinessConnectionId(const QString &business_connection_id) {
    m_business_connection_id = business_connection_id;
    m_business_connection_id_isSet = true;
}

bool OAIPost_editMessageReplyMarkup_request::is_business_connection_id_Set() const{
    return m_business_connection_id_isSet;
}

bool OAIPost_editMessageReplyMarkup_request::is_business_connection_id_Valid() const{
    return m_business_connection_id_isValid;
}

OAIPost_editMessageText_request_chat_id OAIPost_editMessageReplyMarkup_request::getChatId() const {
    return m_chat_id;
}
void OAIPost_editMessageReplyMarkup_request::setChatId(const OAIPost_editMessageText_request_chat_id &chat_id) {
    m_chat_id = chat_id;
    m_chat_id_isSet = true;
}

bool OAIPost_editMessageReplyMarkup_request::is_chat_id_Set() const{
    return m_chat_id_isSet;
}

bool OAIPost_editMessageReplyMarkup_request::is_chat_id_Valid() const{
    return m_chat_id_isValid;
}

qint32 OAIPost_editMessageReplyMarkup_request::getMessageId() const {
    return m_message_id;
}
void OAIPost_editMessageReplyMarkup_request::setMessageId(const qint32 &message_id) {
    m_message_id = message_id;
    m_message_id_isSet = true;
}

bool OAIPost_editMessageReplyMarkup_request::is_message_id_Set() const{
    return m_message_id_isSet;
}

bool OAIPost_editMessageReplyMarkup_request::is_message_id_Valid() const{
    return m_message_id_isValid;
}

QString OAIPost_editMessageReplyMarkup_request::getInlineMessageId() const {
    return m_inline_message_id;
}
void OAIPost_editMessageReplyMarkup_request::setInlineMessageId(const QString &inline_message_id) {
    m_inline_message_id = inline_message_id;
    m_inline_message_id_isSet = true;
}

bool OAIPost_editMessageReplyMarkup_request::is_inline_message_id_Set() const{
    return m_inline_message_id_isSet;
}

bool OAIPost_editMessageReplyMarkup_request::is_inline_message_id_Valid() const{
    return m_inline_message_id_isValid;
}

OAIInlineKeyboardMarkup OAIPost_editMessageReplyMarkup_request::getReplyMarkup() const {
    return m_reply_markup;
}
void OAIPost_editMessageReplyMarkup_request::setReplyMarkup(const OAIInlineKeyboardMarkup &reply_markup) {
    m_reply_markup = reply_markup;
    m_reply_markup_isSet = true;
}

bool OAIPost_editMessageReplyMarkup_request::is_reply_markup_Set() const{
    return m_reply_markup_isSet;
}

bool OAIPost_editMessageReplyMarkup_request::is_reply_markup_Valid() const{
    return m_reply_markup_isValid;
}

bool OAIPost_editMessageReplyMarkup_request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_business_connection_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_chat_id.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_message_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_inline_message_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_reply_markup.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPost_editMessageReplyMarkup_request::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace tele_rest
