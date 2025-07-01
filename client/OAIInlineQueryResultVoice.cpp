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

#include "OAIInlineQueryResultVoice.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIInlineQueryResultVoice::OAIInlineQueryResultVoice(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIInlineQueryResultVoice::OAIInlineQueryResultVoice() {
    this->initializeModel();
}

OAIInlineQueryResultVoice::~OAIInlineQueryResultVoice() {}

void OAIInlineQueryResultVoice::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_id_isSet = false;
    m_id_isValid = false;

    m_voice_url_isSet = false;
    m_voice_url_isValid = false;

    m_title_isSet = false;
    m_title_isValid = false;

    m_caption_isSet = false;
    m_caption_isValid = false;

    m_parse_mode_isSet = false;
    m_parse_mode_isValid = false;

    m_caption_entities_isSet = false;
    m_caption_entities_isValid = false;

    m_voice_duration_isSet = false;
    m_voice_duration_isValid = false;

    m_reply_markup_isSet = false;
    m_reply_markup_isValid = false;

    m_input_message_content_isSet = false;
    m_input_message_content_isValid = false;
}

void OAIInlineQueryResultVoice::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIInlineQueryResultVoice::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::tele_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_id_isValid = ::tele_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_voice_url_isValid = ::tele_rest::fromJsonValue(m_voice_url, json[QString("voice_url")]);
    m_voice_url_isSet = !json[QString("voice_url")].isNull() && m_voice_url_isValid;

    m_title_isValid = ::tele_rest::fromJsonValue(m_title, json[QString("title")]);
    m_title_isSet = !json[QString("title")].isNull() && m_title_isValid;

    m_caption_isValid = ::tele_rest::fromJsonValue(m_caption, json[QString("caption")]);
    m_caption_isSet = !json[QString("caption")].isNull() && m_caption_isValid;

    m_parse_mode_isValid = ::tele_rest::fromJsonValue(m_parse_mode, json[QString("parse_mode")]);
    m_parse_mode_isSet = !json[QString("parse_mode")].isNull() && m_parse_mode_isValid;

    m_caption_entities_isValid = ::tele_rest::fromJsonValue(m_caption_entities, json[QString("caption_entities")]);
    m_caption_entities_isSet = !json[QString("caption_entities")].isNull() && m_caption_entities_isValid;

    m_voice_duration_isValid = ::tele_rest::fromJsonValue(m_voice_duration, json[QString("voice_duration")]);
    m_voice_duration_isSet = !json[QString("voice_duration")].isNull() && m_voice_duration_isValid;

    m_reply_markup_isValid = ::tele_rest::fromJsonValue(m_reply_markup, json[QString("reply_markup")]);
    m_reply_markup_isSet = !json[QString("reply_markup")].isNull() && m_reply_markup_isValid;

    m_input_message_content_isValid = ::tele_rest::fromJsonValue(m_input_message_content, json[QString("input_message_content")]);
    m_input_message_content_isSet = !json[QString("input_message_content")].isNull() && m_input_message_content_isValid;
}

QString OAIInlineQueryResultVoice::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIInlineQueryResultVoice::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::tele_rest::toJsonValue(m_type));
    }
    if (m_id_isSet) {
        obj.insert(QString("id"), ::tele_rest::toJsonValue(m_id));
    }
    if (m_voice_url_isSet) {
        obj.insert(QString("voice_url"), ::tele_rest::toJsonValue(m_voice_url));
    }
    if (m_title_isSet) {
        obj.insert(QString("title"), ::tele_rest::toJsonValue(m_title));
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
    if (m_voice_duration_isSet) {
        obj.insert(QString("voice_duration"), ::tele_rest::toJsonValue(m_voice_duration));
    }
    if (m_reply_markup.isSet()) {
        obj.insert(QString("reply_markup"), ::tele_rest::toJsonValue(m_reply_markup));
    }
    if (m_input_message_content.isSet()) {
        obj.insert(QString("input_message_content"), ::tele_rest::toJsonValue(m_input_message_content));
    }
    return obj;
}

QString OAIInlineQueryResultVoice::getType() const {
    return m_type;
}
void OAIInlineQueryResultVoice::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIInlineQueryResultVoice::is_type_Set() const{
    return m_type_isSet;
}

bool OAIInlineQueryResultVoice::is_type_Valid() const{
    return m_type_isValid;
}

QString OAIInlineQueryResultVoice::getId() const {
    return m_id;
}
void OAIInlineQueryResultVoice::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIInlineQueryResultVoice::is_id_Set() const{
    return m_id_isSet;
}

