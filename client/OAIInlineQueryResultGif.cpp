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

#include "OAIInlineQueryResultGif.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIInlineQueryResultGif::OAIInlineQueryResultGif(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIInlineQueryResultGif::OAIInlineQueryResultGif() {
    this->initializeModel();
}

OAIInlineQueryResultGif::~OAIInlineQueryResultGif() {}

void OAIInlineQueryResultGif::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_id_isSet = false;
    m_id_isValid = false;

    m_gif_url_isSet = false;
    m_gif_url_isValid = false;

    m_thumbnail_url_isSet = false;
    m_thumbnail_url_isValid = false;

    m_gif_width_isSet = false;
    m_gif_width_isValid = false;

    m_gif_height_isSet = false;
    m_gif_height_isValid = false;

    m_gif_duration_isSet = false;
    m_gif_duration_isValid = false;

    m_thumbnail_mime_type_isSet = false;
    m_thumbnail_mime_type_isValid = false;

    m_title_isSet = false;
    m_title_isValid = false;

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

    m_input_message_content_isSet = false;
    m_input_message_content_isValid = false;
}

void OAIInlineQueryResultGif::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIInlineQueryResultGif::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::tele_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_id_isValid = ::tele_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_gif_url_isValid = ::tele_rest::fromJsonValue(m_gif_url, json[QString("gif_url")]);
    m_gif_url_isSet = !json[QString("gif_url")].isNull() && m_gif_url_isValid;

    m_thumbnail_url_isValid = ::tele_rest::fromJsonValue(m_thumbnail_url, json[QString("thumbnail_url")]);
    m_thumbnail_url_isSet = !json[QString("thumbnail_url")].isNull() && m_thumbnail_url_isValid;

    m_gif_width_isValid = ::tele_rest::fromJsonValue(m_gif_width, json[QString("gif_width")]);
    m_gif_width_isSet = !json[QString("gif_width")].isNull() && m_gif_width_isValid;

    m_gif_height_isValid = ::tele_rest::fromJsonValue(m_gif_height, json[QString("gif_height")]);
    m_gif_height_isSet = !json[QString("gif_height")].isNull() && m_gif_height_isValid;

    m_gif_duration_isValid = ::tele_rest::fromJsonValue(m_gif_duration, json[QString("gif_duration")]);
    m_gif_duration_isSet = !json[QString("gif_duration")].isNull() && m_gif_duration_isValid;

    m_thumbnail_mime_type_isValid = ::tele_rest::fromJsonValue(m_thumbnail_mime_type, json[QString("thumbnail_mime_type")]);
    m_thumbnail_mime_type_isSet = !json[QString("thumbnail_mime_type")].isNull() && m_thumbnail_mime_type_isValid;

    m_title_isValid = ::tele_rest::fromJsonValue(m_title, json[QString("title")]);
    m_title_isSet = !json[QString("title")].isNull() && m_title_isValid;

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

    m_input_message_content_isValid = ::tele_rest::fromJsonValue(m_input_message_content, json[QString("input_message_content")]);
    m_input_message_content_isSet = !json[QString("input_message_content")].isNull() && m_input_message_content_isValid;
}

QString OAIInlineQueryResultGif::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIInlineQueryResultGif::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::tele_rest::toJsonValue(m_type));
    }
    if (m_id_isSet) {
        obj.insert(QString("id"), ::tele_rest::toJsonValue(m_id));
    }
    if (m_gif_url_isSet) {
        obj.insert(QString("gif_url"), ::tele_rest::toJsonValue(m_gif_url));
    }
    if (m_thumbnail_url_isSet) {
        obj.insert(QString("thumbnail_url"), ::tele_rest::toJsonValue(m_thumbnail_url));
    }
    if (m_gif_width_isSet) {
        obj.insert(QString("gif_width"), ::tele_rest::toJsonValue(m_gif_width));
    }
    if (m_gif_height_isSet) {
        obj.insert(QString("gif_height"), ::tele_rest::toJsonValue(m_gif_height));
    }
    if (m_gif_duration_isSet) {
        obj.insert(QString("gif_duration"), ::tele_rest::toJsonValue(m_gif_duration));
    }
    if (m_thumbnail_mime_type_isSet) {
        obj.insert(QString("thumbnail_mime_type"), ::tele_rest::toJsonValue(m_thumbnail_mime_type));
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
    if (m_show_caption_above_media_isSet) {
        obj.insert(QString("show_caption_above_media"), ::tele_rest::toJsonValue(m_show_caption_above_media));
    }
    if (m_reply_markup.isSet()) {
        obj.insert(QString("reply_markup"), ::tele_rest::toJsonValue(m_reply_markup));
    }
    if (m_input_message_content.isSet()) {
        obj.insert(QString("input_message_content"), ::tele_rest::toJsonValue(m_input_message_content));
    }
    return obj;
}

