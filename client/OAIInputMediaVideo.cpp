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

#include "OAIInputMediaVideo.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIInputMediaVideo::OAIInputMediaVideo(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIInputMediaVideo::OAIInputMediaVideo() {
    this->initializeModel();
}

OAIInputMediaVideo::~OAIInputMediaVideo() {}

void OAIInputMediaVideo::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_media_isSet = false;
    m_media_isValid = false;

    m_thumbnail_isSet = false;
    m_thumbnail_isValid = false;

    m_cover_isSet = false;
    m_cover_isValid = false;

    m_start_timestamp_isSet = false;
    m_start_timestamp_isValid = false;

    m_caption_isSet = false;
    m_caption_isValid = false;

    m_parse_mode_isSet = false;
    m_parse_mode_isValid = false;

    m_caption_entities_isSet = false;
    m_caption_entities_isValid = false;

    m_show_caption_above_media_isSet = false;
    m_show_caption_above_media_isValid = false;

    m_width_isSet = false;
    m_width_isValid = false;

    m_height_isSet = false;
    m_height_isValid = false;

    m_duration_isSet = false;
    m_duration_isValid = false;

    m_supports_streaming_isSet = false;
    m_supports_streaming_isValid = false;

    m_has_spoiler_isSet = false;
    m_has_spoiler_isValid = false;
}

void OAIInputMediaVideo::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIInputMediaVideo::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::tele_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_media_isValid = ::tele_rest::fromJsonValue(m_media, json[QString("media")]);
    m_media_isSet = !json[QString("media")].isNull() && m_media_isValid;

    m_thumbnail_isValid = ::tele_rest::fromJsonValue(m_thumbnail, json[QString("thumbnail")]);
    m_thumbnail_isSet = !json[QString("thumbnail")].isNull() && m_thumbnail_isValid;

    m_cover_isValid = ::tele_rest::fromJsonValue(m_cover, json[QString("cover")]);
    m_cover_isSet = !json[QString("cover")].isNull() && m_cover_isValid;

    m_start_timestamp_isValid = ::tele_rest::fromJsonValue(m_start_timestamp, json[QString("start_timestamp")]);
    m_start_timestamp_isSet = !json[QString("start_timestamp")].isNull() && m_start_timestamp_isValid;

    m_caption_isValid = ::tele_rest::fromJsonValue(m_caption, json[QString("caption")]);
    m_caption_isSet = !json[QString("caption")].isNull() && m_caption_isValid;

    m_parse_mode_isValid = ::tele_rest::fromJsonValue(m_parse_mode, json[QString("parse_mode")]);
    m_parse_mode_isSet = !json[QString("parse_mode")].isNull() && m_parse_mode_isValid;

    m_caption_entities_isValid = ::tele_rest::fromJsonValue(m_caption_entities, json[QString("caption_entities")]);
    m_caption_entities_isSet = !json[QString("caption_entities")].isNull() && m_caption_entities_isValid;

    m_show_caption_above_media_isValid = ::tele_rest::fromJsonValue(m_show_caption_above_media, json[QString("show_caption_above_media")]);
    m_show_caption_above_media_isSet = !json[QString("show_caption_above_media")].isNull() && m_show_caption_above_media_isValid;

    m_width_isValid = ::tele_rest::fromJsonValue(m_width, json[QString("width")]);
    m_width_isSet = !json[QString("width")].isNull() && m_width_isValid;

    m_height_isValid = ::tele_rest::fromJsonValue(m_height, json[QString("height")]);
    m_height_isSet = !json[QString("height")].isNull() && m_height_isValid;

    m_duration_isValid = ::tele_rest::fromJsonValue(m_duration, json[QString("duration")]);
    m_duration_isSet = !json[QString("duration")].isNull() && m_duration_isValid;

    m_supports_streaming_isValid = ::tele_rest::fromJsonValue(m_supports_streaming, json[QString("supports_streaming")]);
    m_supports_streaming_isSet = !json[QString("supports_streaming")].isNull() && m_supports_streaming_isValid;

    m_has_spoiler_isValid = ::tele_rest::fromJsonValue(m_has_spoiler, json[QString("has_spoiler")]);
    m_has_spoiler_isSet = !json[QString("has_spoiler")].isNull() && m_has_spoiler_isValid;
}

