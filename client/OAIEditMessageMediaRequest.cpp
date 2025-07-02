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

#include "OAIEditMessageMediaRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIEditMessageMediaRequest::OAIEditMessageMediaRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEditMessageMediaRequest::OAIEditMessageMediaRequest() {
    this->initializeModel();
}

OAIEditMessageMediaRequest::~OAIEditMessageMediaRequest() {}

void OAIEditMessageMediaRequest::initializeModel() {

    m_media_isSet = false;
    m_media_isValid = false;

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

void OAIEditMessageMediaRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEditMessageMediaRequest::fromJsonObject(QJsonObject json) {

    m_media_isValid = ::tele_rest::fromJsonValue(m_media, json[QString("media")]);
    m_media_isSet = !json[QString("media")].isNull() && m_media_isValid;

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

QString OAIEditMessageMediaRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEditMessageMediaRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_media.isSet()) {
        obj.insert(QString("media"), ::tele_rest::toJsonValue(m_media));
    }
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

OAIInputMedia OAIEditMessageMediaRequest::getMedia() const {
    return m_media;
}
void OAIEditMessageMediaRequest::setMedia(const OAIInputMedia &media) {
    m_media = media;
    m_media_isSet = true;
}

bool OAIEditMessageMediaRequest::is_media_Set() const{
    return m_media_isSet;
}

bool OAIEditMessageMediaRequest::is_media_Valid() const{
    return m_media_isValid;
}

QString OAIEditMessageMediaRequest::getBusinessConnectionId() const {
    return m_business_connection_id;
}
void OAIEditMessageMediaRequest::setBusinessConnectionId(const QString &business_connection_id) {
    m_business_connection_id = business_connection_id;
    m_business_connection_id_isSet = true;
}

bool OAIEditMessageMediaRequest::is_business_connection_id_Set() const{
    return m_business_connection_id_isSet;
}

bool OAIEditMessageMediaRequest::is_business_connection_id_Valid() const{
    return m_business_connection_id_isValid;
}

OAIEditMessageTextRequest_chat_id OAIEditMessageMediaRequest::getChatId() const {
    return m_chat_id;
}
void OAIEditMessageMediaRequest::setChatId(const OAIEditMessageTextRequest_chat_id &chat_id) {
    m_chat_id = chat_id;
    m_chat_id_isSet = true;
}

bool OAIEditMessageMediaRequest::is_chat_id_Set() const{
    return m_chat_id_isSet;
}

bool OAIEditMessageMediaRequest::is_chat_id_Valid() const{
    return m_chat_id_isValid;
}

qint32 OAIEditMessageMediaRequest::getMessageId() const {
    return m_message_id;
}
void OAIEditMessageMediaRequest::setMessageId(const qint32 &message_id) {
    m_message_id = message_id;
    m_message_id_isSet = true;
}

bool OAIEditMessageMediaRequest::is_message_id_Set() const{
    return m_message_id_isSet;
}

bool OAIEditMessageMediaRequest::is_message_id_Valid() const{
    return m_message_id_isValid;
}

QString OAIEditMessageMediaRequest::getInlineMessageId() const {
    return m_inline_message_id;
}
void OAIEditMessageMediaRequest::setInlineMessageId(const QString &inline_message_id) {
    m_inline_message_id = inline_message_id;
    m_inline_message_id_isSet = true;
}

bool OAIEditMessageMediaRequest::is_inline_message_id_Set() const{
    return m_inline_message_id_isSet;
}

bool OAIEditMessageMediaRequest::is_inline_message_id_Valid() const{
    return m_inline_message_id_isValid;
}

OAIInlineKeyboardMarkup OAIEditMessageMediaRequest::getReplyMarkup() const {
    return m_reply_markup;
}
void OAIEditMessageMediaRequest::setReplyMarkup(const OAIInlineKeyboardMarkup &reply_markup) {
    m_reply_markup = reply_markup;
    m_reply_markup_isSet = true;
}

bool OAIEditMessageMediaRequest::is_reply_markup_Set() const{
    return m_reply_markup_isSet;
}

bool OAIEditMessageMediaRequest::is_reply_markup_Valid() const{
    return m_reply_markup_isValid;
}

bool OAIEditMessageMediaRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_media.isSet()) {
            isObjectUpdated = true;
            break;
        }

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

bool OAIEditMessageMediaRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_media_isValid && true;
}

} // namespace tele_rest
