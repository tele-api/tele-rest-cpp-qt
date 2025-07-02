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

#include "OAISticker.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAISticker::OAISticker(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISticker::OAISticker() {
    this->initializeModel();
}

OAISticker::~OAISticker() {}

void OAISticker::initializeModel() {

    m_file_id_isSet = false;
    m_file_id_isValid = false;

    m_file_unique_id_isSet = false;
    m_file_unique_id_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;

    m_width_isSet = false;
    m_width_isValid = false;

    m_height_isSet = false;
    m_height_isValid = false;

    m_is_animated_isSet = false;
    m_is_animated_isValid = false;

    m_is_video_isSet = false;
    m_is_video_isValid = false;

    m_thumbnail_isSet = false;
    m_thumbnail_isValid = false;

    m_emoji_isSet = false;
    m_emoji_isValid = false;

    m_set_name_isSet = false;
    m_set_name_isValid = false;

    m_premium_animation_isSet = false;
    m_premium_animation_isValid = false;

    m_mask_position_isSet = false;
    m_mask_position_isValid = false;

    m_custom_emoji_id_isSet = false;
    m_custom_emoji_id_isValid = false;

    m_needs_repainting_isSet = false;
    m_needs_repainting_isValid = false;

    m_file_size_isSet = false;
    m_file_size_isValid = false;
}

void OAISticker::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISticker::fromJsonObject(QJsonObject json) {

    m_file_id_isValid = ::tele_rest::fromJsonValue(m_file_id, json[QString("file_id")]);
    m_file_id_isSet = !json[QString("file_id")].isNull() && m_file_id_isValid;

    m_file_unique_id_isValid = ::tele_rest::fromJsonValue(m_file_unique_id, json[QString("file_unique_id")]);
    m_file_unique_id_isSet = !json[QString("file_unique_id")].isNull() && m_file_unique_id_isValid;

    m_type_isValid = ::tele_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_width_isValid = ::tele_rest::fromJsonValue(m_width, json[QString("width")]);
    m_width_isSet = !json[QString("width")].isNull() && m_width_isValid;

    m_height_isValid = ::tele_rest::fromJsonValue(m_height, json[QString("height")]);
    m_height_isSet = !json[QString("height")].isNull() && m_height_isValid;

    m_is_animated_isValid = ::tele_rest::fromJsonValue(m_is_animated, json[QString("is_animated")]);
    m_is_animated_isSet = !json[QString("is_animated")].isNull() && m_is_animated_isValid;

    m_is_video_isValid = ::tele_rest::fromJsonValue(m_is_video, json[QString("is_video")]);
    m_is_video_isSet = !json[QString("is_video")].isNull() && m_is_video_isValid;

    m_thumbnail_isValid = ::tele_rest::fromJsonValue(m_thumbnail, json[QString("thumbnail")]);
    m_thumbnail_isSet = !json[QString("thumbnail")].isNull() && m_thumbnail_isValid;

    m_emoji_isValid = ::tele_rest::fromJsonValue(m_emoji, json[QString("emoji")]);
    m_emoji_isSet = !json[QString("emoji")].isNull() && m_emoji_isValid;

    m_set_name_isValid = ::tele_rest::fromJsonValue(m_set_name, json[QString("set_name")]);
    m_set_name_isSet = !json[QString("set_name")].isNull() && m_set_name_isValid;

    m_premium_animation_isValid = ::tele_rest::fromJsonValue(m_premium_animation, json[QString("premium_animation")]);
    m_premium_animation_isSet = !json[QString("premium_animation")].isNull() && m_premium_animation_isValid;

    m_mask_position_isValid = ::tele_rest::fromJsonValue(m_mask_position, json[QString("mask_position")]);
    m_mask_position_isSet = !json[QString("mask_position")].isNull() && m_mask_position_isValid;

    m_custom_emoji_id_isValid = ::tele_rest::fromJsonValue(m_custom_emoji_id, json[QString("custom_emoji_id")]);
    m_custom_emoji_id_isSet = !json[QString("custom_emoji_id")].isNull() && m_custom_emoji_id_isValid;

    m_needs_repainting_isValid = ::tele_rest::fromJsonValue(m_needs_repainting, json[QString("needs_repainting")]);
    m_needs_repainting_isSet = !json[QString("needs_repainting")].isNull() && m_needs_repainting_isValid;

    m_file_size_isValid = ::tele_rest::fromJsonValue(m_file_size, json[QString("file_size")]);
    m_file_size_isSet = !json[QString("file_size")].isNull() && m_file_size_isValid;
}