bool OAIInlineQueryResultVoice::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIInlineQueryResultVoice::getVoiceUrl() const {
    return m_voice_url;
}
void OAIInlineQueryResultVoice::setVoiceUrl(const QString &voice_url) {
    m_voice_url = voice_url;
    m_voice_url_isSet = true;
}

bool OAIInlineQueryResultVoice::is_voice_url_Set() const{
    return m_voice_url_isSet;
}

bool OAIInlineQueryResultVoice::is_voice_url_Valid() const{
    return m_voice_url_isValid;
}

QString OAIInlineQueryResultVoice::getTitle() const {
    return m_title;
}
void OAIInlineQueryResultVoice::setTitle(const QString &title) {
    m_title = title;
    m_title_isSet = true;
}

bool OAIInlineQueryResultVoice::is_title_Set() const{
    return m_title_isSet;
}

bool OAIInlineQueryResultVoice::is_title_Valid() const{
    return m_title_isValid;
}

QString OAIInlineQueryResultVoice::getCaption() const {
    return m_caption;
}
void OAIInlineQueryResultVoice::setCaption(const QString &caption) {
    m_caption = caption;
    m_caption_isSet = true;
}

bool OAIInlineQueryResultVoice::is_caption_Set() const{
    return m_caption_isSet;
}

bool OAIInlineQueryResultVoice::is_caption_Valid() const{
    return m_caption_isValid;
}

QString OAIInlineQueryResultVoice::getParseMode() const {
    return m_parse_mode;
}
void OAIInlineQueryResultVoice::setParseMode(const QString &parse_mode) {
    m_parse_mode = parse_mode;
    m_parse_mode_isSet = true;
}

bool OAIInlineQueryResultVoice::is_parse_mode_Set() const{
    return m_parse_mode_isSet;
}

bool OAIInlineQueryResultVoice::is_parse_mode_Valid() const{
    return m_parse_mode_isValid;
}

QList<OAIMessageEntity> OAIInlineQueryResultVoice::getCaptionEntities() const {
    return m_caption_entities;
}
void OAIInlineQueryResultVoice::setCaptionEntities(const QList<OAIMessageEntity> &caption_entities) {
    m_caption_entities = caption_entities;
    m_caption_entities_isSet = true;
}

bool OAIInlineQueryResultVoice::is_caption_entities_Set() const{
    return m_caption_entities_isSet;
}

bool OAIInlineQueryResultVoice::is_caption_entities_Valid() const{
    return m_caption_entities_isValid;
}

qint32 OAIInlineQueryResultVoice::getVoiceDuration() const {
    return m_voice_duration;
}
void OAIInlineQueryResultVoice::setVoiceDuration(const qint32 &voice_duration) {
    m_voice_duration = voice_duration;
    m_voice_duration_isSet = true;
}

bool OAIInlineQueryResultVoice::is_voice_duration_Set() const{
    return m_voice_duration_isSet;
}

bool OAIInlineQueryResultVoice::is_voice_duration_Valid() const{
    return m_voice_duration_isValid;
}

OAIInlineKeyboardMarkup OAIInlineQueryResultVoice::getReplyMarkup() const {
    return m_reply_markup;
}
void OAIInlineQueryResultVoice::setReplyMarkup(const OAIInlineKeyboardMarkup &reply_markup) {
    m_reply_markup = reply_markup;
    m_reply_markup_isSet = true;
}

bool OAIInlineQueryResultVoice::is_reply_markup_Set() const{
    return m_reply_markup_isSet;
}

bool OAIInlineQueryResultVoice::is_reply_markup_Valid() const{
    return m_reply_markup_isValid;
}

OAIInputMessageContent OAIInlineQueryResultVoice::getInputMessageContent() const {
    return m_input_message_content;
}
void OAIInlineQueryResultVoice::setInputMessageContent(const OAIInputMessageContent &input_message_content) {
    m_input_message_content = input_message_content;
    m_input_message_content_isSet = true;
}

bool OAIInlineQueryResultVoice::is_input_message_content_Set() const{
    return m_input_message_content_isSet;
}

bool OAIInlineQueryResultVoice::is_input_message_content_Valid() const{
    return m_input_message_content_isValid;
}

bool OAIInlineQueryResultVoice::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_voice_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_title_isSet) {
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

        if (m_voice_duration_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_reply_markup.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_input_message_content.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIInlineQueryResultVoice::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && m_id_isValid && m_voice_url_isValid && m_title_isValid && true;
}

} // namespace tele_rest