QString OAIInputMediaVideo::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIInputMediaVideo::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::tele_rest::toJsonValue(m_type));
    }
    if (m_media_isSet) {
        obj.insert(QString("media"), ::tele_rest::toJsonValue(m_media));
    }
    if (m_thumbnail_isSet) {
        obj.insert(QString("thumbnail"), ::tele_rest::toJsonValue(m_thumbnail));
    }
    if (m_cover_isSet) {
        obj.insert(QString("cover"), ::tele_rest::toJsonValue(m_cover));
    }
    if (m_start_timestamp_isSet) {
        obj.insert(QString("start_timestamp"), ::tele_rest::toJsonValue(m_start_timestamp));
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
    if (m_width_isSet) {
        obj.insert(QString("width"), ::tele_rest::toJsonValue(m_width));
    }
    if (m_height_isSet) {
        obj.insert(QString("height"), ::tele_rest::toJsonValue(m_height));
    }
    if (m_duration_isSet) {
        obj.insert(QString("duration"), ::tele_rest::toJsonValue(m_duration));
    }
    if (m_supports_streaming_isSet) {
        obj.insert(QString("supports_streaming"), ::tele_rest::toJsonValue(m_supports_streaming));
    }
    if (m_has_spoiler_isSet) {
        obj.insert(QString("has_spoiler"), ::tele_rest::toJsonValue(m_has_spoiler));
    }
    return obj;
}

QString OAIInputMediaVideo::getType() const {
    return m_type;
}
void OAIInputMediaVideo::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIInputMediaVideo::is_type_Set() const{
    return m_type_isSet;
}

bool OAIInputMediaVideo::is_type_Valid() const{
    return m_type_isValid;
}

QString OAIInputMediaVideo::getMedia() const {
    return m_media;
}
void OAIInputMediaVideo::setMedia(const QString &media) {
    m_media = media;
    m_media_isSet = true;
}

bool OAIInputMediaVideo::is_media_Set() const{
    return m_media_isSet;
}

bool OAIInputMediaVideo::is_media_Valid() const{
    return m_media_isValid;
}

QString OAIInputMediaVideo::getThumbnail() const {
    return m_thumbnail;
}
void OAIInputMediaVideo::setThumbnail(const QString &thumbnail) {
    m_thumbnail = thumbnail;
    m_thumbnail_isSet = true;
}

bool OAIInputMediaVideo::is_thumbnail_Set() const{
    return m_thumbnail_isSet;
}

bool OAIInputMediaVideo::is_thumbnail_Valid() const{
    return m_thumbnail_isValid;
}

QString OAIInputMediaVideo::getCover() const {
    return m_cover;
}
void OAIInputMediaVideo::setCover(const QString &cover) {
    m_cover = cover;
    m_cover_isSet = true;
}

bool OAIInputMediaVideo::is_cover_Set() const{
    return m_cover_isSet;
}

bool OAIInputMediaVideo::is_cover_Valid() const{
    return m_cover_isValid;
}

qint32 OAIInputMediaVideo::getStartTimestamp() const {
    return m_start_timestamp;
}
void OAIInputMediaVideo::setStartTimestamp(const qint32 &start_timestamp) {
    m_start_timestamp = start_timestamp;
    m_start_timestamp_isSet = true;
}

bool OAIInputMediaVideo::is_start_timestamp_Set() const{
    return m_start_timestamp_isSet;
}

bool OAIInputMediaVideo::is_start_timestamp_Valid() const{
    return m_start_timestamp_isValid;
}

QString OAIInputMediaVideo::getCaption() const {
    return m_caption;
}
void OAIInputMediaVideo::setCaption(const QString &caption) {
    m_caption = caption;
    m_caption_isSet = true;
}

bool OAIInputMediaVideo::is_caption_Set() const{
    return m_caption_isSet;
}

bool OAIInputMediaVideo::is_caption_Valid() const{
    return m_caption_isValid;
}