QString OAISticker::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISticker::asJsonObject() const {
    QJsonObject obj;
    if (m_file_id_isSet) {
        obj.insert(QString("file_id"), ::tele_rest::toJsonValue(m_file_id));
    }
    if (m_file_unique_id_isSet) {
        obj.insert(QString("file_unique_id"), ::tele_rest::toJsonValue(m_file_unique_id));
    }
    if (m_type_isSet) {
        obj.insert(QString("type"), ::tele_rest::toJsonValue(m_type));
    }
    if (m_width_isSet) {
        obj.insert(QString("width"), ::tele_rest::toJsonValue(m_width));
    }
    if (m_height_isSet) {
        obj.insert(QString("height"), ::tele_rest::toJsonValue(m_height));
    }
    if (m_is_animated_isSet) {
        obj.insert(QString("is_animated"), ::tele_rest::toJsonValue(m_is_animated));
    }
    if (m_is_video_isSet) {
        obj.insert(QString("is_video"), ::tele_rest::toJsonValue(m_is_video));
    }
    if (m_thumbnail.isSet()) {
        obj.insert(QString("thumbnail"), ::tele_rest::toJsonValue(m_thumbnail));
    }
    if (m_emoji_isSet) {
        obj.insert(QString("emoji"), ::tele_rest::toJsonValue(m_emoji));
    }
    if (m_set_name_isSet) {
        obj.insert(QString("set_name"), ::tele_rest::toJsonValue(m_set_name));
    }
    if (m_premium_animation.isSet()) {
        obj.insert(QString("premium_animation"), ::tele_rest::toJsonValue(m_premium_animation));
    }
    if (m_mask_position.isSet()) {
        obj.insert(QString("mask_position"), ::tele_rest::toJsonValue(m_mask_position));
    }
    if (m_custom_emoji_id_isSet) {
        obj.insert(QString("custom_emoji_id"), ::tele_rest::toJsonValue(m_custom_emoji_id));
    }
    if (m_needs_repainting_isSet) {
        obj.insert(QString("needs_repainting"), ::tele_rest::toJsonValue(m_needs_repainting));
    }
    if (m_file_size_isSet) {
        obj.insert(QString("file_size"), ::tele_rest::toJsonValue(m_file_size));
    }
    return obj;
}

QString OAISticker::getFileId() const {
    return m_file_id;
}
void OAISticker::setFileId(const QString &file_id) {
    m_file_id = file_id;
    m_file_id_isSet = true;
}

bool OAISticker::is_file_id_Set() const{
    return m_file_id_isSet;
}

bool OAISticker::is_file_id_Valid() const{
    return m_file_id_isValid;
}

QString OAISticker::getFileUniqueId() const {
    return m_file_unique_id;
}
void OAISticker::setFileUniqueId(const QString &file_unique_id) {
    m_file_unique_id = file_unique_id;
    m_file_unique_id_isSet = true;
}

bool OAISticker::is_file_unique_id_Set() const{
    return m_file_unique_id_isSet;
}

bool OAISticker::is_file_unique_id_Valid() const{
    return m_file_unique_id_isValid;
}

QString OAISticker::getType() const {
    return m_type;
}
void OAISticker::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAISticker::is_type_Set() const{
    return m_type_isSet;
}

bool OAISticker::is_type_Valid() const{
    return m_type_isValid;
}

qint32 OAISticker::getWidth() const {
    return m_width;
}
void OAISticker::setWidth(const qint32 &width) {
    m_width = width;
    m_width_isSet = true;
}

bool OAISticker::is_width_Set() const{
    return m_width_isSet;
}

bool OAISticker::is_width_Valid() const{
    return m_width_isValid;
}

qint32 OAISticker::getHeight() const {
    return m_height;
}
void OAISticker::setHeight(const qint32 &height) {
    m_height = height;
    m_height_isSet = true;
}

bool OAISticker::is_height_Set() const{
    return m_height_isSet;
}

bool OAISticker::is_height_Valid() const{
    return m_height_isValid;
}

bool OAISticker::isIsAnimated() const {
    return m_is_animated;
}
void OAISticker::setIsAnimated(const bool &is_animated) {
    m_is_animated = is_animated;
    m_is_animated_isSet = true;
}

bool OAISticker::is_is_animated_Set() const{
    return m_is_animated_isSet;
}