QString OAIInlineQueryResultGif::getType() const {
    return m_type;
}
void OAIInlineQueryResultGif::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIInlineQueryResultGif::is_type_Set() const{
    return m_type_isSet;
}

bool OAIInlineQueryResultGif::is_type_Valid() const{
    return m_type_isValid;
}

QString OAIInlineQueryResultGif::getId() const {
    return m_id;
}
void OAIInlineQueryResultGif::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIInlineQueryResultGif::is_id_Set() const{
    return m_id_isSet;
}

bool OAIInlineQueryResultGif::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIInlineQueryResultGif::getGifUrl() const {
    return m_gif_url;
}
void OAIInlineQueryResultGif::setGifUrl(const QString &gif_url) {
    m_gif_url = gif_url;
    m_gif_url_isSet = true;
}

bool OAIInlineQueryResultGif::is_gif_url_Set() const{
    return m_gif_url_isSet;
}

bool OAIInlineQueryResultGif::is_gif_url_Valid() const{
    return m_gif_url_isValid;
}

QString OAIInlineQueryResultGif::getThumbnailUrl() const {
    return m_thumbnail_url;
}
void OAIInlineQueryResultGif::setThumbnailUrl(const QString &thumbnail_url) {
    m_thumbnail_url = thumbnail_url;
    m_thumbnail_url_isSet = true;
}

bool OAIInlineQueryResultGif::is_thumbnail_url_Set() const{
    return m_thumbnail_url_isSet;
}

bool OAIInlineQueryResultGif::is_thumbnail_url_Valid() const{
    return m_thumbnail_url_isValid;
}

qint32 OAIInlineQueryResultGif::getGifWidth() const {
    return m_gif_width;
}
void OAIInlineQueryResultGif::setGifWidth(const qint32 &gif_width) {
    m_gif_width = gif_width;
    m_gif_width_isSet = true;
}

bool OAIInlineQueryResultGif::is_gif_width_Set() const{
    return m_gif_width_isSet;
}

bool OAIInlineQueryResultGif::is_gif_width_Valid() const{
    return m_gif_width_isValid;
}

qint32 OAIInlineQueryResultGif::getGifHeight() const {
    return m_gif_height;
}
void OAIInlineQueryResultGif::setGifHeight(const qint32 &gif_height) {
    m_gif_height = gif_height;
    m_gif_height_isSet = true;
}

bool OAIInlineQueryResultGif::is_gif_height_Set() const{
    return m_gif_height_isSet;
}

bool OAIInlineQueryResultGif::is_gif_height_Valid() const{
    return m_gif_height_isValid;
}

qint32 OAIInlineQueryResultGif::getGifDuration() const {
    return m_gif_duration;
}
void OAIInlineQueryResultGif::setGifDuration(const qint32 &gif_duration) {
    m_gif_duration = gif_duration;
    m_gif_duration_isSet = true;
}

bool OAIInlineQueryResultGif::is_gif_duration_Set() const{
    return m_gif_duration_isSet;
}

bool OAIInlineQueryResultGif::is_gif_duration_Valid() const{
    return m_gif_duration_isValid;
}

QString OAIInlineQueryResultGif::getThumbnailMimeType() const {
    return m_thumbnail_mime_type;
}
void OAIInlineQueryResultGif::setThumbnailMimeType(const QString &thumbnail_mime_type) {
    m_thumbnail_mime_type = thumbnail_mime_type;
    m_thumbnail_mime_type_isSet = true;
}

bool OAIInlineQueryResultGif::is_thumbnail_mime_type_Set() const{
    return m_thumbnail_mime_type_isSet;
}