QString OAIInputMediaVideo::getParseMode() const {
    return m_parse_mode;
}
void OAIInputMediaVideo::setParseMode(const QString &parse_mode) {
    m_parse_mode = parse_mode;
    m_parse_mode_isSet = true;
}

bool OAIInputMediaVideo::is_parse_mode_Set() const{
    return m_parse_mode_isSet;
}

bool OAIInputMediaVideo::is_parse_mode_Valid() const{
    return m_parse_mode_isValid;
}

QList<OAIMessageEntity> OAIInputMediaVideo::getCaptionEntities() const {
    return m_caption_entities;
}
void OAIInputMediaVideo::setCaptionEntities(const QList<OAIMessageEntity> &caption_entities) {
    m_caption_entities = caption_entities;
    m_caption_entities_isSet = true;
}

bool OAIInputMediaVideo::is_caption_entities_Set() const{
    return m_caption_entities_isSet;
}

bool OAIInputMediaVideo::is_caption_entities_Valid() const{
    return m_caption_entities_isValid;
}

bool OAIInputMediaVideo::isShowCaptionAboveMedia() const {
    return m_show_caption_above_media;
}
void OAIInputMediaVideo::setShowCaptionAboveMedia(const bool &show_caption_above_media) {
    m_show_caption_above_media = show_caption_above_media;
    m_show_caption_above_media_isSet = true;
}

bool OAIInputMediaVideo::is_show_caption_above_media_Set() const{
    return m_show_caption_above_media_isSet;
}

bool OAIInputMediaVideo::is_show_caption_above_media_Valid() const{
    return m_show_caption_above_media_isValid;
}

qint32 OAIInputMediaVideo::getWidth() const {
    return m_width;
}
void OAIInputMediaVideo::setWidth(const qint32 &width) {
    m_width = width;
    m_width_isSet = true;
}

bool OAIInputMediaVideo::is_width_Set() const{
    return m_width_isSet;
}

bool OAIInputMediaVideo::is_width_Valid() const{
    return m_width_isValid;
}

qint32 OAIInputMediaVideo::getHeight() const {
    return m_height;
}
void OAIInputMediaVideo::setHeight(const qint32 &height) {
    m_height = height;
    m_height_isSet = true;
}

bool OAIInputMediaVideo::is_height_Set() const{
    return m_height_isSet;
}

bool OAIInputMediaVideo::is_height_Valid() const{
    return m_height_isValid;
}

qint32 OAIInputMediaVideo::getDuration() const {
    return m_duration;
}
void OAIInputMediaVideo::setDuration(const qint32 &duration) {
    m_duration = duration;
    m_duration_isSet = true;
}

bool OAIInputMediaVideo::is_duration_Set() const{
    return m_duration_isSet;
}

bool OAIInputMediaVideo::is_duration_Valid() const{
    return m_duration_isValid;
}

bool OAIInputMediaVideo::isSupportsStreaming() const {
    return m_supports_streaming;
}
void OAIInputMediaVideo::setSupportsStreaming(const bool &supports_streaming) {
    m_supports_streaming = supports_streaming;
    m_supports_streaming_isSet = true;
}

bool OAIInputMediaVideo::is_supports_streaming_Set() const{
    return m_supports_streaming_isSet;
}

bool OAIInputMediaVideo::is_supports_streaming_Valid() const{
    return m_supports_streaming_isValid;
}

bool OAIInputMediaVideo::isHasSpoiler() const {
    return m_has_spoiler;
}
void OAIInputMediaVideo::setHasSpoiler(const bool &has_spoiler) {
    m_has_spoiler = has_spoiler;
    m_has_spoiler_isSet = true;
}

bool OAIInputMediaVideo::is_has_spoiler_Set() const{
    return m_has_spoiler_isSet;
}

bool OAIInputMediaVideo::is_has_spoiler_Valid() const{
    return m_has_spoiler_isValid;
}

bool OAIInputMediaVideo::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_media_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_thumbnail_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_cover_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_start_timestamp_isSet) {
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

        if (m_width_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_height_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_duration_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_supports_streaming_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_has_spoiler_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIInputMediaVideo::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && m_media_isValid && true;
}

} // namespace tele_rest
