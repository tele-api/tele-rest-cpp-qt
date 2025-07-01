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

#include "OAIVideoNote.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIVideoNote::OAIVideoNote(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIVideoNote::OAIVideoNote() {
    this->initializeModel();
}

OAIVideoNote::~OAIVideoNote() {}

void OAIVideoNote::initializeModel() {

    m_file_id_isSet = false;
    m_file_id_isValid = false;

    m_file_unique_id_isSet = false;
    m_file_unique_id_isValid = false;

    m_length_isSet = false;
    m_length_isValid = false;

    m_duration_isSet = false;
    m_duration_isValid = false;

    m_thumbnail_isSet = false;
    m_thumbnail_isValid = false;

    m_file_size_isSet = false;
    m_file_size_isValid = false;
}

void OAIVideoNote::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIVideoNote::fromJsonObject(QJsonObject json) {

    m_file_id_isValid = ::tele_rest::fromJsonValue(m_file_id, json[QString("file_id")]);
    m_file_id_isSet = !json[QString("file_id")].isNull() && m_file_id_isValid;

    m_file_unique_id_isValid = ::tele_rest::fromJsonValue(m_file_unique_id, json[QString("file_unique_id")]);
    m_file_unique_id_isSet = !json[QString("file_unique_id")].isNull() && m_file_unique_id_isValid;

    m_length_isValid = ::tele_rest::fromJsonValue(m_length, json[QString("length")]);
    m_length_isSet = !json[QString("length")].isNull() && m_length_isValid;

    m_duration_isValid = ::tele_rest::fromJsonValue(m_duration, json[QString("duration")]);
    m_duration_isSet = !json[QString("duration")].isNull() && m_duration_isValid;

    m_thumbnail_isValid = ::tele_rest::fromJsonValue(m_thumbnail, json[QString("thumbnail")]);
    m_thumbnail_isSet = !json[QString("thumbnail")].isNull() && m_thumbnail_isValid;

    m_file_size_isValid = ::tele_rest::fromJsonValue(m_file_size, json[QString("file_size")]);
    m_file_size_isSet = !json[QString("file_size")].isNull() && m_file_size_isValid;
}

QString OAIVideoNote::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIVideoNote::asJsonObject() const {
    QJsonObject obj;
    if (m_file_id_isSet) {
        obj.insert(QString("file_id"), ::tele_rest::toJsonValue(m_file_id));
    }
    if (m_file_unique_id_isSet) {
        obj.insert(QString("file_unique_id"), ::tele_rest::toJsonValue(m_file_unique_id));
    }
    if (m_length_isSet) {
        obj.insert(QString("length"), ::tele_rest::toJsonValue(m_length));
    }
    if (m_duration_isSet) {
        obj.insert(QString("duration"), ::tele_rest::toJsonValue(m_duration));
    }
    if (m_thumbnail.isSet()) {
        obj.insert(QString("thumbnail"), ::tele_rest::toJsonValue(m_thumbnail));
    }
    if (m_file_size_isSet) {
        obj.insert(QString("file_size"), ::tele_rest::toJsonValue(m_file_size));
    }
    return obj;
}

QString OAIVideoNote::getFileId() const {
    return m_file_id;
}
void OAIVideoNote::setFileId(const QString &file_id) {
    m_file_id = file_id;
    m_file_id_isSet = true;
}

bool OAIVideoNote::is_file_id_Set() const{
    return m_file_id_isSet;
}

bool OAIVideoNote::is_file_id_Valid() const{
    return m_file_id_isValid;
}

QString OAIVideoNote::getFileUniqueId() const {
    return m_file_unique_id;
}
void OAIVideoNote::setFileUniqueId(const QString &file_unique_id) {
    m_file_unique_id = file_unique_id;
    m_file_unique_id_isSet = true;
}

bool OAIVideoNote::is_file_unique_id_Set() const{
    return m_file_unique_id_isSet;
}

bool OAIVideoNote::is_file_unique_id_Valid() const{
    return m_file_unique_id_isValid;
}

qint32 OAIVideoNote::getLength() const {
    return m_length;
}
void OAIVideoNote::setLength(const qint32 &length) {
    m_length = length;
    m_length_isSet = true;
}

bool OAIVideoNote::is_length_Set() const{
    return m_length_isSet;
}

bool OAIVideoNote::is_length_Valid() const{
    return m_length_isValid;
}

qint32 OAIVideoNote::getDuration() const {
    return m_duration;
}
void OAIVideoNote::setDuration(const qint32 &duration) {
    m_duration = duration;
    m_duration_isSet = true;
}

bool OAIVideoNote::is_duration_Set() const{
    return m_duration_isSet;
}

bool OAIVideoNote::is_duration_Valid() const{
    return m_duration_isValid;
}

OAIPhotoSize OAIVideoNote::getThumbnail() const {
    return m_thumbnail;
}
void OAIVideoNote::setThumbnail(const OAIPhotoSize &thumbnail) {
    m_thumbnail = thumbnail;
    m_thumbnail_isSet = true;
}

bool OAIVideoNote::is_thumbnail_Set() const{
    return m_thumbnail_isSet;
}

bool OAIVideoNote::is_thumbnail_Valid() const{
    return m_thumbnail_isValid;
}

qint32 OAIVideoNote::getFileSize() const {
    return m_file_size;
}
void OAIVideoNote::setFileSize(const qint32 &file_size) {
    m_file_size = file_size;
    m_file_size_isSet = true;
}

bool OAIVideoNote::is_file_size_Set() const{
    return m_file_size_isSet;
}

bool OAIVideoNote::is_file_size_Valid() const{
    return m_file_size_isValid;
}

bool OAIVideoNote::isSet() const {
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

        if (m_length_isSet) {
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

        if (m_file_size_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIVideoNote::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_file_id_isValid && m_file_unique_id_isValid && m_length_isValid && m_duration_isValid && true;
}

} // namespace tele_rest
