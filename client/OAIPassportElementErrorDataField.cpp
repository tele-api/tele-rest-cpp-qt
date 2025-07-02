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

#include "OAIPassportElementErrorDataField.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIPassportElementErrorDataField::OAIPassportElementErrorDataField(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPassportElementErrorDataField::OAIPassportElementErrorDataField() {
    this->initializeModel();
}

OAIPassportElementErrorDataField::~OAIPassportElementErrorDataField() {}

void OAIPassportElementErrorDataField::initializeModel() {

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
}

void OAIPassportElementErrorDataField::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPassportElementErrorDataField::fromJsonObject(QJsonObject json) {

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
}

QString OAIPassportElementErrorDataField::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPassportElementErrorDataField::asJsonObject() const {
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
    return obj;
}

QString OAIPassportElementErrorDataField::getSource() const {
    return m_source;
}
void OAIPassportElementErrorDataField::setSource(const QString &source) {
    m_source = source;
    m_source_isSet = true;
}

bool OAIPassportElementErrorDataField::is_source_Set() const{
    return m_source_isSet;
}

bool OAIPassportElementErrorDataField::is_source_Valid() const{
    return m_source_isValid;
}

QString OAIPassportElementErrorDataField::getType() const {
    return m_type;
}
void OAIPassportElementErrorDataField::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIPassportElementErrorDataField::is_type_Set() const{
    return m_type_isSet;
}

bool OAIPassportElementErrorDataField::is_type_Valid() const{
    return m_type_isValid;
}

QString OAIPassportElementErrorDataField::getFieldName() const {
    return m_field_name;
}
void OAIPassportElementErrorDataField::setFieldName(const QString &field_name) {
    m_field_name = field_name;
    m_field_name_isSet = true;
}

bool OAIPassportElementErrorDataField::is_field_name_Set() const{
    return m_field_name_isSet;
}

bool OAIPassportElementErrorDataField::is_field_name_Valid() const{
    return m_field_name_isValid;
}

QString OAIPassportElementErrorDataField::getDataHash() const {
    return m_data_hash;
}
void OAIPassportElementErrorDataField::setDataHash(const QString &data_hash) {
    m_data_hash = data_hash;
    m_data_hash_isSet = true;
}

bool OAIPassportElementErrorDataField::is_data_hash_Set() const{
    return m_data_hash_isSet;
}

bool OAIPassportElementErrorDataField::is_data_hash_Valid() const{
    return m_data_hash_isValid;
}

QString OAIPassportElementErrorDataField::getMessage() const {
    return m_message;
}
void OAIPassportElementErrorDataField::setMessage(const QString &message) {
    m_message = message;
    m_message_isSet = true;
}

bool OAIPassportElementErrorDataField::is_message_Set() const{
    return m_message_isSet;
}

bool OAIPassportElementErrorDataField::is_message_Valid() const{
    return m_message_isValid;
}

bool OAIPassportElementErrorDataField::isSet() const {
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
    } while (false);
    return isObjectUpdated;
}

bool OAIPassportElementErrorDataField::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_source_isValid && m_type_isValid && m_field_name_isValid && m_data_hash_isValid && m_message_isValid && true;
}

} // namespace tele_rest
