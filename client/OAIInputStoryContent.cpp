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

#include "OAIInputStoryContent.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIInputStoryContent::OAIInputStoryContent(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIInputStoryContent::OAIInputStoryContent() {
    this->initializeModel();
}

OAIInputStoryContent::~OAIInputStoryContent() {}

void OAIInputStoryContent::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_photo_isSet = false;
    m_photo_isValid = false;

    m_video_isSet = false;
    m_video_isValid = false;

    m_duration_isSet = false;
    m_duration_isValid = false;

    m_cover_frame_timestamp_isSet = false;
    m_cover_frame_timestamp_isValid = false;

    m_is_animation_isSet = false;
    m_is_animation_isValid = false;
}

void OAIInputStoryContent::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIInputStoryContent::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::tele_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_photo_isValid = ::tele_rest::fromJsonValue(m_photo, json[QString("photo")]);
    m_photo_isSet = !json[QString("photo")].isNull() && m_photo_isValid;

    m_video_isValid = ::tele_rest::fromJsonValue(m_video, json[QString("video")]);
    m_video_isSet = !json[QString("video")].isNull() && m_video_isValid;

    m_duration_isValid = ::tele_rest::fromJsonValue(m_duration, json[QString("duration")]);
    m_duration_isSet = !json[QString("duration")].isNull() && m_duration_isValid;

    m_cover_frame_timestamp_isValid = ::tele_rest::fromJsonValue(m_cover_frame_timestamp, json[QString("cover_frame_timestamp")]);
    m_cover_frame_timestamp_isSet = !json[QString("cover_frame_timestamp")].isNull() && m_cover_frame_timestamp_isValid;

    m_is_animation_isValid = ::tele_rest::fromJsonValue(m_is_animation, json[QString("is_animation")]);
    m_is_animation_isSet = !json[QString("is_animation")].isNull() && m_is_animation_isValid;
}

QString OAIInputStoryContent::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIInputStoryContent::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::tele_rest::toJsonValue(m_type));
    }
    if (m_photo_isSet) {
        obj.insert(QString("photo"), ::tele_rest::toJsonValue(m_photo));
    }
    if (m_video_isSet) {
        obj.insert(QString("video"), ::tele_rest::toJsonValue(m_video));
    }
    if (m_duration_isSet) {
        obj.insert(QString("duration"), ::tele_rest::toJsonValue(m_duration));
    }
    if (m_cover_frame_timestamp_isSet) {
        obj.insert(QString("cover_frame_timestamp"), ::tele_rest::toJsonValue(m_cover_frame_timestamp));
    }
    if (m_is_animation_isSet) {
        obj.insert(QString("is_animation"), ::tele_rest::toJsonValue(m_is_animation));
    }
    return obj;
}

QString OAIInputStoryContent::getType() const {
    return m_type;
}
void OAIInputStoryContent::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIInputStoryContent::is_type_Set() const{
    return m_type_isSet;
}

bool OAIInputStoryContent::is_type_Valid() const{
    return m_type_isValid;
}

QString OAIInputStoryContent::getPhoto() const {
    return m_photo;
}
void OAIInputStoryContent::setPhoto(const QString &photo) {
    m_photo = photo;
    m_photo_isSet = true;
}

bool OAIInputStoryContent::is_photo_Set() const{
    return m_photo_isSet;
}

bool OAIInputStoryContent::is_photo_Valid() const{
    return m_photo_isValid;
}

QString OAIInputStoryContent::getVideo() const {
    return m_video;
}
void OAIInputStoryContent::setVideo(const QString &video) {
    m_video = video;
    m_video_isSet = true;
}

bool OAIInputStoryContent::is_video_Set() const{
    return m_video_isSet;
}

bool OAIInputStoryContent::is_video_Valid() const{
    return m_video_isValid;
}

double OAIInputStoryContent::getDuration() const {
    return m_duration;
}
void OAIInputStoryContent::setDuration(const double &duration) {
    m_duration = duration;
    m_duration_isSet = true;
}

bool OAIInputStoryContent::is_duration_Set() const{
    return m_duration_isSet;
}

bool OAIInputStoryContent::is_duration_Valid() const{
    return m_duration_isValid;
}

double OAIInputStoryContent::getCoverFrameTimestamp() const {
    return m_cover_frame_timestamp;
}
void OAIInputStoryContent::setCoverFrameTimestamp(const double &cover_frame_timestamp) {
    m_cover_frame_timestamp = cover_frame_timestamp;
    m_cover_frame_timestamp_isSet = true;
}

bool OAIInputStoryContent::is_cover_frame_timestamp_Set() const{
    return m_cover_frame_timestamp_isSet;
}

bool OAIInputStoryContent::is_cover_frame_timestamp_Valid() const{
    return m_cover_frame_timestamp_isValid;
}

bool OAIInputStoryContent::isIsAnimation() const {
    return m_is_animation;
}
void OAIInputStoryContent::setIsAnimation(const bool &is_animation) {
    m_is_animation = is_animation;
    m_is_animation_isSet = true;
}

bool OAIInputStoryContent::is_is_animation_Set() const{
    return m_is_animation_isSet;
}

bool OAIInputStoryContent::is_is_animation_Valid() const{
    return m_is_animation_isValid;
}

bool OAIInputStoryContent::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_photo_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_video_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_duration_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_cover_frame_timestamp_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_animation_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIInputStoryContent::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && m_photo_isValid && m_video_isValid && true;
}

} // namespace tele_rest
