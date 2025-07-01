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

#include "OAIAudio.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIAudio::OAIAudio(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAudio::OAIAudio() {
    this->initializeModel();
}

OAIAudio::~OAIAudio() {}

void OAIAudio::initializeModel() {

    m_file_id_isSet = false;
    m_file_id_isValid = false;

    m_file_unique_id_isSet = false;
    m_file_unique_id_isValid = false;

    m_duration_isSet = false;
    m_duration_isValid = false;

    m_performer_isSet = false;
    m_performer_isValid = false;

    m_title_isSet = false;
    m_title_isValid = false;

    m_file_name_isSet = false;
    m_file_name_isValid = false;

    m_mime_type_isSet = false;
    m_mime_type_isValid = false;

    m_file_size_isSet = false;
    m_file_size_isValid = false;

    m_thumbnail_isSet = false;
    m_thumbnail_isValid = false;
}

void OAIAudio::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIAudio::fromJsonObject(QJsonObject json) {

    m_file_id_isValid = ::tele_rest::fromJsonValue(m_file_id, json[QString("file_id")]);
    m_file_id_isSet = !json[QString("file_id")].isNull() && m_file_id_isValid;

    m_file_unique_id_isValid = ::tele_rest::fromJsonValue(m_file_unique_id, json[QString("file_unique_id")]);
    m_file_unique_id_isSet = !json[QString("file_unique_id")].isNull() && m_file_unique_id_isValid;

    m_duration_isValid = ::tele_rest::fromJsonValue(m_duration, json[QString("duration")]);
    m_duration_isSet = !json[QString("duration")].isNull() && m_duration_isValid;

    m_performer_isValid = ::tele_rest::fromJsonValue(m_performer, json[QString("performer")]);
    m_performer_isSet = !json[QString("performer")].isNull() && m_performer_isValid;

    m_title_isValid = ::tele_rest::fromJsonValue(m_title, json[QString("title")]);
    m_title_isSet = !json[QString("title")].isNull() && m_title_isValid;

    m_file_name_isValid = ::tele_rest::fromJsonValue(m_file_name, json[QString("file_name")]);
    m_file_name_isSet = !json[QString("file_name")].isNull() && m_file_name_isValid;

    m_mime_type_isValid = ::tele_rest::fromJsonValue(m_mime_type, json[QString("mime_type")]);
    m_mime_type_isSet = !json[QString("mime_type")].isNull() && m_mime_type_isValid;

    m_file_size_isValid = ::tele_rest::fromJsonValue(m_file_size, json[QString("file_size")]);
    m_file_size_isSet = !json[QString("file_size")].isNull() && m_file_size_isValid;

    m_thumbnail_isValid = ::tele_rest::fromJsonValue(m_thumbnail, json[QString("thumbnail")]);
    m_thumbnail_isSet = !json[QString("thumbnail")].isNull() && m_thumbnail_isValid;
}

QString OAIAudio::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIAudio::asJsonObject() const {
    QJsonObject obj;
    if (m_file_id_isSet) {
        obj.insert(QString("file_id"), ::tele_rest::toJsonValue(m_file_id));
    }
    if (m_file_unique_id_isSet) {
        obj.insert(QString("file_unique_id"), ::tele_rest::toJsonValue(m_file_unique_id));
    }
    if (m_duration_isSet) {
        obj.insert(QString("duration"), ::tele_rest::toJsonValue(m_duration));
    }
    if (m_performer_isSet) {
        obj.insert(QString("performer"), ::tele_rest::toJsonValue(m_performer));
    }
    if (m_title_isSet) {
        obj.insert(QString("title"), ::tele_rest::toJsonValue(m_title));
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
    if (m_thumbnail.isSet()) {
        obj.insert(QString("thumbnail"), ::tele_rest::toJsonValue(m_thumbnail));
    }
    return obj;
}

QString OAIAudio::getFileId() const {
    return m_file_id;
}
void OAIAudio::setFileId(const QString &file_id) {
    m_file_id = file_id;
    m_file_id_isSet = true;
}

bool OAIAudio::is_file_id_Set() const{
    return m_file_id_isSet;
}

bool OAIAudio::is_file_id_Valid() const{
    return m_file_id_isValid;
}

QString OAIAudio::getFileUniqueId() const {
    return m_file_unique_id;
}
void OAIAudio::setFileUniqueId(const QString &file_unique_id) {
    m_file_unique_id = file_unique_id;
    m_file_unique_id_isSet = true;
}

bool OAIAudio::is_file_unique_id_Set() const{
    return m_file_unique_id_isSet;
}

bool OAIAudio::is_file_unique_id_Valid() const{
    return m_file_unique_id_isValid;
}

qint32 OAIAudio::getDuration() const {
    return m_duration;
}
void OAIAudio::setDuration(const qint32 &duration) {
    m_duration = duration;
    m_duration_isSet = true;
}

bool OAIAudio::is_duration_Set() const{
    return m_duration_isSet;
}

bool OAIAudio::is_duration_Valid() const{
    return m_duration_isValid;
}

QString OAIAudio::getPerformer() const {
    return m_performer;
}
void OAIAudio::setPerformer(const QString &performer) {
    m_performer = performer;
    m_performer_isSet = true;
}

bool OAIAudio::is_performer_Set() const{
    return m_performer_isSet;
}

bool OAIAudio::is_performer_Valid() const{
    return m_performer_isValid;
}

QString OAIAudio::getTitle() const {
    return m_title;
}
void OAIAudio::setTitle(const QString &title) {
    m_title = title;
    m_title_isSet = true;
}

bool OAIAudio::is_title_Set() const{
    return m_title_isSet;
}

bool OAIAudio::is_title_Valid() const{
    return m_title_isValid;
}

QString OAIAudio::getFileName() const {
    return m_file_name;
}
void OAIAudio::setFileName(const QString &file_name) {
    m_file_name = file_name;
    m_file_name_isSet = true;
}

bool OAIAudio::is_file_name_Set() const{
    return m_file_name_isSet;
}

bool OAIAudio::is_file_name_Valid() const{
    return m_file_name_isValid;
}

QString OAIAudio::getMimeType() const {
    return m_mime_type;
}
void OAIAudio::setMimeType(const QString &mime_type) {
    m_mime_type = mime_type;
    m_mime_type_isSet = true;
}

bool OAIAudio::is_mime_type_Set() const{
    return m_mime_type_isSet;
}

bool OAIAudio::is_mime_type_Valid() const{
    return m_mime_type_isValid;
}

qint32 OAIAudio::getFileSize() const {
    return m_file_size;
}
void OAIAudio::setFileSize(const qint32 &file_size) {
    m_file_size = file_size;
    m_file_size_isSet = true;
}

bool OAIAudio::is_file_size_Set() const{
    return m_file_size_isSet;
}

bool OAIAudio::is_file_size_Valid() const{
    return m_file_size_isValid;
}

OAIPhotoSize OAIAudio::getThumbnail() const {
    return m_thumbnail;
}
void OAIAudio::setThumbnail(const OAIPhotoSize &thumbnail) {
    m_thumbnail = thumbnail;
    m_thumbnail_isSet = true;
}

bool OAIAudio::is_thumbnail_Set() const{
    return m_thumbnail_isSet;
}

bool OAIAudio::is_thumbnail_Valid() const{
    return m_thumbnail_isValid;
}

bool OAIAudio::isSet() const {
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

        if (m_duration_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_performer_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_title_isSet) {
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

        if (m_thumbnail.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIAudio::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_file_id_isValid && m_file_unique_id_isValid && m_duration_isValid && true;
}

} // namespace tele_rest
