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

#include "OAI_editMessageCaption_post_request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAI_editMessageCaption_post_request::OAI_editMessageCaption_post_request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAI_editMessageCaption_post_request::OAI_editMessageCaption_post_request() {
    this->initializeModel();
}

OAI_editMessageCaption_post_request::~OAI_editMessageCaption_post_request() {}

void OAI_editMessageCaption_post_request::initializeModel() {

    m_business_connection_id_isSet = false;
    m_business_connection_id_isValid = false;

    m_chat_id_isSet = false;
    m_chat_id_isValid = false;

    m_message_id_isSet = false;
    m_message_id_isValid = false;

    m_inline_message_id_isSet = false;
    m_inline_message_id_isValid = false;

    m_caption_isSet = false;
    m_caption_isValid = false;

    m_parse_mode_isSet = false;
    m_parse_mode_isValid = false;

    m_caption_entities_isSet = false;
    m_caption_entities_isValid = false;

    m_show_caption_above_media_isSet = false;
    m_show_caption_above_media_isValid = false;

    m_reply_markup_isSet = false;
    m_reply_markup_isValid = false;
}

void OAI_editMessageCaption_post_request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAI_editMessageCaption_post_request::fromJsonObject(QJsonObject json) {

    m_business_connection_id_isValid = ::tele_rest::fromJsonValue(m_business_connection_id, json[QString("business_connection_id")]);
    m_business_connection_id_isSet = !json[QString("business_connection_id")].isNull() && m_business_connection_id_isValid;

    m_chat_id_isValid = ::tele_rest::fromJsonValue(m_chat_id, json[QString("chat_id")]);
    m_chat_id_isSet = !json[QString("chat_id")].isNull() && m_chat_id_isValid;

    m_message_id_isValid = ::tele_rest::fromJsonValue(m_message_id, json[QString("message_id")]);
    m_message_id_isSet = !json[QString("message_id")].isNull() && m_message_id_isValid;

    m_inline_message_id_isValid = ::tele_rest::fromJsonValue(m_inline_message_id, json[QString("inline_message_id")]);
    m_inline_message_id_isSet = !json[QString("inline_message_id")].isNull() && m_inline_message_id_isValid;

    m_caption_isValid = ::tele_rest::fromJsonValue(m_caption, json[QString("caption")]);
    m_caption_isSet = !json[QString("caption")].isNull() && m_caption_isValid;

    m_parse_mode_isValid = ::tele_rest::fromJsonValue(m_parse_mode, json[QString("parse_mode")]);
    m_parse_mode_isSet = !json[QString("parse_mode")].isNull() && m_parse_mode_isValid;

    m_caption_entities_isValid = ::tele_rest::fromJsonValue(m_caption_entities, json[QString("caption_entities")]);
    m_caption_entities_isSet = !json[QString("caption_entities")].isNull() && m_caption_entities_isValid;

    m_show_caption_above_media_isValid = ::tele_rest::fromJsonValue(m_show_caption_above_media, json[QString("show_caption_above_media")]);
    m_show_caption_above_media_isSet = !json[QString("show_caption_above_media")].isNull() && m_show_caption_above_media_isValid;

    m_reply_markup_isValid = ::tele_rest::fromJsonValue(m_reply_markup, json[QString("reply_markup")]);
    m_reply_markup_isSet = !json[QString("reply_markup")].isNull() && m_reply_markup_isValid;
}

QString OAI_editMessageCaption_post_request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAI_editMessageCaption_post_request::asJsonObject() const {
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
    if (m_caption_isSet) {
        obj.insert(QString("caption"), ::tele_rest::toJsonValue(m_caption));
    }
    if (m_parse_mode_isSet) {
        obj.insert(QString("parse_mode"), ::tele_rest::toJsonValue(m_parse_mode));
    }
    if (m_caption_entities.size() > 0) {
        obj.insert(QString("caption_entities"), ::tele_rest::toJsonValue(m_caption_entities));
    }
    if (m_show_caption_above_media_isSet) {
        obj.insert(QString("show_caption_above_media"), ::tele_rest::toJsonValue(m_show_caption_above_media));
    }
    if (m_reply_markup.isSet()) {
        obj.insert(QString("reply_markup"), ::tele_rest::toJsonValue(m_reply_markup));
    }
    return obj;
}

QString OAI_editMessageCaption_post_request::getBusinessConnectionId() const {
    return m_business_connection_id;
}
void OAI_editMessageCaption_post_request::setBusinessConnectionId(const QString &business_connection_id) {
    m_business_connection_id = business_connection_id;
    m_business_connection_id_isSet = true;
}

bool OAI_editMessageCaption_post_request::is_business_connection_id_Set() const{
    return m_business_connection_id_isSet;
}

