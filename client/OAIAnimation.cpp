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

#include "OAIAnimation.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIAnimation::OAIAnimation(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAnimation::OAIAnimation() {
    this->initializeModel();
}

OAIAnimation::~OAIAnimation() {}

void OAIAnimation::initializeModel() {

    m_file_id_isSet = false;
    m_file_id_isValid = false;

    m_file_unique_id_isSet = false;
    m_file_unique_id_isValid = false;

    m_width_isSet = false;
    m_width_isValid = false;

    m_height_isSet = false;
    m_height_isValid = false;

    m_duration_isSet = false;
    m_duration_isValid = false;

    m_thumbnail_isSet = false;
    m_thumbnail_isValid = false;

    m_file_name_isSet = false;
    m_file_name_isValid = false;

    m_mime_type_isSet = false;
    m_mime_type_isValid = false;

    m_file_size_isSet = false;
    m_file_size_isValid = false;
}

void OAIAnimation::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIAnimation::fromJsonObject(QJsonObject json) {

    m_file_id_isValid = ::tele_rest::fromJsonValue(m_file_id, json[QString("file_id")]);
    m_file_id_isSet = !json[QString("file_id")].isNull() && m_file_id_isValid;

    m_file_unique_id_isValid = ::tele_rest::fromJsonValue(m_file_unique_id, json[QString("file_unique_id")]);
    m_file_unique_id_isSet = !json[QString("file_unique_id")].isNull() && m_file_unique_id_isValid;

    m_width_isValid = ::tele_rest::fromJsonValue(m_width, json[QString("width")]);
    m_width_isSet = !json[QString("width")].isNull() && m_width_isValid;

    m_height_isValid = ::tele_rest::fromJsonValue(m_height, json[QString("height")]);
    m_height_isSet = !json[QString("height")].isNull() && m_height_isValid;

    m_duration_isValid = ::tele_rest::fromJsonValue(m_duration, json[QString("duration")]);
    m_duration_isSet = !json[QString("duration")].isNull() && m_duration_isValid;

    m_thumbnail_isValid = ::tele_rest::fromJsonValue(m_thumbnail, json[QString("thumbnail")]);
    m_thumbnail_isSet = !json[QString("thumbnail")].isNull() && m_thumbnail_isValid;

    m_file_name_isValid = ::tele_rest::fromJsonValue(m_file_name, json[QString("file_name")]);
    m_file_name_isSet = !json[QString("file_name")].isNull() && m_file_name_isValid;

    m_mime_type_isValid = ::tele_rest::fromJsonValue(m_mime_type, json[QString("mime_type")]);
    m_mime_type_isSet = !json[QString("mime_type")].isNull() && m_mime_type_isValid;

    m_file_size_isValid = ::tele_rest::fromJsonValue(m_file_size, json[QString("file_size")]);
    m_file_size_isSet = !json[QString("file_size")].isNull() && m_file_size_isValid;
}