bool OAISticker::is_is_animated_Valid() const{
    return m_is_animated_isValid;
}

bool OAISticker::isIsVideo() const {
    return m_is_video;
}
void OAISticker::setIsVideo(const bool &is_video) {
    m_is_video = is_video;
    m_is_video_isSet = true;
}

bool OAISticker::is_is_video_Set() const{
    return m_is_video_isSet;
}

bool OAISticker::is_is_video_Valid() const{
    return m_is_video_isValid;
}

OAIPhotoSize OAISticker::getThumbnail() const {
    return m_thumbnail;
}
void OAISticker::setThumbnail(const OAIPhotoSize &thumbnail) {
    m_thumbnail = thumbnail;
    m_thumbnail_isSet = true;
}

bool OAISticker::is_thumbnail_Set() const{
    return m_thumbnail_isSet;
}

bool OAISticker::is_thumbnail_Valid() const{
    return m_thumbnail_isValid;
}

QString OAISticker::getEmoji() const {
    return m_emoji;
}
void OAISticker::setEmoji(const QString &emoji) {
    m_emoji = emoji;
    m_emoji_isSet = true;
}

bool OAISticker::is_emoji_Set() const{
    return m_emoji_isSet;
}

bool OAISticker::is_emoji_Valid() const{
    return m_emoji_isValid;
}

QString OAISticker::getSetName() const {
    return m_set_name;
}
void OAISticker::setSetName(const QString &set_name) {
    m_set_name = set_name;
    m_set_name_isSet = true;
}

bool OAISticker::is_set_name_Set() const{
    return m_set_name_isSet;
}

bool OAISticker::is_set_name_Valid() const{
    return m_set_name_isValid;
}

OAIFile OAISticker::getPremiumAnimation() const {
    return m_premium_animation;
}
void OAISticker::setPremiumAnimation(const OAIFile &premium_animation) {
    m_premium_animation = premium_animation;
    m_premium_animation_isSet = true;
}

bool OAISticker::is_premium_animation_Set() const{
    return m_premium_animation_isSet;
}

bool OAISticker::is_premium_animation_Valid() const{
    return m_premium_animation_isValid;
}

OAIMaskPosition OAISticker::getMaskPosition() const {
    return m_mask_position;
}
void OAISticker::setMaskPosition(const OAIMaskPosition &mask_position) {
    m_mask_position = mask_position;
    m_mask_position_isSet = true;
}

bool OAISticker::is_mask_position_Set() const{
    return m_mask_position_isSet;
}

bool OAISticker::is_mask_position_Valid() const{
    return m_mask_position_isValid;
}

QString OAISticker::getCustomEmojiId() const {
    return m_custom_emoji_id;
}
void OAISticker::setCustomEmojiId(const QString &custom_emoji_id) {
    m_custom_emoji_id = custom_emoji_id;
    m_custom_emoji_id_isSet = true;
}

bool OAISticker::is_custom_emoji_id_Set() const{
    return m_custom_emoji_id_isSet;
}

bool OAISticker::is_custom_emoji_id_Valid() const{
    return m_custom_emoji_id_isValid;
}

bool OAISticker::isNeedsRepainting() const {
    return m_needs_repainting;
}
void OAISticker::setNeedsRepainting(const bool &needs_repainting) {
    m_needs_repainting = needs_repainting;
    m_needs_repainting_isSet = true;
}

bool OAISticker::is_needs_repainting_Set() const{
    return m_needs_repainting_isSet;
}

bool OAISticker::is_needs_repainting_Valid() const{
    return m_needs_repainting_isValid;
}

qint32 OAISticker::getFileSize() const {
    return m_file_size;
}
void OAISticker::setFileSize(const qint32 &file_size) {
    m_file_size = file_size;
    m_file_size_isSet = true;
}

bool OAISticker::is_file_size_Set() const{
    return m_file_size_isSet;
}

bool OAISticker::is_file_size_Valid() const{
    return m_file_size_isValid;
}

bool OAISticker::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_file_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_file_unique_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_type_isSet) {
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

        if (m_is_animated_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_video_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_thumbnail.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_emoji_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_set_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_premium_animation.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_mask_position.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_custom_emoji_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_needs_repainting_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_file_size_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISticker::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_file_id_isValid && m_file_unique_id_isValid && m_type_isValid && m_width_isValid && m_height_isValid && m_is_animated_isValid && m_is_video_isValid && true;
}

} // namespace tele_rest
