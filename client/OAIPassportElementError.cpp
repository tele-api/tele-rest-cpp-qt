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

#include "OAIPassportElementError.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIPassportElementError::OAIPassportElementError(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPassportElementError::OAIPassportElementError() {
    this->initializeModel();
}

OAIPassportElementError::~OAIPassportElementError() {}

void OAIPassportElementError::initializeModel() {

    m_source_isSet = false;
    m_source_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;

    m_field_name_isSet = false;
    m_field_name_isValid = false;

    m_data_hash_isSet = false;
    m_data_hash_isValid = false;

    m_message_isSet = false;
    m_message_isValid = false;

    m_file_hash_isSet = false;
    m_file_hash_isValid = false;

    m_file_hashes_isSet = false;
    m_file_hashes_isValid = false;

    m_element_hash_isSet = false;
    m_element_hash_isValid = false;
}

void OAIPassportElementError::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPassportElementError::fromJsonObject(QJsonObject json) {

    m_source_isValid = ::tele_rest::fromJsonValue(m_source, json[QString("source")]);
    m_source_isSet = !json[QString("source")].isNull() && m_source_isValid;

    m_type_isValid = ::tele_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_field_name_isValid = ::tele_rest::fromJsonValue(m_field_name, json[QString("field_name")]);
    m_field_name_isSet = !json[QString("field_name")].isNull() && m_field_name_isValid;

    m_data_hash_isValid = ::tele_rest::fromJsonValue(m_data_hash, json[QString("data_hash")]);
    m_data_hash_isSet = !json[QString("data_hash")].isNull() && m_data_hash_isValid;

    m_message_isValid = ::tele_rest::fromJsonValue(m_message, json[QString("message")]);
    m_message_isSet = !json[QString("message")].isNull() && m_message_isValid;

    m_file_hash_isValid = ::tele_rest::fromJsonValue(m_file_hash, json[QString("file_hash")]);
    m_file_hash_isSet = !json[QString("file_hash")].isNull() && m_file_hash_isValid;

    m_file_hashes_isValid = ::tele_rest::fromJsonValue(m_file_hashes, json[QString("file_hashes")]);
    m_file_hashes_isSet = !json[QString("file_hashes")].isNull() && m_file_hashes_isValid;

    m_element_hash_isValid = ::tele_rest::fromJsonValue(m_element_hash, json[QString("element_hash")]);
    m_element_hash_isSet = !json[QString("element_hash")].isNull() && m_element_hash_isValid;
}

QString OAIPassportElementError::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPassportElementError::asJsonObject() const {
    QJsonObject obj;
    if (m_source_isSet) {
        obj.insert(QString("source"), ::tele_rest::toJsonValue(m_source));
    }
    if (m_type_isSet) {
        obj.insert(QString("type"), ::tele_rest::toJsonValue(m_type));
    }
    if (m_field_name_isSet) {
        obj.insert(QString("field_name"), ::tele_rest::toJsonValue(m_field_name));
    }
    if (m_data_hash_isSet) {
        obj.insert(QString("data_hash"), ::tele_rest::toJsonValue(m_data_hash));
    }
    if (m_message_isSet) {
        obj.insert(QString("message"), ::tele_rest::toJsonValue(m_message));
    }
    if (m_file_hash_isSet) {
        obj.insert(QString("file_hash"), ::tele_rest::toJsonValue(m_file_hash));
    }
    if (m_file_hashes.size() > 0) {
        obj.insert(QString("file_hashes"), ::tele_rest::toJsonValue(m_file_hashes));
    }
    if (m_element_hash_isSet) {
        obj.insert(QString("element_hash"), ::tele_rest::toJsonValue(m_element_hash));
    }
    return obj;
}

QString OAIPassportElementError::getSource() const {
    return m_source;
}
void OAIPassportElementError::setSource(const QString &source) {
    m_source = source;
    m_source_isSet = true;
}

bool OAIPassportElementError::is_source_Set() const{
    return m_source_isSet;
}

bool OAIPassportElementError::is_source_Valid() const{
    return m_source_isValid;
}

QString OAIPassportElementError::getType() const {
    return m_type;
}
void OAIPassportElementError::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIPassportElementError::is_type_Set() const{
    return m_type_isSet;
}

bool OAIPassportElementError::is_type_Valid() const{
    return m_type_isValid;
}

QString OAIPassportElementError::getFieldName() const {
    return m_field_name;
}
void OAIPassportElementError::setFieldName(const QString &field_name) {
    m_field_name = field_name;
    m_field_name_isSet = true;
}

bool OAIPassportElementError::is_field_name_Set() const{
    return m_field_name_isSet;
}

bool OAIPassportElementError::is_field_name_Valid() const{
    return m_field_name_isValid;
}

QString OAIPassportElementError::getDataHash() const {
    return m_data_hash;
}
void OAIPassportElementError::setDataHash(const QString &data_hash) {
    m_data_hash = data_hash;
    m_data_hash_isSet = true;
}

bool OAIPassportElementError::is_data_hash_Set() const{
    return m_data_hash_isSet;
}

bool OAIPassportElementError::is_data_hash_Valid() const{
    return m_data_hash_isValid;
}

QString OAIPassportElementError::getMessage() const {
    return m_message;
}
void OAIPassportElementError::setMessage(const QString &message) {
    m_message = message;
    m_message_isSet = true;
}

bool OAIPassportElementError::is_message_Set() const{
    return m_message_isSet;
}

bool OAIPassportElementError::is_message_Valid() const{
    return m_message_isValid;
}

QString OAIPassportElementError::getFileHash() const {
    return m_file_hash;
}
void OAIPassportElementError::setFileHash(const QString &file_hash) {
    m_file_hash = file_hash;
    m_file_hash_isSet = true;
}

bool OAIPassportElementError::is_file_hash_Set() const{
    return m_file_hash_isSet;
}

bool OAIPassportElementError::is_file_hash_Valid() const{
    return m_file_hash_isValid;
}

QList<QString> OAIPassportElementError::getFileHashes() const {
    return m_file_hashes;
}
void OAIPassportElementError::setFileHashes(const QList<QString> &file_hashes) {
    m_file_hashes = file_hashes;
    m_file_hashes_isSet = true;
}

bool OAIPassportElementError::is_file_hashes_Set() const{
    return m_file_hashes_isSet;
}

bool OAIPassportElementError::is_file_hashes_Valid() const{
    return m_file_hashes_isValid;
}

QString OAIPassportElementError::getElementHash() const {
    return m_element_hash;
}
void OAIPassportElementError::setElementHash(const QString &element_hash) {
    m_element_hash = element_hash;
    m_element_hash_isSet = true;
}

bool OAIPassportElementError::is_element_hash_Set() const{
    return m_element_hash_isSet;
}

bool OAIPassportElementError::is_element_hash_Valid() const{
    return m_element_hash_isValid;
}

bool OAIPassportElementError::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_source_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_field_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_data_hash_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_message_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_file_hash_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_file_hashes.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_element_hash_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPassportElementError::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_source_isValid && m_type_isValid && m_field_name_isValid && m_data_hash_isValid && m_message_isValid && m_file_hash_isValid && m_file_hashes_isValid && m_element_hash_isValid && true;
}

} // namespace tele_rest