QString OAIAnimation::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIAnimation::asJsonObject() const {
    QJsonObject obj;
    if (m_file_id_isSet) {
        obj.insert(QString("file_id"), ::tele_rest::toJsonValue(m_file_id));
    }
    if (m_file_unique_id_isSet) {
        obj.insert(QString("file_unique_id"), ::tele_rest::toJsonValue(m_file_unique_id));
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
    if (m_thumbnail.isSet()) {
        obj.insert(QString("thumbnail"), ::tele_rest::toJsonValue(m_thumbnail));
    }
    if (m_file_name_isSet) {
        obj.insert(QString("file_name"), ::tele_rest::toJsonValue(m_file_name));
    }
    if (m_mime_type_isSet) {
        obj.insert(QString("mime_type"), ::tele_rest::toJsonValue(m_mime_type));
    }
    if (m_file_size_isSet) {
        obj.insert(QString("file_size"), ::tele_rest::toJsonValue(m_file_size));
    }
    return obj;
}

QString OAIAnimation::getFileId() const {
    return m_file_id;
}
void OAIAnimation::setFileId(const QString &file_id) {
    m_file_id = file_id;
    m_file_id_isSet = true;
}

bool OAIAnimation::is_file_id_Set() const{
    return m_file_id_isSet;
}

bool OAIAnimation::is_file_id_Valid() const{
    return m_file_id_isValid;
}

QString OAIAnimation::getFileUniqueId() const {
    return m_file_unique_id;
}
void OAIAnimation::setFileUniqueId(const QString &file_unique_id) {
    m_file_unique_id = file_unique_id;
    m_file_unique_id_isSet = true;
}

bool OAIAnimation::is_file_unique_id_Set() const{
    return m_file_unique_id_isSet;
}

bool OAIAnimation::is_file_unique_id_Valid() const{
    return m_file_unique_id_isValid;
}

qint32 OAIAnimation::getWidth() const {
    return m_width;
}
void OAIAnimation::setWidth(const qint32 &width) {
    m_width = width;
    m_width_isSet = true;
}

bool OAIAnimation::is_width_Set() const{
    return m_width_isSet;
}

bool OAIAnimation::is_width_Valid() const{
    return m_width_isValid;
}

qint32 OAIAnimation::getHeight() const {
    return m_height;
}
void OAIAnimation::setHeight(const qint32 &height) {
    m_height = height;
    m_height_isSet = true;
}

bool OAIAnimation::is_height_Set() const{
    return m_height_isSet;
}

bool OAIAnimation::is_height_Valid() const{
    return m_height_isValid;
}

qint32 OAIAnimation::getDuration() const {
    return m_duration;
}
void OAIAnimation::setDuration(const qint32 &duration) {
    m_duration = duration;
    m_duration_isSet = true;
}

bool OAIAnimation::is_duration_Set() const{
    return m_duration_isSet;
}

bool OAIAnimation::is_duration_Valid() const{
    return m_duration_isValid;
}

OAIPhotoSize OAIAnimation::getThumbnail() const {
    return m_thumbnail;
}
void OAIAnimation::setThumbnail(const OAIPhotoSize &thumbnail) {
    m_thumbnail = thumbnail;
    m_thumbnail_isSet = true;
}

bool OAIAnimation::is_thumbnail_Set() const{
    return m_thumbnail_isSet;
}

bool OAIAnimation::is_thumbnail_Valid() const{
    return m_thumbnail_isValid;
}

QString OAIAnimation::getFileName() const {
    return m_file_name;
}
void OAIAnimation::setFileName(const QString &file_name) {
    m_file_name = file_name;
    m_file_name_isSet = true;
}

bool OAIAnimation::is_file_name_Set() const{
    return m_file_name_isSet;
}

bool OAIAnimation::is_file_name_Valid() const{
    return m_file_name_isValid;
}

QString OAIAnimation::getMimeType() const {
    return m_mime_type;
}
void OAIAnimation::setMimeType(const QString &mime_type) {
    m_mime_type = mime_type;
    m_mime_type_isSet = true;
}

bool OAIAnimation::is_mime_type_Set() const{
    return m_mime_type_isSet;
}

bool OAIAnimation::is_mime_type_Valid() const{
    return m_mime_type_isValid;
}

qint32 OAIAnimation::getFileSize() const {
    return m_file_size;
}
void OAIAnimation::setFileSize(const qint32 &file_size) {
    m_file_size = file_size;
    m_file_size_isSet = true;
}

bool OAIAnimation::is_file_size_Set() const{
    return m_file_size_isSet;
}

bool OAIAnimation::is_file_size_Valid() const{
    return m_file_size_isValid;
}

bool OAIAnimation::isSet() const {
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

        if (m_thumbnail.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_file_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_mime_type_isSet) {
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

bool OAIAnimation::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_file_id_isValid && m_file_unique_id_isValid && m_width_isValid && m_height_isValid && m_duration_isValid && true;
}

} // namespace tele_rest