bool OAI_editMessageCaption_post_request::is_business_connection_id_Valid() const{
    return m_business_connection_id_isValid;
}

OAI_editMessageText_post_request_chat_id OAI_editMessageCaption_post_request::getChatId() const {
    return m_chat_id;
}
void OAI_editMessageCaption_post_request::setChatId(const OAI_editMessageText_post_request_chat_id &chat_id) {
    m_chat_id = chat_id;
    m_chat_id_isSet = true;
}

bool OAI_editMessageCaption_post_request::is_chat_id_Set() const{
    return m_chat_id_isSet;
}

bool OAI_editMessageCaption_post_request::is_chat_id_Valid() const{
    return m_chat_id_isValid;
}

qint32 OAI_editMessageCaption_post_request::getMessageId() const {
    return m_message_id;
}
void OAI_editMessageCaption_post_request::setMessageId(const qint32 &message_id) {
    m_message_id = message_id;
    m_message_id_isSet = true;
}

bool OAI_editMessageCaption_post_request::is_message_id_Set() const{
    return m_message_id_isSet;
}

bool OAI_editMessageCaption_post_request::is_message_id_Valid() const{
    return m_message_id_isValid;
}

QString OAI_editMessageCaption_post_request::getInlineMessageId() const {
    return m_inline_message_id;
}
void OAI_editMessageCaption_post_request::setInlineMessageId(const QString &inline_message_id) {
    m_inline_message_id = inline_message_id;
    m_inline_message_id_isSet = true;
}

bool OAI_editMessageCaption_post_request::is_inline_message_id_Set() const{
    return m_inline_message_id_isSet;
}

bool OAI_editMessageCaption_post_request::is_inline_message_id_Valid() const{
    return m_inline_message_id_isValid;
}

QString OAI_editMessageCaption_post_request::getCaption() const {
    return m_caption;
}
void OAI_editMessageCaption_post_request::setCaption(const QString &caption) {
    m_caption = caption;
    m_caption_isSet = true;
}

bool OAI_editMessageCaption_post_request::is_caption_Set() const{
    return m_caption_isSet;
}

bool OAI_editMessageCaption_post_request::is_caption_Valid() const{
    return m_caption_isValid;
}

QString OAI_editMessageCaption_post_request::getParseMode() const {
    return m_parse_mode;
}
void OAI_editMessageCaption_post_request::setParseMode(const QString &parse_mode) {
    m_parse_mode = parse_mode;
    m_parse_mode_isSet = true;
}

bool OAI_editMessageCaption_post_request::is_parse_mode_Set() const{
    return m_parse_mode_isSet;
}

bool OAI_editMessageCaption_post_request::is_parse_mode_Valid() const{
    return m_parse_mode_isValid;
}

QList<OAIMessageEntity> OAI_editMessageCaption_post_request::getCaptionEntities() const {
    return m_caption_entities;
}
void OAI_editMessageCaption_post_request::setCaptionEntities(const QList<OAIMessageEntity> &caption_entities) {
    m_caption_entities = caption_entities;
    m_caption_entities_isSet = true;
}

bool OAI_editMessageCaption_post_request::is_caption_entities_Set() const{
    return m_caption_entities_isSet;
}

bool OAI_editMessageCaption_post_request::is_caption_entities_Valid() const{
    return m_caption_entities_isValid;
}

bool OAI_editMessageCaption_post_request::isShowCaptionAboveMedia() const {
    return m_show_caption_above_media;
}
void OAI_editMessageCaption_post_request::setShowCaptionAboveMedia(const bool &show_caption_above_media) {
    m_show_caption_above_media = show_caption_above_media;
    m_show_caption_above_media_isSet = true;
}

bool OAI_editMessageCaption_post_request::is_show_caption_above_media_Set() const{
    return m_show_caption_above_media_isSet;
}

bool OAI_editMessageCaption_post_request::is_show_caption_above_media_Valid() const{
    return m_show_caption_above_media_isValid;
}

OAIInlineKeyboardMarkup OAI_editMessageCaption_post_request::getReplyMarkup() const {
    return m_reply_markup;
}
void OAI_editMessageCaption_post_request::setReplyMarkup(const OAIInlineKeyboardMarkup &reply_markup) {
    m_reply_markup = reply_markup;
    m_reply_markup_isSet = true;
}

bool OAI_editMessageCaption_post_request::is_reply_markup_Set() const{
    return m_reply_markup_isSet;
}

bool OAI_editMessageCaption_post_request::is_reply_markup_Valid() const{
    return m_reply_markup_isValid;
}

bool OAI_editMessageCaption_post_request::isSet() const {
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

        if (m_caption_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_parse_mode_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_caption_entities.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_show_caption_above_media_isSet) {
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

bool OAI_editMessageCaption_post_request::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace tele_rest