bool OAIInlineQueryResultGif::is_thumbnail_mime_type_Valid() const{
    return m_thumbnail_mime_type_isValid;
}

QString OAIInlineQueryResultGif::getTitle() const {
    return m_title;
}
void OAIInlineQueryResultGif::setTitle(const QString &title) {
    m_title = title;
    m_title_isSet = true;
}

bool OAIInlineQueryResultGif::is_title_Set() const{
    return m_title_isSet;
}

bool OAIInlineQueryResultGif::is_title_Valid() const{
    return m_title_isValid;
}

QString OAIInlineQueryResultGif::getCaption() const {
    return m_caption;
}
void OAIInlineQueryResultGif::setCaption(const QString &caption) {
    m_caption = caption;
    m_caption_isSet = true;
}

bool OAIInlineQueryResultGif::is_caption_Set() const{
    return m_caption_isSet;
}

bool OAIInlineQueryResultGif::is_caption_Valid() const{
    return m_caption_isValid;
}

QString OAIInlineQueryResultGif::getParseMode() const {
    return m_parse_mode;
}
void OAIInlineQueryResultGif::setParseMode(const QString &parse_mode) {
    m_parse_mode = parse_mode;
    m_parse_mode_isSet = true;
}

bool OAIInlineQueryResultGif::is_parse_mode_Set() const{
    return m_parse_mode_isSet;
}

bool OAIInlineQueryResultGif::is_parse_mode_Valid() const{
    return m_parse_mode_isValid;
}

QList<OAIMessageEntity> OAIInlineQueryResultGif::getCaptionEntities() const {
    return m_caption_entities;
}
void OAIInlineQueryResultGif::setCaptionEntities(const QList<OAIMessageEntity> &caption_entities) {
    m_caption_entities = caption_entities;
    m_caption_entities_isSet = true;
}

bool OAIInlineQueryResultGif::is_caption_entities_Set() const{
    return m_caption_entities_isSet;
}

bool OAIInlineQueryResultGif::is_caption_entities_Valid() const{
    return m_caption_entities_isValid;
}

bool OAIInlineQueryResultGif::isShowCaptionAboveMedia() const {
    return m_show_caption_above_media;
}
void OAIInlineQueryResultGif::setShowCaptionAboveMedia(const bool &show_caption_above_media) {
    m_show_caption_above_media = show_caption_above_media;
    m_show_caption_above_media_isSet = true;
}

bool OAIInlineQueryResultGif::is_show_caption_above_media_Set() const{
    return m_show_caption_above_media_isSet;
}

bool OAIInlineQueryResultGif::is_show_caption_above_media_Valid() const{
    return m_show_caption_above_media_isValid;
}

OAIInlineKeyboardMarkup OAIInlineQueryResultGif::getReplyMarkup() const {
    return m_reply_markup;
}
void OAIInlineQueryResultGif::setReplyMarkup(const OAIInlineKeyboardMarkup &reply_markup) {
    m_reply_markup = reply_markup;
    m_reply_markup_isSet = true;
}

bool OAIInlineQueryResultGif::is_reply_markup_Set() const{
    return m_reply_markup_isSet;
}

bool OAIInlineQueryResultGif::is_reply_markup_Valid() const{
    return m_reply_markup_isValid;
}

OAIInputMessageContent OAIInlineQueryResultGif::getInputMessageContent() const {
    return m_input_message_content;
}
void OAIInlineQueryResultGif::setInputMessageContent(const OAIInputMessageContent &input_message_content) {
    m_input_message_content = input_message_content;
    m_input_message_content_isSet = true;
}

bool OAIInlineQueryResultGif::is_input_message_content_Set() const{
    return m_input_message_content_isSet;
}

bool OAIInlineQueryResultGif::is_input_message_content_Valid() const{
    return m_input_message_content_isValid;
}

bool OAIInlineQueryResultGif::isSet() const {
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

        if (m_gif_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_thumbnail_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_gif_width_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_gif_height_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_gif_duration_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_thumbnail_mime_type_isSet) {
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

        if (m_show_caption_above_media_isSet) {
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

bool OAIInlineQueryResultGif::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && m_id_isValid && m_gif_url_isValid && m_thumbnail_url_isValid && true;
}

} // namespace tele_rest
