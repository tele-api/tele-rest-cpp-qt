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

#include "OAIPhotoSize.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIPhotoSize::OAIPhotoSize(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPhotoSize::OAIPhotoSize() {
    this->initializeModel();
}

OAIPhotoSize::~OAIPhotoSize() {}

void OAIPhotoSize::initializeModel() {

    m_file_id_isSet = false;
    m_file_id_isValid = false;

    m_file_unique_id_isSet = false;
    m_file_unique_id_isValid = false;

    m_width_isSet = false;
    m_width_isValid = false;

    m_height_isSet = false;
    m_height_isValid = false;

    m_file_size_isSet = false;
    m_file_size_isValid = false;
}

void OAIPhotoSize::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPhotoSize::fromJsonObject(QJsonObject json) {

    m_file_id_isValid = ::tele_rest::fromJsonValue(m_file_id, json[QString("file_id")]);
    m_file_id_isSet = !json[QString("file_id")].isNull() && m_file_id_isValid;

    m_file_unique_id_isValid = ::tele_rest::fromJsonValue(m_file_unique_id, json[QString("file_unique_id")]);
    m_file_unique_id_isSet = !json[QString("file_unique_id")].isNull() && m_file_unique_id_isValid;

    m_width_isValid = ::tele_rest::fromJsonValue(m_width, json[QString("width")]);
    m_width_isSet = !json[QString("width")].isNull() && m_width_isValid;

    m_height_isValid = ::tele_rest::fromJsonValue(m_height, json[QString("height")]);
    m_height_isSet = !json[QString("height")].isNull() && m_height_isValid;

    m_file_size_isValid = ::tele_rest::fromJsonValue(m_file_size, json[QString("file_size")]);
    m_file_size_isSet = !json[QString("file_size")].isNull() && m_file_size_isValid;
}

QString OAIPhotoSize::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPhotoSize::asJsonObject() const {
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
    if (m_file_size_isSet) {
        obj.insert(QString("file_size"), ::tele_rest::toJsonValue(m_file_size));
    }
    return obj;
}

QString OAIPhotoSize::getFileId() const {
    return m_file_id;
}
void OAIPhotoSize::setFileId(const QString &file_id) {
    m_file_id = file_id;
    m_file_id_isSet = true;
}

bool OAIPhotoSize::is_file_id_Set() const{
    return m_file_id_isSet;
}

bool OAIPhotoSize::is_file_id_Valid() const{
    return m_file_id_isValid;
}

QString OAIPhotoSize::getFileUniqueId() const {
    return m_file_unique_id;
}
void OAIPhotoSize::setFileUniqueId(const QString &file_unique_id) {
    m_file_unique_id = file_unique_id;
    m_file_unique_id_isSet = true;
}

bool OAIPhotoSize::is_file_unique_id_Set() const{
    return m_file_unique_id_isSet;
}

bool OAIPhotoSize::is_file_unique_id_Valid() const{
    return m_file_unique_id_isValid;
}

qint32 OAIPhotoSize::getWidth() const {
    return m_width;
}
void OAIPhotoSize::setWidth(const qint32 &width) {
    m_width = width;
    m_width_isSet = true;
}

bool OAIPhotoSize::is_width_Set() const{
    return m_width_isSet;
}

bool OAIPhotoSize::is_width_Valid() const{
    return m_width_isValid;
}

qint32 OAIPhotoSize::getHeight() const {
    return m_height;
}
void OAIPhotoSize::setHeight(const qint32 &height) {
    m_height = height;
    m_height_isSet = true;
}

bool OAIPhotoSize::is_height_Set() const{
    return m_height_isSet;
}

bool OAIPhotoSize::is_height_Valid() const{
    return m_height_isValid;
}

qint32 OAIPhotoSize::getFileSize() const {
    return m_file_size;
}
void OAIPhotoSize::setFileSize(const qint32 &file_size) {
    m_file_size = file_size;
    m_file_size_isSet = true;
}

bool OAIPhotoSize::is_file_size_Set() const{
    return m_file_size_isSet;
}

bool OAIPhotoSize::is_file_size_Valid() const{
    return m_file_size_isValid;
}

bool OAIPhotoSize::isSet() const {
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

        if (m_file_size_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPhotoSize::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_file_id_isValid && m_file_unique_id_isValid && m_width_isValid && m_height_isValid && true;
}

} // namespace tele_rest
